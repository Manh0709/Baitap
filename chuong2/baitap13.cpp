#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const double YEN_PER_DOLLAR = 98.93;
    const double EURO_PER_DOLLAR = 0.74;
    double dollar;
    cout << "Nhap so tien Dollar: ";
    cin >> dollar;
    cout << fixed << setprecision(2);
    cout << "Yen: " << dollar * YEN_PER_DOLLAR << endl;
    cout << "Euro: " << dollar * EURO_PER_DOLLAR << endl;
    return 0;
}