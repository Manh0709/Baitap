#include <iostream>
using namespace std;
int main(){
	double khachhang = 16.500;
	double nhungnguoimuanctangluc = 0.15;
	double nguoithichvicam = 0.58;
	double songuoimuanctangluc = khachhang * nhungnguoimuanctangluc;
	double songuoithichvicam = khachhang * nguoithichvicam;
	cout <<"So khach mua nuoc tang luc moi tuan: " << songuoimuanctangluc <<endl;
	cout <<"So nguoi thich vi cam: " <<songuoithichvicam <<endl;
	return 0;
}