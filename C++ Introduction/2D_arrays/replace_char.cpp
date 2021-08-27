#include <iostream>
#include <cstring>
using namespace std;

void replaceCharacter(char input[], char c1, char c2) {
    int i = 0;
    int j = strlen(input);
    for(i; i<j; i++){
        if(input[i] == c1){
            input[i] = c2;
        }
        
        }// Write your code here
}

int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}
/*
void replaceCharacter(char input[], char c1, char c2) {
    int i = 0;
    int j = strlen(input);
    for(i; i<j; i++){
        if(input[i] == c1){
            input[i] = c2;
        }
        
        }// Write your code here
}
*/