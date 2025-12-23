#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double principal, rate;
    int t;
    double amount, interest;
    cout << "Nhap tien goc: ";
    cin >> principal;
    cout << "Nhap lai suat (vd 0.05): ";
    cin >> rate;
    cout << "Nhap so lan tinh lai trong nam: ";
    cin >> t;
    amount = principal * pow(1 + rate / t, t);
    interest = amount - principal;
    cout << fixed << setprecision(2);
    cout << "Tien nhan duoc sau 1 nam: $" << amount << endl;
    cout << "Tien lai kiem duoc: $" << interest << endl;
    return 0;
}