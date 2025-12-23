#include <iostream>
using namespace std;
int main() {
    double palletTrong, palletDay;
    int soVatDung;
    cout << "Nhap trong luong pallet (pound): ";
    cin >> palletTrong;
    cout << "Nhap trong luong pallet co hang (pound): ";
    cin >> palletDay;
    soVatDung = (palletDay - palletTrong) / 12.5;
    cout << "So vat dung tren pallet: " << soVatDung << endl;
    return 0;
}