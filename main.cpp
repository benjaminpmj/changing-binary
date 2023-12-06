#include<iostream>
#include"m1.h"
using namespace std;
void main()
{
	cout << "请输入所要转换的数字及进制" << endl << "(进制在2-10之间)" << endl;
	int numx , n;
		cin >> numx>>n;//分别输入数字和进制
		binary(numx, n);
	system("pause");
}