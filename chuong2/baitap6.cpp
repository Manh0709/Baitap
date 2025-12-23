#include <iostream>
using namespace std;
int main() {
    double soBanh;
    double tiLe;
    cout << "Nhap so luong banh muon lam: ";
    cin >> soBanh;
    tiLe = soBanh / 48.0;
    cout << "Luong duong can: " << 1.5 * tiLe << " coc" << endl;
    cout << "Luong bo can: " << 1.0 * tiLe << " coc" << endl;
    cout << "Luong bot can: " << 2.75 * tiLe << " coc" << endl;
    return 0;
}