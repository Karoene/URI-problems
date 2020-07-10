#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double x1,y1,x2,y2;
    
    cin.precision(1);
    cin.setf(ios::fixed);
    cout.precision(4);
    cout.setf(ios::fixed);

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    cout << sqrt(pow((x2-x1),2)+pow((y2-y1), 2)) << endl;
    

}