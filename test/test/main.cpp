#include<iostream>
#include <Eigen/Dense>
using namespace Eigen;     // �ĳ�������� using Eigen::MatrixXd; 
using namespace std;
//int main() {
//	int x = 9;
//	x = +7;
//	cout << "x=" << x << endl;
//	x = -7;
//	cout << "x=" << x << endl;
//	//getchar();
//	
//	//���Ϊ7��-7
//	//ע�⣺����i++��i--�ȳ����⣬��ò�Ҫ�ù���ļ�
//	char c = 128;
//	printf("c=%d\n", c);
//	//���Ϊ-128
//	//ע�⣺charΪsigned��[-128,127],�����Բ�����ʽ�洢�����뼴����=ԭ�룬����=����+1
//	//128Ϊ10000000B��������ʽ��ת����ԭֵ��-128
//	int b = 0x2345;
//	b = (char)b;
//	cout << "b=" << b << endl;
//	//���Ϊ69��0x45,С���ֽ���
//	return 1;
//}

int main()
{
	MatrixXd m = MatrixXd::Random(3, 3);              //�������3*3��double�;���
	m = (m + MatrixXd::Constant(3, 3, 1.2)) * 50;      //MatrixXd::Constant(3,3,1.2)��ʾ����3*3��double�;��󣬸þ�������Ԫ�ؾ�Ϊ1.2
	cout << "m =" << endl << m << endl;
	VectorXd v(3);        // ����vΪ3*1��double������
	v << 1, 2, 3;         // ������ֵ
	cout << "m * v =" << endl << m * v << endl;
	system("pause");
	return 0;
}