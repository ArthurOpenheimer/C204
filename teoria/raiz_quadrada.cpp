#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double raiz(double x, double x0, double e) {
    if (fabs(x0*x0 - x) <= e) {
        return x0;
    } else {
        return raiz(x, (x0*x0 + x)/(2*x0), e);
    }
}

int main() {
    double x, x0, e;
    cin >> x >> x0 >> e;
    cout << fixed << setprecision(4) << raiz(x, x0, e) << endl;
    return 0;
}
