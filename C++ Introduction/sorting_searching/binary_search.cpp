#include<iostream>

using namespace std;

int binarySearch(int arr[], int n, int x) {
    int start = 0,
    end = n-1;
    while(start <= end) {
        int mid = (start + end)/2;
        if (arr[mid] == x){
            end = mid + 1;
        }
        else if (x < arr[mid]){
            end = mid - 1;
        }
        else {
         start = mid -1;
        }   
        }
        return -1;
}


int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
	int t;
	cin >> t;

	while (t--)
	{
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}
	
	delete [] input;
	return 0;
}