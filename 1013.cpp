#include <iostream>

using namespace std;

int main(){
    int A,B,C;

    cin >> A >> B>>C;

    A = (A+B+(abs(A-B)))/2;

    if(C > A){cout << C <<" eh o maior" << endl;}
    else{cout << A <<" eh o maior" << endl;}




}