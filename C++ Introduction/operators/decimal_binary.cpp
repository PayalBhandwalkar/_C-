#include<iostream>

using namespace std;

int main(){

    int num;
    cin>>num;
    int binary=0,
    pow=1;
  while(num>0){
    int remainder = num%2;
    binary=binary+remainder*pow;
    pow=pow*10;
    num=num/2;

  }
  cout<<binary;
}