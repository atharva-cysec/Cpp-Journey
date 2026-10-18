#include <iostream>
using namespace std;
int main(){
  
    int sum=0;
    int n;
    cout<<"Enter number to get sum from 1 to ";
    cin>>n;

    for(int i=1; i<=n; i++){
        sum+=i;
    }
     cout<<"sum: "<<sum;
}