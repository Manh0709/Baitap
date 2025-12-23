#include <iostream>
using namespace std;
int main(){
	double gia1 = 15.59;
	double gia2 = 24.59;
	double gia3 = 6.59;
	double gia4 = 12.59;
	double gia5 = 3.59;
	double tamtinh, thue, tong;
	tamtinh = gia1 + gia2 + gia3 + gia4 + gia5;
	thue = tamtinh * 0.07;
	tong = tamtinh  + thue;
	
	cout <<"Gia mon do thu nhat: " <<gia1 << "USD" << endl;
	cout <<"Gia mon do thu hai: " <<gia2 << "USD" << endl;
	cout <<"Gia mon do thu ba: " <<gia3 << "USD" << endl;
	cout <<"Gia mon do thu bon: " <<gia4 << "USD" << endl;
	cout <<"Gia mon do thu nam: " <<gia5 << "USD" << endl;
	cout <<"Tong tam tinh: " <<tamtinh << "USD" << endl;
	cout <<"Thue: " <<thue << "USD" << endl;
	cout <<"Tong: " <<tong << "USD" << endl;
	return 0;
}