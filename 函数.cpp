#include<iostream>
using namespace std;

int digit(int num2 ,int n)//得出数字转化后的位数
{
	for (int k = 1; 1; k++)
	{
		if (num2 == 0)
			return k-1;
		else
			num2=num2 / n;
	}
}
void binary(int num1 , int n)//进行转化进制的函数
{
	int x;
	x = digit(num1, n);//将位数存在x变量中
     int num = num1;
	int arry[30];
	for (int i=0; i < x; i++)
	{
		if (num%n == 0)
		{
			arry[i] = 0;
			num=num / n;
		}
		else
		{
			arry[i] = num%n;
			num = num / n;
		}
	}
	for (int j = x-1; j >=0;j--)//反向输出数组
	cout << arry[j] ;
}