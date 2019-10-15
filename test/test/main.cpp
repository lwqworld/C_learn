#include<iostream>
#include <Eigen/Dense>
using namespace Eigen;     // 改成这样亦可 using Eigen::MatrixXd; 
using namespace std;
//int main() {
//	int x = 9;
//	x = +7;
//	cout << "x=" << x << endl;
//	x = -7;
//	cout << "x=" << x << endl;
//	//getchar();
//	
//	//结果为7，-7
//	//注意：除了i++、i--等常例外，最好不要用怪异的简化
//	char c = 128;
//	printf("c=%d\n", c);
//	//结果为-128
//	//注意：char为signed，[-128,127],整形以补码形式存储，补码即正数=原码，负数=反码+1
//	//128为10000000B即补码形式，转换到原值是-128
//	int b = 0x2345;
//	b = (char)b;
//	cout << "b=" << b << endl;
//	//结果为69即0x45,小端字节序
//	return 1;
//}

int main()
{
	MatrixXd m = MatrixXd::Random(3, 3);              //随机生成3*3的double型矩阵
	m = (m + MatrixXd::Constant(3, 3, 1.2)) * 50;      //MatrixXd::Constant(3,3,1.2)表示生成3*3的double型矩阵，该矩阵所有元素均为1.2
	cout << "m =" << endl << m << endl;
	VectorXd v(3);        // 定义v为3*1的double型向量
	v << 1, 2, 3;         // 向量赋值
	cout << "m * v =" << endl << m * v << endl;
	system("pause");
	return 0;
}