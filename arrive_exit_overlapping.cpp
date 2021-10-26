#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
        return a.second<b.second;
    }

int main(){
    int arr1[]={1,2,4,7,8,12};
    int arr2[]={2,7,8,12,10,15};
    multimap<int,int> m;
    multimap<int,int> m2;
    int n=sizeof(arr1)/sizeof(arr1[0]);
    for(int i=0;i<n;i++){
        m.insert({arr1[i],1});
    }
    for(int i=0;i<n;i++){
        m.insert({arr2[i],-1});
    }
    int p=0;
    for(auto i : m){
        p+=i.second;
        m2.insert({i.first,p});
    }
    auto it = max_element(m2.begin(),m2.end(),cmp);
    cout<<it->first<<" "<<it->second;
}
