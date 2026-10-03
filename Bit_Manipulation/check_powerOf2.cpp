#include <iostream>
using namespace std;

bool ispowerof2(int num)
{
    if ((num & (num - 1)) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    
    cout<< ispowerof2(16) <<endl;
    cout<< ispowerof2(8) <<endl;
    cout<< ispowerof2(13) <<endl;
    cout<< ispowerof2(18) <<endl;
    return 0;

}