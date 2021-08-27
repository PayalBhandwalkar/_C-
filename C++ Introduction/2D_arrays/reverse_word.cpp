#include <iostream>

using namespace std;

#include <cstring>
void reverseStringWordWise(char input[]) {
  int k = strlen(input);
    int i=k-1;
    int output[k];
    int u = 0;
    while(i>=0){
        int j=i;
        for(;i>=0 and input[i]!= ' '; i--){
            
        }
        for(int h = i+1; h<=j; h++){
            output[u++]=input[h];
            }
        output[u++]= ' ';
        i--;
    }
    int l = 0;
    for(l=0;l<k;l++){
        input[l]=output[l];
    }
    
    // Write your code here
}
int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
/*
#include <cstring>
void reverseStringWordWise(char input[]) {
  int k = strlen(input);
    int i=k-1;
    int output[k];
    int u = 0;
    while(i>=0){
        int j=i;
        for(;i>=0 and input[i]!= ' '; i--){
            
        }
        for(int h = i+1; h<=j; h++){
            output[u++]=input[h];
            }
        output[u++]= ' ';
        i--;
    }
    int l = 0;
    for(l=0;l<k;l++){
        input[l]=output[l];
    }
    
    // Write your code here
}
*/
