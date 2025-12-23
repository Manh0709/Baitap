#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double rad;
    cout << "Nhap goc (radian): ";
    cin >> rad;
    cout << fixed << setprecision(4);
    cout << "Sin: " << sin(rad) << endl;
    cout << "Cos: " << cos(rad) << endl;
    cout << "Tan: " << tan(rad) << endl;
    return 0;
}