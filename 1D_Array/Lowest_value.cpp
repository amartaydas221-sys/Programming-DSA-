#include <iostream>
using namespace std;
int main()
{
 int arr[5] = { 100,211,319,40,57};
 int n = sizeof(arr)/sizeof(int);

 int min =arr[0];
 for(int i=0; i<n; i++){
     
    if(arr[i]< min)
    {
        min = arr[i];
    }


 }

cout<< min << endl;

    return 0;
}