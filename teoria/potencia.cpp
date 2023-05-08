#include <iostream>

using namespace std;

int potencia(int a, int n){
    if(n == 0){
        return 1;
    }else{
        return a * potencia(a, n-1);
    }
}

int main(){

    int a, n;

    cin >> a >> n;
    
    if(n >= 0){
        cout << potencia(a, n) << endl;
    }else{
        cout << "não definido" << endl;
    }
    
    return 0;
}