#include <iostream>
using namespace std;
int main() {
    double R, E, S;
    int V;
    cout << "Nhap chieu dai hang (feet): ";
    cin >> R;
    cout << "Nhap khoang trong moi dau (feet): ";
    cin >> E;
    cout << "Nhap khoang cach giua cac day nho (feet): ";
    cin >> S;
    V = (R - 2 * E) / S;
    cout << "So day nho phu hop: " << V << endl;
    return 0;
}