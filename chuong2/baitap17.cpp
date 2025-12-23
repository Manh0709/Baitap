#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int a, b;
    srand(time(0));
    a = rand() % 100;
    b = rand() % 100;
    cout << "Hay tinh: " << a << " + " << b << endl;
    cout << "Nhan phim bat ky de xem dap an...";
    cin.get();
    cin.get();
    cout << "Dap an dung la: " << a + b << endl;
    return 0;
}