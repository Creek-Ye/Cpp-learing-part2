#include<iostream>
using namespace std;
int& func1()
{
	int a = 10;
	return a;//��Ҫ���ؾֲ�����������
}

int& func2()
{
	static int a = 10;//����һ����̬���������ȫ������
	return a;
}
int main()
{
	//int &b = func1();
	/*cout << b << endl;
	cout << b << endl;*/

	int& b = func2();
	func2() = 1000;//�������ķ���ֵ����Ϊ���ã����Է�����ֵ
	cout << b << endl;
	cout << b << endl;

	system("pause");
	return 0;
}