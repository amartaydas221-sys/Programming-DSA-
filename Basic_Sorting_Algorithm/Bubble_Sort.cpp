#include <iostream>
using namespace std;
void Print(int arr[], int n) //use these for printing value;
{
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}

void BubbleSort(int arr[], int n)   //start of bubble sort
{
for(int i=0; i<n-1;i++){ //for each turn we have to compare n-1 times;

 for(int j=0; j<n-i-1; j++){ 
     if(arr[j] > arr[j+1]) // for descending order change the arrow to > sign
      {
        swap(arr[j] , arr[j+1]);
        
     }
 }
 
    
}
    Print( arr, n);
}
int main()
{int arr[5]= {5,4,1,3,2};
 
BubbleSort(arr, 5);

    return 0;
}