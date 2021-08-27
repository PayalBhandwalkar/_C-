#include<iostream>
using namespace std;
#include <climits>


int main(){
    int n;
    cin>>n;
    
    int max = INT_MIN;
    int smax = INT_MIN;
    
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        
        if(num>max){
            smax = max;
            max = num;
        }
        
        else if(num>smax && num!=max){
            smax = num;
        }
    }
    cout<<smax;
    
    // Write your code here
    
}
/*
#include<iostream>
using namespace std;
#include <climits>


int main(){
    int n;
    cin>>n;
    
    int max = INT_MIN;
    int smax = INT_MIN;
    
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        
        if(num>max){
            smax = max;
            max = num;
        }
        
        else if(num>smax && num!=max){
            smax = num;
        }
    }
    cout<<smax;
    
    // Write your code here
    
}



*/

