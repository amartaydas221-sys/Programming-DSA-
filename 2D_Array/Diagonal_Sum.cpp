#include <iostream>
using namespace std;

int DiagonalSum(int matrix[][4], int n)// for 3 by  or others use here 3 at the place of 4;
{
    int sum =0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n;j++)
        {
            if(i==j)
            {
                sum+= matrix[i][j];

            }
            else if(j==n-i-1)
        {
            sum+= matrix[i][j];
        }
        }
    }
    cout<< "Sum ="<< sum << endl;
    return sum;
}

int main()
{  
    int matrix[4][4] ={ {1, 2, 3, 4}, 
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

        DiagonalSum(matrix, 4);
        // int matrix1[3][3] ={ {1, 2, 3}, // these matrix use for printing the sum 3 by 3 matrix diagonal sum
        //                 {4, 5, 6},
        //                 {7, 8, 9}};

        // DiagonalSum(matrix1, 2); // this has been use for matrix 2 by 2 for sum diagonal sum;
        // int matrix2[2][2] ={{ 1,2,
        //                     3,4}};
        //                     DiagonalSum(matrix2, 2);


    return 0;
}