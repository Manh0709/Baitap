#include <iostream>
using namespace std;
int main() {
    char thang1[20], thang2[20], thang3[20];
    double muongMua1, muongMua2, muongMua3, trungBinh;
    cout << "Nhap ten thang thu nhat: ";
    cin >> thang1;
    cout << "Nhap luong mua (inches): ";
    cin >> muongMua1;
    cout << "Nhap ten thang thu hai: ";
    cin >> thang2;
    cout << "Nhap luong mua (inches): ";
    cin >> muongMua2;
    cout << "Nhap ten thang thu ba: ";
    cin >> thang3;
    cout << "Nhap luong mua (inches): ";
    cin >> muongMua3;
    trungBinh = (muongMua1 + muongMua2 + muongMua3) / 3.0;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "\nLuong mua trung binh cua thang " << thang1 << ", " << thang2 
         << ", va " << thang3 << " la " << trungBinh << " inches." << endl;
    return 0;
}