#include <iostream>
#include <cstring>
using namespace std;

void reverseEachWord(char input[]) {
    int i=0;
    while(i<strlen(input)){
        int j=i;
        int p=0;
        for(;input[j]!=' ' and input[j]!='\0'; j++){
            
        }
        for(int k=i;k<(i+j)/2;k++){
            
            char temp=input[k];
            input[k]=input[j-p-1];
            input[j-p-1]=temp;
            p++;
        }
        i=j+1;
    }
    // Write your code here
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}
/*
void reverseEachWord(char input[]) {
    int i=0;
    while(i<strlen(input)){
        int j=i;
        int p=0;
        for(;input[j]!=' ' and input[j]!='\0'; j++){
            
        }
        for(int k=i;k<(i+j)/2;k++){
            
            char temp=input[k];
            input[k]=input[j-p-1];
            input[j-p-1]=temp;
            p++;
        }
        i=j+1;
    }
    // Write your code here
}
*/