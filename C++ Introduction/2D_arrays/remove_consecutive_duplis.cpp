#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
     int nextIndex = 1;
    char lastChar = input[0];
    for(int i = 0; input[i] != '\0';) { 
        if(input[i] == lastChar) { 
            i++; 
        } 
        else {
            input[nextIndex] = input[i];
            nextIndex++; 
            lastChar = input[i];
            i++;
        }
    }
    input[nextIndex] = '\0';
    // Write your code here
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}
/*
void removeConsecutiveDuplicates(char input[]) {
     int nextIndex = 1;
    char lastChar = input[0];
    for(int i = 0; input[i] != '\0';) { 
        if(input[i] == lastChar) { 
            i++; 
        } 
        else {
            input[nextIndex] = input[i];
            nextIndex++; 
            lastChar = input[i];
            i++;
        }
    }
    input[nextIndex] = '\0';
    // Write your code here
}
*/