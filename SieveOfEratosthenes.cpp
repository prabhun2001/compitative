//find prime numbers up to n
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> prime;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0;i<=n;i++){
        prime.push_back(1);//cinsider all values as prime
    }
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i<=n;i++){
        if(prime[i]==1){
            for(int j=2;i*j<=n;j++){
                prime[i*j]=0;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==1){
            cout<<i<<" ";
        }
    }
}
