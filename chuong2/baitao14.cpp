#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    string month;
    int year;
    double totalCollected;
    double sales, stateTax, countyTax, totalTax;
    cout << "Nhap thang: ";
    cin >> month;
    cout << "Nhap nam: ";
    cin >> year;
    cout << "Nhap tong so tien thu duoc: ";
    cin >> totalCollected;
    sales = totalCollected / 1.06;
    stateTax = sales * 0.04;
    countyTax = sales * 0.02;
    totalTax = stateTax + countyTax;
    cout << fixed << setprecision(2);
    cout << "\nMonth: " << month << " " << year << endl;
    cout << "-------------------------" << endl;
    cout << "Total Collected:   $ " << totalCollected << endl;
    cout << "Sales:             $ " << sales << endl;
    cout << "County Sales Tax:  $ " << countyTax << endl;
    cout << "State Sales Tax:   $ " << stateTax << endl;
    cout << "Total Sales Tax:   $ " << totalTax << endl;
    return 0;
}