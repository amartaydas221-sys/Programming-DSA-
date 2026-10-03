//print number 1-10 except the number 3
#include <iostream>
using namespace std;
int main()
{
  
for (int i=1; i<=10; i++){

    if (i==3){
        continue;
    }
    cout<< i <<endl;
}


    return 0;
}