#include <iostream>
#include <cmath>
using namespace std;
int main() {
    const double PI = 3.14159;
    int soNguoi;
    double duongKinh;
    double soMiengMoiPizza;
    int tongMieng, soPizza;
    cout << "Nhap so nguoi tham du: ";
    cin >> soNguoi;
    cout << "Nhap duong kinh pizza: ";
    cin >> duongKinh;
    soMiengMoiPizza = (PI * pow(duongKinh / 2, 2)) / 14.125;
    tongMieng = soNguoi * 4;
    soPizza = ceil(tongMieng / soMiengMoiPizza);
    cout << "So pizza can mua: " << soPizza << endl;
    return 0;
}