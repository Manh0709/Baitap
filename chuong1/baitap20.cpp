#include <iostream>
using namespace std;
int main() {
    double chieucao = 6;
    double chieudai = 100;
    double phumoigallon = 340;
    double dientich = chieucao * chieudai;
    double tongdientich = dientich * 2;
    double sogallon = tongdientich / phumoigallon;
    cout << "So gallon son can thiet: " << sogallon << endl;
    return 0;
}
