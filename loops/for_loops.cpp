// Every Loop = start, condition, update.
// Order: start (once) > condition > body > update > conditon... exit when false.
// Condition  is checked BEFORE the body, so the body can run 0 time.

#include <iostream>
using namespace std;
int main(){

    for(int i=1; i<=5; i++){   //Print numbers from 1 to 5
        cout<<i<<" ";          //As "i" is been declared in for() so this will be local variable and will not be valid outside the loop
    }
        cout<<endl;
     

    for(int i=5; i>=1; i--){  //Prints number from 5 to 1 using decreasing loop
        cout<<i<<" ";
    }   
        cout<<endl; 
    
    
     int sum=0;       
    for(int i=1; i<=5; i++){ //any time you need ONE answer built from MANY values: totals, averages, counts, products
        sum+=i;              //Without the loop you’d write sum = 1 + 2 + 3 + ... + 100 by hand. With the loop, 100 numbers or 1 million is the same 3 lines.
    }        
      cout<<"sum "<<sum<<endl;
}
