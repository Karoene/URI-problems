#include <iostream>

using namespace std;

int main(){
    
    int hrs, velocidade;

    cin >> hrs >> velocidade;

    cout.precision(3);
    cout.setf(ios::fixed);

    cout << (hrs*velocidade)/12.0 << endl;

}
