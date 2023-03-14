#include <iostream>
/***
 * Neste problema, você deverá ler 3 palavras que definem o tipo de animal possível segundo o esquema abaixo,
 *  da esquerda para a direita.  Em seguida conclua qual dos animais seguintes foi escolhido, através das três palavras fornecidas.
 * A entrada contém 3 palavras, uma em cada linha, necessárias para identificar o animal segundo a figura acima, 
 * com todas as letras minúsculas.
 * Imprima o nome do animal correspondente à entrada fornecida.
 * 
*/

using namespace std;

int main(){

    string ossos, tipo, alimentacao, especie, animal;
    cin >> ossos;
    cin >> tipo;
    cin >> alimentacao;
    
    
    if((ossos == "vertebrado") && (tipo == "ave") && (alimentacao == "carnivoro")){
        cout << "aguia" << endl;
    }else if ((ossos == "vertebrado") && (tipo == "ave") && (alimentacao == "onivoro")){
        cout << "pomba" << endl;
    }else if ((ossos == "vertebrado") && (tipo == "mamifero") && (alimentacao == "onivoro")){
        cout << "homem" << endl;
    }else if ((ossos == "vertebrado") && (tipo == "mamifero") && (alimentacao == "herbivoro")){
        cout << "vaca" << endl;
    }else if ((ossos == "invertebrado") && (tipo == "inseto") && (alimentacao == "hematofago")){
        cout << "pulga" << endl;
    }else if ((ossos == "invertebrado") && (tipo == "inseto") && (alimentacao == "herbivoro")){
        cout << "lagarta" << endl;
    }else if ((ossos == "invertebrado") && (tipo == "anelideo") && (alimentacao == "hematofago")){
        cout << "sanguessuga" << endl;
    }else if ((ossos == "invertebrado") && (tipo == "anelideo") && (alimentacao == "onivoro")){
        cout << "minhoca" << endl;
    }
     
    
    

    return 0;
}