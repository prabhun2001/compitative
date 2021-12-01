#include <bits/stdc++.h>
using namespace std;

void increasing(int arr[],int n,int num,int &f,int &l){
    if(n<0){
        return; 
    }
    if(arr[n] == num && l<0){
        cout<<"last "<<n<<endl;
        l=n;
    }
    increasing(arr,n-1,num,f,l);
    if(arr[n] == num && f<0){
        cout<<"first "<<n<<endl;
        f=n;
    }
    return;
}

int main(){
    int n=7,num=3,f=-1,l=-1;
    int arr[]={5,3,7,2,6,3,9};
    increasing(arr,n-1,num,f,l);
    cout<<"first "<<f<<endl;
    cout<<"last "<<l<<endl;
}
