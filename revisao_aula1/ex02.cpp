#include <iostream>

using namespace std;

int main(){
    int N, Q, marble, find, count = 1;

    cin >> N >> Q;
    while (N != 0 && Q != 0){

        int marbles[N];

        for (int i = 0; i < N; i++){
            cin >> marble;
            marbles[i] = marble;
        }

        for (int i = 0; i < Q; i++){
            cin >> find;
            
            cout << "CASE# " << count << ":" << endl;

            for (int j = 0; j < N; j++){
                if (marbles[j] == find){
                    cout << find << " found at " << j + 2 << endl;
                    break;
                }
                else if (j == N - 1){
                    cout << find << " Not found" << endl;
                }
            }
        }

        count++;
        cin >> N >> Q;
    }

    return 0;
}