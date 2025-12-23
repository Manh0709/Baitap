#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double giaTriThuc, giaTriDanhGia, thue;
    cout << "Nhap gia tri thuc cua tai san: ";
    cin >> giaTriThuc;
    giaTriDanhGia = giaTriThuc * 0.6;
    thue = giaTriDanhGia * 0.75 / 100;
    cout << fixed << setprecision(2);
    cout << "Gia tri danh gia: $" << giaTriDanhGia << endl;
    cout << "Thue bat dong san: $" << thue << endl;
    return 0;
}