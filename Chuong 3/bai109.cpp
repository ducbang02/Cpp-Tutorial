
#include <iostream>
using namespace std;

// Bài 109: In bảng cửu chương
int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}
