#include <iostream>

using namespace std;


int main(){
    int numAnt, numAtual, posicao;


    for(int countI = 0; countI < 100; ++countI){
        cin >> numAtual;

        if(countI == 0){ numAnt = numAtual;}

        if(numAtual > numAnt){
            numAnt = numAtual;
            posicao = countI;
        }

    }       
    cout << numAnt << endl << posicao+1 << endl;

}