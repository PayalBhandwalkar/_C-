#include <iostream>
#include <cstring>
using namespace std;

#include<cstring>
void printSubstrings(char input[]) {
   for(int start = 0; input[start] != '\0'; start++){
        for(int end = start; input[end] != '\0'; end++){
            for(int i = start; i <= end; i++){
                cout << input[i];
            }
            cout << endl;
        }
    }
    
    // Write your code here
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}
/*
#include<cstring>
void printSubstrings(char input[]) {
   for(int start = 0; input[start] != '\0'; start++){
        for(int end = start; input[end] != '\0'; end++){
            for(int i = start; i <= end; i++){
                cout << input[i];
            }
            cout << endl;
        }
    }
    
    // Write your code here
}
*/