/*
    1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores 
    (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, 
    ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.  

    IMPORTANTE: Esse número pode ser informado através de qualquer entrada 
    de sua preferência ou pode ser previamente definido no código;
*/

#include <iostream>
#include <vector>

using namespace std;

bool pertenceFibonacci(int n){
    // Armazeno a sequencia para não precisar recalcular
    vector<int> fib = {0,1};

    // Calculo a sequencia até o número
    while(fib.back() < n){
        int seguinte = fib[fib.size() - 1] + fib[fib.size() - 2];
        fib.push_back(seguinte); 
    }

    return (fib.back() == n or fib.size() - 2 == n);
}

int main(){
    int n;
    
    // Le enquanto ha entradas
    while(cin >> n){
        if(pertenceFibonacci(n)){
            cout << n << " PERTENCE a sequencia" << endl;
        }
        else{
            cout << n << " NAO pertence a sequencia" << endl;
        }
    }

    return 0;
}