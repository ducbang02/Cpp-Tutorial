#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, S = 0;
    int n;
    cout << "Nhap x va n: ";
    cin >> x >> n;
    for (int i = 1; i <= n; ++i)
        S += pow(x, 2 * i);
    cout << "S(n) = " << S << endl;
    return 0;
}
