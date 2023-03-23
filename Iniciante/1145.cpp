#include <iostream>

using namespace std;


int main(){
    int x, y, aux = 1;

    cin >> x >> y;

    for(int countI = 1;countI <= (y/x); ++countI){
        //aux = countI;
        for(int countJ = 0; countJ < x; ++countJ){
            if(countJ == (x-1)){cout << aux+countJ;}
            else{cout << aux+countJ << " ";}
        }
        cout << endl;
        aux = aux + x;      
        

    }

}
