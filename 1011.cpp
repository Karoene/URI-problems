#include <iostream>

using namespace std;

int main(){
    double raio;

    cin >> raio;

    cout.precision(3);
    cout.setf(ios::fixed);

    cout << "VOLUME = " << (4.0/3.0) * 3.14159 * (raio*raio*raio) << endl;



}