#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double loan, annualRate;
    int n;
    double monthlyRate, payment;
    cout << "Nhap so tien vay: ";
    cin >> loan;
    cout << "Nhap lai suat hang nam (vd 0.12): ";
    cin >> annualRate;
    cout << "Nhap so lan thanh toan: ";
    cin >> n;
    monthlyRate = annualRate / 12;
    payment = (monthlyRate * loan) /
              (1 - pow(1 + monthlyRate, -n));
    cout << fixed << setprecision(2);
    cout << "Thanh toan hang thang: $" << payment << endl;
    return 0;
}