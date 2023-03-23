#include <iostream>

using namespace std;

int main(){
    int num, hr;
    double valHr, salary;
    
    cin.precision(2);
    cin.setf(ios::fixed);
    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> num >> hr >> valHr;

    salary = hr* valHr;

    cout << "NUMBER = " << num << endl;
    cout << "SALARY = U$ " << salary << endl;


}