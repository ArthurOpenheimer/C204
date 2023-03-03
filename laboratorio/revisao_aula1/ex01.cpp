#include <iostream>

using namespace std;

int calcula_pilha(int F1, int F2){
    int maior = 0, menor = 0, resto = 0;
    
    if(F1 > F2){
        maior = F1;
        menor = F2;
    }
    else{
        maior = F2;
        menor = F1;
    }

    resto = maior % menor;

    while(resto != 0){
        maior = menor;
        menor = resto;
        resto = maior % menor;
    }

    return menor;
}

int main()
{
    int N = 0;
    int F1, F2;

    cin >> N;

    if(N >= 1 && N <= 3000){
        for (int i = 0; i < N; i++)
        {
            cin >> F1 >> F2;
            if(F1 >= 1 && F1 <= 1000 && F2 >= 1 && F2 <= 1000){
                cout << calcula_pilha(F1, F2) << endl;
            }  
        }
    }

    return 0;
}