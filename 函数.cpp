#include<iostream>
using namespace std;

int digit(int num2 ,int n)//�ó�����ת�����λ��
{
	for (int k = 1; 1; k++)
	{
		if (num2 == 0)
			return k-1;
		else
			num2=num2 / n;
	}
}
void binary(int num1 , int n)//����ת�����Ƶĺ���
{
	int x;
	x = digit(num1, n);//��λ������x������
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
	for (int j = x-1; j >=0;j--)//�����������
	cout << arry[j] ;
}