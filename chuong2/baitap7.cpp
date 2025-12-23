#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    string tenPhim;
    int veNguoiLon, veTreEm;
    double tongThu, rapGiu, nhaPhanPhoi;
    cout << "Nhap ten phim: ";
    getline(cin, tenPhim);
    cout << "Nhap so ve nguoi lon: ";
    cin >> veNguoiLon;
    cout << "Nhap so ve tre em: ";
    cin >> veTreEm;
    tongThu = veNguoiLon * 10 + veTreEm * 6;
    rapGiu = tongThu * 0.2;
    nhaPhanPhoi = tongThu * 0.8;
    cout << fixed << setprecision(2);
    cout << "Ten phim: " << tenPhim << endl;
    cout << "Tong doanh thu: $" << tongThu << endl;
    cout << "Rap giu: $" << rapGiu << endl;
    cout << "Nha phan phoi: $" << nhaPhanPhoi << endl;
    return 0;
}