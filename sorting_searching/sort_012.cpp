#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n)
{
    
    int count0 = 0,count1 = 0, count2 = 0;
    for(int i = 0; i < n; i++){    //count 0   
        if(arr[i] == 0){
            count0++;
        }
        if(arr[i] == 1){    //count 1
            count1++;
        }  
    }
    
    for(int i=0;i<count0;i++){    //print 0
        arr[i]=0;
    }
    int temp = count0 + count1;
     for(int i=count0;i<temp;i++){    //print 1
        arr[i]=1;
    }
     for(int i=temp;i<n;i++){    //print 2
        arr[i]=2;
    }
    }

int main()
{
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

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}
/*
void sort012(int *arr, int n)
{
    
    int count0 = 0,count1 = 0, count2 = 0;
    for(int i = 0; i < n; i++){    //count 0   
        if(arr[i] == 0){
            count0++;
        }
        if(arr[i] == 1){    //count 1
            count1++;
        }  
    }
    
    for(int i=0;i<count0;i++){    //print 0
        arr[i]=0;
    }
    int temp = count0 + count1;
     for(int i=count0;i<temp;i++){    //print 1
        arr[i]=1;
    }
     for(int i=temp;i<n;i++){    //print 2
        arr[i]=2;
    }
    }
*/