#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    const double PI = 3.14159;
    double duongKinh, dienTich, soMieng;
    cout << "Nhap duong kinh pizza (inches): ";
    cin >> duongKinh;
    dienTich = PI * pow(duongKinh / 2, 2);
    soMieng = dienTich / 14.125;
    cout << fixed << setprecision(1);
    cout << "So mieng pizza co the cat: " << soMieng << endl;
    return 0;
}