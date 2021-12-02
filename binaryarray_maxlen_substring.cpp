#include<bits/stdc++.h>
using namespace std;

int fun(vector<int> v){
    int max_len=0;
    int zero_len=0,total_zero=0;
    int curr_len=0;
    int one_len=0,total_one=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        
        if(v[i]==0){
            
            zero_len+=1;
            
        }
        if(v[i]==1){
            
            one_len+=1;
           
        }
        if(v[i]==0 && v[i-1]==1 || (i==n-1 && v[i]==1)){
            total_one=one_len;
            one_len=0;
        }
        if(v[i]==1 && v[i-1]==0 || (i==n-1 && v[i]==0)){
            total_zero=zero_len;
            zero_len=0;
        }
        if(total_zero < total_one){
            curr_len=2*total_zero;
        }else{
            curr_len=2*total_one;
        }
        if(max_len<(curr_len)){
            max_len=(curr_len);
        }
    }
   return max_len;
}

int main(){
    int n;
    vector<int> v{0,1,1,0,1,0,0,1,1};
    n=fun(v);
    
    
    cout<<"\nlength = "<<n;
    return 0;
}
