#include <iostream>
using namespace std;
int main(){

    for(int i=2; i<=20; i++)
    if(i%2==0){              // % gives the remainder, and even means remainder 0.
        cout<<i<<endl;      // also in if anything zero is treated as false so by ==0 we made it true  
    }
}