
#include <iostream>
using namespace std;

int main() {
    int n;
    long long product = 1;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i += 2)
        if (n % i == 0) product *= i;
    cout << "Tich cac uoc so le cua " << n << " la: " << product << endl;
    return 0;
}
