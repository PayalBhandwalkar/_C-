#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{long a = 2147483648;
     int count=0;int i=0,j=1;
    for(j;j<n;j++){
        if(input[i] == input[j]){
        	count++;
        }
    }
    if((count)==n-1 || n <= 1)
    	return -a;
    else{
        int max = -9999999;
	    int j = 0;
	    for(int i = 0; i < n; i++){
		    if(input[i] > max){
			    max = input[i];
		    }
	    }
	    int temp = max;
	    max = -9999999;
	    for(int i = 0; i < n; i++){
		    if(input[i] > max && input[i] != temp){
			    max = input[i];
		    }
	    }
        return max;
	}
    //Write your code here
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}
/* 
int findSecondLargest(int *input, int n)
{long a = 2147483648;
     int count=0;int i=0,j=1;
    for(j;j<n;j++){
        if(input[i] == input[j]){
        	count++;
        }
    }
    if((count)==n-1 || n <= 1)
    	return -a;
    else{
        int max = -9999999;
	    int j = 0;
	    for(int i = 0; i < n; i++){
		    if(input[i] > max){
			    max = input[i];
		    }
	    }
	    int temp = max;
	    max = -9999999;
	    for(int i = 0; i < n; i++){
		    if(input[i] > max && input[i] != temp){
			    max = input[i];
		    }
	    }
        return max;
	}
    //Write your code here
}
*/