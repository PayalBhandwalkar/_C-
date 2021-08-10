#include<iostream>
using namespace std;

int main(){
     int i,j,row;

   cin>>row; 
    
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            printf(" ");
        }

        for(j=i;j>=1;j--)
        {
            printf("%d", j);
        }

        for(j=2;j<=i;j++)
        {
           cout<<j;
        }
        cout<<endl;
    }

  // Write your code here  

  
}
/*
#include<iostream>
using namespace std;
#include <climits>


int main(){
    int n;
    cin>>n;
    
    int max = INT_MIN;
    int smax = INT_MIN;
    
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        
        if(num>max){
            smax = max;
            max = num;
        }
        
        else if(num>smax && num!=max){
            smax = num;
        }
    }
    cout<<smax;
    
    // Write your code here
    
}



*/

