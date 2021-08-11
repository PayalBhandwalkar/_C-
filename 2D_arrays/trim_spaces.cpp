#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[]) {
    int count = 0;
    int len = strlen(input);
    for(int i =0;input[i];i++){
        if(input[i] != ' '){
            input[count]=input[i];
            count++;
        }
    }
    input[count] = '\0';
    // Write your code here
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

/*
void trimSpaces(char input[]) {
    int count = 0;
    int len = strlen(input);
    for(int i =0;input[i];i++){
        if(input[i] != ' '){
            input[count]=input[i];
            count++;
        }
    }
    input[count] = '\0';
    // Write your code here
}
*/