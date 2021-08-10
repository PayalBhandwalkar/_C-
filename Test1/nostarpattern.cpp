#include<iostream>
using namespace std;


int main(){
   int i, j, k, m;
    int n;
    cin>>n;
    
 for(i=n; i>=1; i--)
 {
  for(j=1; j<=i; j++)
   cout << j;
  for(k=i; k<n; k++)
   cout << "**";
  for(m=i; m>=1; m--)
   cout << m;
  cout << "\n";
 }
 return 0;
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


