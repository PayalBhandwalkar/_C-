#include<iostream>
#include<math.h>

using namespace std;

int main(){
 int n;
 cin>>n;
 int c;
 cin>>c;

 if(c == 1){
     int res=0;
     for( int i=0;i<=n;i++){
        res=res+i;
        cout<<res;
     }
 }
 else if (c==2)
 {
     int res=1;
     for( int i=0;i<=n;i++){
        res=res*i;
        cout<<res;
     }
 }
 else{
     cout<<'-1';
 }
 
}