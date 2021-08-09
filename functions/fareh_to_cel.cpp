#include<iostream>
using namespace std;


void printTable(int start, int end, int step) {
     cin>>start>>end>>step;
    for(int i=start;i<=end;i=i+step){
       int c=(i-32)*5/9;
        cout<<i<<"\t"<<c<<endl;
    }
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    
}
int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);

}
