#include <iostream>
using namespace std;
int main() {
    int veA, veB, veC;
    double tong;
    cout << "Nhap so ve hang A: ";
    cin >> veA;
    cout << "Nhap so ve hang B: ";
    cin >> veB;
    cout << "Nhap so ve hang C: ";
    cin >> veC;
    tong = (veA * 15.0) + (veB * 12.0) + (veC * 9.0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Tong so tien thu duoc: " << tong << endl;
    return 0;
}