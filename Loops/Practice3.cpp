//Print the sum of a number using while loop,, Number= 10829
#include <iostream>
using namespace std;
int main(){
int n =10829;
int digsum=0;

while(n>0){
    int lastdigit = n % 10;
    digsum += lastdigit;
    n = n/10;
    }


cout<< "Sum ="<< digsum <<endl;

    return 0;
}