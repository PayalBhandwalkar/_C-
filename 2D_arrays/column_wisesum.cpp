#include<iostream>
using namespace std;


int main(){
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++ ){
            cin>>arr[i][j];
        }
    }
   int j = 0;
    while(j < n){
    	int k = 0;
    	for(int i = 0; i < m; i++){
        	k = k +arr[i][j];
    	}
    	j++;
    	cout<< k << " ";
	}
}  
   
   /*
   #include<iostream>
using namespace std;


int main(){
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++ ){
            cin>>arr[i][j];
        }
    }
   int j = 0;
    while(j < n){
    	int k = 0;
    	for(int i = 0; i < m; i++){
        	k = k +arr[i][j];
    	}
    	j++;
    	cout<< k << " ";
	}
    
   
   */