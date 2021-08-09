#include<iostream>

using namespace std;

int main(){
    int num;
    cin>>num;

    int decimal = 0, pow=1;
    while(num>0){
        int remainder = num%10;
        decimal= decimal+remainder*pow;
        pow=pow*2;
        num=num/10;
    }
    cout<<decimal;

}