#include <iostream>

using namespace std;

int main(){

    int x;

    while(x != 0){
        cin >> x;
        for(int countI = 1; countI <= x; ++countI){
            
            if(countI == (x)){cout << countI;}
            else{cout << countI << " ";}
        }        
        if(x != 0){cout << endl;}

    }

}