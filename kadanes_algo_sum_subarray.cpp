#include <bits/stdc++.h>

using namespace std;

int maxsumof_subarray(int arr[],int n){
    int current_sum = 0;
    int max_sum = INT_MIN;
    int p=0,q=0;
    for(int i=0;i<n;i++){
        current_sum += arr[i];
        if(max_sum < current_sum){
            max_sum = current_sum;
            q=i;
        } 
        if(current_sum < 0){
            current_sum=0;
            p=i+1;
        }
    }
    cout<<"from "<<p<<" to "<<q<<endl;
    return max_sum;
}

int main(){
    int n,sum;
    int arr[100];
    cout<<"enter number of elements : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sum=maxsumof_subarray(arr,n);
    cout<<"sum = "<<sum<<endl;
}
