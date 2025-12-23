#include <iostream>
using namespace std;
int main(){
    int soBanh;
    double caloriesMoiBanh, tongCalories;
    caloriesMoiBanh = 300.0 / 3.0; // 10 khau phan = 30 banh
    cout << "Nhap so luong banh da an: ";
    cin >> soBanh;
    tongCalories = soBanh * caloriesMoiBanh;
    cout << "Tong so calories da tieu thu: " << tongCalories << endl;
    return 0;
}