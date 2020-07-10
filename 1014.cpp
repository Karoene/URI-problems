#include <iostream>

using namespace std;

int main(){

    int Km; double litros;

    cin >> Km >> litros;

    cin.precision(1);
    cin.setf(ios::fixed);
    cout.precision(3);
    cout.setf(ios::fixed);
 
    cout << Km/litros << " km/l" << endl;


}