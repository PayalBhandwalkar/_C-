#include<iostream>

using namespace std;

int main(){
    int i,n,sum=0;
    cin>>n;
    int arr[n];
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    }