#include <iostream>
using namespace std;
int main(){
	int socophieu = 750;
	double giamoicophieu = 35.00;
	double hoahong = 0.02;
	double tiencophieu = socophieu * giamoicophieu;
	double tienhoahong = tiencophieu * hoahong;
	double tongtien = tiencophieu + tienhoahong;
	cout <<"So tien thanh toan cho co phieu: " <<tiencophieu <<endl;
	cout <<"So tien hoa hong: " <<tienhoahong <<endl;
	cout <<"Tong tien da thanh toan: " <<tongtien <<endl;
	return 0;
}