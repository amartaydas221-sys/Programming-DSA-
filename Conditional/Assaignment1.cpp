#include <iostream>
using namespace std;
int main()
{
   int num;
   cout <<" Enter a Number:" << endl;
   cin >> num;

   if (num > 0){
    cout << "This Number is positive"<< endl;

   }
   else if(num <0){
    cout<< "This Number is Negative"<< endl;
   }
   else{
    cout <<"This is zero"<< endl;
   }

    return 0;
}