#include<iostream>
using namespace std;

int test01(int a, int b, int c)
{
	return a + b + c;
}

int test02(int a, int b = 10, int c = 10);//������test02������ ������b=10,c=10�Ǻ����βε�Ĭ��ֵ��ͬһ�������������Ͷ���ֻ����һ���ط����βο�����Ĭ��ֵ

//ע��Ϊ��ԭ��һ���м�һ��������Ĭ��ֵ�ˣ�������β�Ҳ���������Ĭ��ֵ
int test02(int a, int b, int c)
{
	return a + b + c;//�����ʵ���Դ����ʵ��ֵΪ׼��
}

int main()
{
	int val = test02(10, 20, 30);
	cout << val << endl;
}

