
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double S = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
        S = sqrt(i + S);
    cout << "S(n) = " << S << endl;
    return 0;
}
