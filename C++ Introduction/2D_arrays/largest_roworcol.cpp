#include <iostream>
using namespace std;

#include<climits>
void findLargest(int **input, int nRows, int mCols)
{
 bool isRow = true;
    int largestSum = INT_MIN;
    int num = 0;
    
    for(int i =0; i< nRows; i++){
        int rowSum = 0;
        for (int j = 0; j< mCols; j++ ){
            rowSum += input[i][j];
        }
        if(rowSum > largestSum)
        {
            largestSum = rowSum;
            num = i;
        }
    }
    
    for(int j = 0; j< mCols; j++){
        int colSum = 0;
        for(int i = 0; i< nRows; i++){
           colSum += input[i][j];
        }
         if(colSum > largestSum)
        {
            largestSum = colSum;
            num = j;
            isRow = false;
        }
    }
    
    if (isRow) {
        cout<<"row"<<" "<<num<<" "<<largestSum;
    }
    else
    {
        cout<<"column"<<" "<<num<<" "<<largestSum;
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}
/*
#include<climits>
void findLargest(int **input, int nRows, int mCols)
{
 bool isRow = true;
    int largestSum = INT_MIN;
    int num = 0;
    
    for(int i =0; i< nRows; i++){
        int rowSum = 0;
        for (int j = 0; j< mCols; j++ ){
            rowSum += input[i][j];
        }
        if(rowSum > largestSum)
        {
            largestSum = rowSum;
            num = i;
        }
    }
    
    for(int j = 0; j< mCols; j++){
        int colSum = 0;
        for(int i = 0; i< nRows; i++){
           colSum += input[i][j];
        }
         if(colSum > largestSum)
        {
            largestSum = colSum;
            num = j;
            isRow = false;
        }
    }
    
    if (isRow) {
        cout<<"row"<<" "<<num<<" "<<largestSum;
    }
    else
    {
        cout<<"column"<<" "<<num<<" "<<largestSum;
    }
}
*/
