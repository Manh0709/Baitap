#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double vay, baoHiem, xang, dau, lop, baoDuong;
    double thang, nam;
    cout << "Nhap chi phi vay: ";
    cin >> vay;
    cout << "Nhap chi phi bao hiem: ";
    cin >> baoHiem;
    cout << "Nhap chi phi xang: ";
    cin >> xang;
    cout << "Nhap chi phi dau: ";
    cin >> dau;
    cout << "Nhap chi phi lop: ";
    cin >> lop;
    cout << "Nhap chi phi bao duong: ";
    cin >> baoDuong;
    thang = vay + baoHiem + xang + dau + lop + baoDuong;
    nam = thang * 12;
    cout << fixed << setprecision(2);
    cout << "Tong chi phi hang thang: $" << thang << endl;
    cout << "Tong chi phi hang nam: $" << nam << endl;
    return 0;
}