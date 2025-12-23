#include <iostream>
using namespace std;
int main() {
    double diem1, diem2, diem3, diem4, diem5, trungBinh;
    cout << "Nhap diem bai kiem tra 1: ";
    cin >> diem1;
    cout << "Nhap diem bai kiem tra 2: ";
    cin >> diem2;
    cout << "Nhap diem bai kiem tra 3: ";
    cin >> diem3;
    cout << "Nhap diem bai kiem tra 4: ";
    cin >> diem4;
    cout << "Nhap diem bai kiem tra 5: ";
    cin >> diem5;
    trungBinh = (diem1 + diem2 + diem3 + diem4 + diem5) / 5;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << "\nDiem trung binh cua 5 bai kiem tra la: " << trungBinh << endl;
    return 0;
}