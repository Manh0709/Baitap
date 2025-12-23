#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int soCoPhieu = 1000;
    double giaMua = 45.50;
    double giaBan = 56.90;
    double hoaHong = 0.02;
    double tienMua = soCoPhieu * giaMua;
    double phiMua = tienMua * hoaHong;
    double tienBan = soCoPhieu * giaBan;
    double phiBan = tienBan * hoaHong;
    double loiNhuan = tienBan - phiBan - tienMua - phiMua;
    cout << fixed << setprecision(2);
    cout << "Tien mua co phieu: $" << tienMua << endl;
    cout << "Phi moi gioi khi mua: $" << phiMua << endl;
    cout << "Tien ban co phieu: $" << tienBan << endl;
    cout << "Phi moi gioi khi ban: $" << phiBan << endl;
    cout << "Loi nhuan: $" << loiNhuan << endl;
    return 0;
}