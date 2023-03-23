#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main(){

    string senha, novaSenha,temp, temp2, novaSenha2, senhaAtual;
    int quantSenhas;
    cin >> quantSenhas;
    cin.ignore(); 
    string senhas[quantSenhas];

    for(int i =0;i< quantSenhas;i++){
        getline(cin, senhas[i]);
         
    }
    
    
    for(int i = 0;i < quantSenhas; i++){
    senha = novaSenha =temp = temp2= novaSenha2= senhaAtual = "";
    //getline(cin, senha);
    senha = senhas[i];
    for(int i = 0;i < senha.length(); i++){
        if((senha[i] >= 65 && senha[i] <= 90) || (senha[i] >= 97 && senha[i] <= 122)){
            novaSenha = (senha[i]+3);
            temp.append(novaSenha);
        }else{
            novaSenha = (senha[i]);
            temp.append(novaSenha);
        }
    }
    //cout << temp << endl;
    //////////////////////////////////
    reverse(temp.begin(), temp.end());    
    //cout << temp << endl;
    //////////////////////////////////
    for(int i = ((temp.length())/2); i < temp.length(); i++){
        novaSenha2 = (temp[i]-1);
        temp2.append(novaSenha2);
    }
    temp.erase(temp.length()/2, temp.length());
    
    cout << temp + temp2 << endl;
    }

                                                                                                                                                                                                         
}