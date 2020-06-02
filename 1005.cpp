#include <iostream>
 
using namespace std;
 
int main() {
 
    double A,B, MEDIA;
    
    cin.precision(1);
    cin.setf(ios::fixed);
    cout.precision(5);
    cout.setf(ios::fixed);
    
    cin >> A >> B;
    
    MEDIA = (A*3.5 + B*7.5)/11;
    
    cout << "MEDIA = " << MEDIA << endl;
 
    return 0;
}