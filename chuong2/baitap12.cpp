#include <iostream>
using namespace std;
int main() {
    double C, F;
    cout << "Nhap nhiet do Celsius: ";
    cin >> C;
    F = (9.0 / 5.0) * C + 32;
    cout << "Nhiet do Fahrenheit: " << F << endl;
    return 0;
}