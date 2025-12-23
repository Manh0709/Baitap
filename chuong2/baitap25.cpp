#include <iostream>
using namespace std;
int main() {
    string ten, thanhPho, truong, chuyenNganh, dongVat, thuCung;
    int tuoi;
    cout << "Nhap ten: ";
    getline(cin, ten);
    cout << "Nhap tuoi: ";
    cin >> tuoi;
    cin.ignore();
    cout << "Nhap thanh pho: ";
    getline(cin, thanhPho);
    cout << "Nhap ten truong dai hoc: ";
    getline(cin, truong);
    cout << "Nhap chuyen nganh: ";
    getline(cin, chuyenNganh);
    cout << "Nhap loai dong vat: ";
    getline(cin, dongVat);
    cout << "Nhap ten thu cung: ";
    getline(cin, thuCung);
    cout << "\nCo mot nguoi ten " << ten << ", "
         << tuoi << " tuoi, song tai " << thanhPho
         << ". Nguoi ay hoc tai truong " << truong
         << " voi chuyen nganh " << chuyenNganh
         << ". Nguoi ay co mot con " << dongVat
         << " ten la " << thuCung << "." << endl;
    return 0;
}