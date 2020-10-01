#include <iostream>

using namespace std;


int main(){

    int num, aux1= 0, aux2 = 1, n = 0;

    cin >> num;
    cout << aux1 << " " << aux2 << " ";
    for(int countI = 0;countI <= (num-3); ++countI){
        n = aux1 + aux2;
        if(countI == (num-3)){cout << n;}
        else{cout << n << " ";}
        aux1 = aux2;
        aux2 = n;
        

    }
    cout << endl;
}