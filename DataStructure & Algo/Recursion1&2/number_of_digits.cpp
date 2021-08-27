#include<iostream>

using namespace std;

int count(int n) {
    int countn = 0;
    while(n!=0){
        n=n/10;
        countn++;
    }
    return countn;
}

int main() {
    int n;
    cin>>n;

    cout<<count(n)<<endl;
}
