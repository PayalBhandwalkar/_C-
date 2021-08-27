#include<iostream>

using namespace std;


  void arrange(int *arr, int n)
  {
    int j =1;
    int i =0;
    while(j<=n){
        
        if( j % 2 != 0){
            arr[i] = j;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    j=n;
     while(j>=1){
     
        if(j % 2 == 0){
            arr[i] = j;
            i++;
            j--;
        }
        else{
            j--;
        }
     }
    }




  

    int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
    }
	

