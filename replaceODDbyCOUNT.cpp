#include<bits/stdc++.h>
using namespace std;

void fun(vector<int> &v){
    
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]%2!=0){
            count++;
            if(count>1){
                v[i]=count;
                v.erase(v.begin()+i-1);
                i=i-1;
            }
        }else{
            count=0;
        }
    }
}

int main(){
    vector<int> v{9,3,5,7,33,4,7,5,8,3,3,2,5};
    fun(v);
    for(int i : v){
        cout<<"\n"<<i<<" ";
    }
    return 0;
}
