#include <iostream>
#include <cstring>

using namespace std;

struct pedras { // Armazena as propriedades das pedras.
    int volume;
    int peso;
    int valor;
};

int main() {
    int N, V, C; // Numero de pedras, volume e peso maximo do carrinho

    cin >> N >> V >> C;

    pedras pedras[N]; // vetor de dados do tipo pedras.

    for (int i=0; i<N; i++) {
        cin >> pedras[i].volume;
        cin >> pedras[i].peso;
        cin >> pedras[i].valor;
    }
    
    int dp[V + 1][C + 1]; // Cria uma matriz "dp" para armazenar os resultados da programacao dinamica.
    memset(dp, 0, sizeof(dp)); // Define todos os valores da matriz como zero.

    for (i = 0; i < N; i++)
        for (int j = V; j >= pedras[i].volume; j--) 
            for (int k = C; k >= pedras[i].peso; k--) 
                dp[j][k] = max(dp[j][k], dp[j - pedras[i].volume][k - pedras[i].peso] + pedras[i].valor);

    cout << dp[V][C] << endl; // Mostrando a matriz com o maior valor possivel.

    return 0;
}