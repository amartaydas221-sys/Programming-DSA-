//Check the number is Prime or not
#include <iostream>
using namespace std;
int main(){
int n = 21;
bool isPrime = true;
for ( int i =2; i<n-1; i++){
   
    if (n % i ==0)  //Check n is a factor, n can be divided by , n is a non-Prime number
    {
        isPrime = false;
        break;
    }



}
if (isPrime)
{
    cout << n << " is a Prime Number"<< endl; 
}
else {
    cout<< n << " is not a Prime Number"<< endl;
}



return 0;

}