#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int nam, nu, tong;
    double tiLeNam, tiLeNu;
    cout << "Nhap so luong nam: ";
    cin >> nam;
    cout << "Nhap so luong nu: ";
    cin >> nu;
    tong = nam + nu;
    tiLeNam = (double)nam / tong * 100;
    tiLeNu  = (double)nu / tong * 100;
    cout << fixed << setprecision(2);
    cout << "Ti le nam: " << tiLeNam << "%" << endl;
    cout << "Ti le nu: " << tiLeNu << "%" << endl;
    return 0;
}