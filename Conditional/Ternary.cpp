#include <iostream>
using namespace std;
int main()
{
 int num =14;

 bool isEven = num % 2 == 0 ? true : false;

    cout << "Is the number even? " << (isEven ? "Yes" : "No") << endl;


    return 0;
}