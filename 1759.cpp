#include <iostream>
/***
 * Seu trabalho é ajudar o Papai Noel montando um problema que mostre todos os "Ho" que ele deve falar dado o número sorteado.
 * A entrada é composta por um único inteiro N (0 < N ≤ 106) representando quantos "Ho" serão falados por Noel.
 * A saída é composta por todos "Ho" que Papai Noel deve falar separados por um espaço. 
 * Após o último "Ho" deve ser apresentado um "!" encerrando o programa.
*/
using namespace std;

int main(){

    int N;
    int i =0;
    cin >> N;

    while(i<N){
        if(i==(N-1))
            cout << "Ho!"<< endl;
        else{
            cout << "Ho ";
        }
        i = i+1;

    }



    return 0;
}