#include <iostream>
using namespace std;
int main() {
 
    float pencilcost;
    float pencost;
    float erasercost;
    

    cout <<  "enter the cost of pencil, pan and eraser is "<< endl;

    cin >> pencilcost;
    cin >> pencost;
    cin >> erasercost;

    float totalcost = pencilcost + pencost + erasercost;

    cout << "Total cost is:"<< totalcost <<endl;
    cout << "GST Tax :" << totalcost+(totalcost*0.18) <<endl;



    return 0;
}