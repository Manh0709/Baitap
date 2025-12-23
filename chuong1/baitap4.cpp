//Bài 4: Hoá đơn bán hàng
//Tính thuế và tip trên một hoá đơn với số tiền là 88.67 đô
//thuế là 6.75% chi cho bữa ăn, tiền tip là 20%

//phân tích bài toán
//hoá đơn phải chi trả cho bữa ăn là 88.67 đô
//tính toán xử lý : thuế 6.75% là tiền chi cho bữa ăn, tiền tip là 20%
//các bước
//bước 1: khai báo biến hoá đơn chi trả, thuế bữa ăn, thuế tip
//bước 2: tính thuế của bữa ăn = (88.67 * 0.0675)
//bước 3: tính thuế tip = (88.67 + tienthue) * 0.2
//bước 4: tính tổng hoá đơn = ( buaan + tienthue0 + 0.2)
//bước 5: in ra kết quả chi phí bữa ăn, số tiền thuế, số tiền tip, tổng hoá đơn
#include <iostream>
using namespace std;
int main (){
	float buaan;
	buaan = 88.67;
	float thuesuat;
	thuesuat = 0.0675;
	float tipsuat;
	tipsuat = 0.2;
	float tienthue;
	float tientip;
	float tonghoadon;
	tienthue = (buaan * thuesuat);
	tientip = (buaan + tienthue) * tipsuat;
	tonghoadon = (buaan + tienthue + tientip);
	cout << "chi phi bua an: " << buaan << endl;
	cout << "so tien thue: " << tienthue << endl;
	cout << "so tien tip: " << tientip << endl;
	cout <<"Tong hoa don:  " << tonghoadon << endl;
	return 0;
}