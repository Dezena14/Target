/* 
    2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, 
    além de informar a quantidade de vezes em que ela ocorre. 

    IMPORTANTE: Essa string pode ser informada através de qualquer entrada 
    de sua preferência ou pode ser previamente definida no código;  
*/

#include <iostream>
#include <fstream>

using namespace std;

// Conta a quantidade de letras 'a' em uma string
int contador(const string &linha){
    int cont = 0;
    
    // Itera cada caracter na string
    for(char c : linha){
        if(c == 'a' or c == 'A'){
            cont++;
        }
    }
    return cont;
}

int main(){
    ifstream arquivo("entrada2.txt");
    string linha;
    
    if(!arquivo.is_open()){
        cerr << "Erro ao abrir arquivo" << endl;
        return -1;
    }

    // Le o arquivo linha a linha
    while(getline(arquivo, linha)){
        int quantidade = contador(linha);
        cout << "A letra 'a' aparece " << quantidade << " vezes em: \"" << linha << "\"" << endl;
    }

    arquivo.close();

    return 0;
}