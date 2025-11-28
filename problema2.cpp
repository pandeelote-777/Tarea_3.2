#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y, z;
    cin >> x >> y >> z;

    double a = 2*x + y - z;
    double resultado = (7 + pow(a, a)) / a;

    cout << resultado;
    return 0;
}
