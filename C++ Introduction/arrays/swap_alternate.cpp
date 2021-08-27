#include<iostream>

using namespace std;

void swapAlternate (int arr[], int size)
{
    int i=0, j=i+1;
    while(j<size) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i=i+2;
        j=i+1;
    }
}

   int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		//delete [] arr;
	}
}