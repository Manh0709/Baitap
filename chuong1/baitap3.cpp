// Bài 3 : Thuế bán hàng
//Tính tổng thuế bán hàng trên một giỏ hàng 95 đô.
//Giả sử thuế bán hàng của một tiểu bang là 4%, và thuế bán hàng của quận là 2%

//phân tích bài toán
//tổng thuế : 95 đô
//tính toán xử lý : thuế bán hàng của một tiểu bang là 4% vầ thuế bán hàng của quận là 2%
//các bước
//bước 1: khai báo biến tổng thuế, thuế của tiểu bang, thuế của quận
//bước 2: tính thuế tiểu bang = (95 * 0.04) 
//bước 3: tính thuế quận = (95 * 0.02)
//bước 4: tính tổng thuế = (lấy tổng thuế * thuế tiểu bảng + tổng thuế * thuế quận)
//bước 5: in ra kết quả tổng thuế bán hàng
#include <iostream>
using namespace std;
int main(){
	float tongthue;
	tongthue = 95;
	float tieubang;
	tieubang = 0.04;
	float quan;
	quan = 0.02;
	tongthue = (tongthue *  tieubang + tongthue * quan);
	cout << "Tong thue la " << tongthue << endl;
	return 0;
}