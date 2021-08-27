#include<cstring>
#include <iostream>

using namespace std;


bool helper(char input[],int start,int end){
    if(start>=end) return true;
    if(input[start]!=input[end]) return false;
    return helper(input,start+1,end-1);
}
bool checkPalindrome(char input[]) {
    // Write your code here
    int k=strlen(input);
	bool ans =helper(input,0,k-1);
    return ans;
    }

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
