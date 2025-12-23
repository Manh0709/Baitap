#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double giaTriThuc, thueSuat;
    double giaTriDanhGia, giaTriChiuThue;
    double thueNam, thueQuy;
    cout << "Nhap gia tri thuc cua tai san: ";
    cin >> giaTriThuc;
    cout << "Nhap thue suat moi $100 gia tri danh gia: ";
    cin >> thueSuat;
    giaTriDanhGia = giaTriThuc * 0.6;
    giaTriChiuThue = giaTriDanhGia - 5000;
    thueNam = (giaTriChiuThue / 100) * thueSuat;
    thueQuy = thueNam / 4;
    cout << fixed << setprecision(2);
    cout << "Thue bat dong san hang nam: $" << thueNam << endl;
    cout << "Tien thue moi quy: $" << thueQuy << endl;
    return 0;
}