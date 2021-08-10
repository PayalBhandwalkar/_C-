#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int size)
{
     int count=1;
    bool check = false;
    for(int i = 0; i < size-1; i++){
        if(input[i] <= input[i+1]){
            count++;
        }
        else{
            check = true;
            break;
        }
    }
    if(check == false){
        return 0;
    }
    else{
        return count;
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

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}
/*
int arrayRotateCheck(int *input, int size)
{
     int count=1;
    bool check = false;
    for(int i = 0; i < size-1; i++){
        if(input[i] <= input[i+1]){
            count++;
        }
        else{
            check = true;
            break;
        }
    }
    if(check == false){
        return 0;
    }
    else{
        return count;
    }
    //Write your code here
}
*/