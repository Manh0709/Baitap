#include <iostream>
using namespace std;
int main() {
    float gallon, dam, mpg;
    cout << "Nhap so gallon xang: ";
    cin >> gallon;

    cout << "Nhap so dam di duoc: ";
    cin >> dam;
    if (gallon != 0) {
        mpg = dam / gallon;
        cout << "Muc tieu thu xang la: " << mpg << " dam/gallon" << endl;
    } else {
        cout << "So gallon khong the bang 0." << endl;
    }
    return 0;
}