#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[]) {
    int i = 0;
    int j = strlen(str)-1;
    while(j>i){
        if (str[i] != str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
    // Write your code here
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
/*
bool checkPalindrome(char str[]) {
    int i = 0;
    int j = strlen(str)-1;
    while(j>i){
        if (str[i] != str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
    // Write your code here
}

*/