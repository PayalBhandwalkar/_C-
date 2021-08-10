#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{
    int temp[d];
    for(int i=0; i<d; i++)
        temp[i] = input[i];
    for(int i=d; i<n; i++){
        input[i-d] = input[i];
    }
    for(int i=n-d, k=0; i<n; i++, k++){
        input[i] = temp[k];
    }}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}






/* Solution ?
#include <iostream>
using namespace std;

void pushZeroesEnd(int *input, int size)
{
   
    int count=0;
    for(int i=0; i<size;i++){
        if(input[i] != 0){
            input[count] = input[i];    //count no of non zeros and place them from 0
            count++;
        }
    }
    while(count<size){
        input[count]=0;    //after countin no. of non zeros copy 0 for rest of the elemnt
        count++;
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

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}
*/