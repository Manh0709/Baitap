#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double chiPhiThayThe, baoHiem;
    cout << "Nhap chi phi thay the toa nha: ";
    cin >> chiPhiThayThe;
    baoHiem = chiPhiThayThe * 0.8;
    cout << fixed << setprecision(2);
    cout << "So tien bao hiem toi thieu nen mua: $" << baoHiem << endl;
    return 0;
}