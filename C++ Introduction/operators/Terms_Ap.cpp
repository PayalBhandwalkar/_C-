#include<iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    int res = 0;
    int n =1;
    int count = 0;

    while(count<=num){
        res=3*n+2;
        if(res%4 != 0){
            cout<<res<<" ";
            count++;}

            n++;
    }
    
}