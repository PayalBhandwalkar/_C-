#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[]) {
     char result;
  	int i, len;
  	int max = 0;
  	
  	int freq[256] = {0}; 
 
  	len = strlen(input);
  	
  	for(i = 0; i < len; i++)
  	{
  		freq[input[i]]++;
	}
  		
  	for(i = 0; i < len; i++)
  	{
		if(max < freq[input[i]])
		{
			max = freq[input[i]];
			result = input[i];
		}
	}
  	return result;
    // Write your code here
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}
/*

char highestOccurringChar(char input[]) {
     char result;
  	int i, len;
  	int max = 0;
  	
  	int freq[256] = {0}; 
 
  	len = strlen(input);
  	
  	for(i = 0; i < len; i++)
  	{
  		freq[input[i]]++;
	}
  		
  	for(i = 0; i < len; i++)
  	{
		if(max < freq[input[i]])
		{
			max = freq[input[i]];
			result = input[i];
		}
	}
  	return result;
    // Write your code here
}
*/