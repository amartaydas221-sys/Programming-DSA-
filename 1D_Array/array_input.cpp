#include <iostream>
using namespace std;

int main()
{  int arr[6];
   int n= sizeof(arr)/sizeof(int);
   
   cout<< " Enter the Array of you like to Provide :" <<" ";
    for (int i=0; i<n; i++){
        
    cin >> arr[i];
 }
cout<< " The Entered array is  :"<< endl;
 for (int i=0; i<n; i++){
    cout<< arr[i] << " ";
 }
cout<< endl;


    return 0;
}