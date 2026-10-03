#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< endl;
}

void SelectionSort(int arr[], int n)
{
    for(int i=0; i<n; i++){
        int midIdx =i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[midIdx])  // for descending order change the arrow to > sign
            {
                midIdx = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(arr[i], arr[midIdx]);
    }
print (arr, n);
}




int main()
{

int arr[5] = { 5, 4, 1, 3, 2};
  

SelectionSort(arr, 5);


    return 0;
}