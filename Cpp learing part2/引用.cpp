#include<iostream>
using namespace std;
int main() 
{
	//����һ������a
	int a = 10;
	//����"����"������a��һ����������b,�䱾��ָ��ͬһ���ڴ�ռ䡣
	//�﷨
	//�������ͱ�����Ҫ���õ�һ��+&+��������
	//ע������������ʱ�� ����Ҫ��ʼ��������int &b=a
	//��ע��һ������b������a�˾Ͳ������¶�������int &b=c�ˡ�
	int& b = a;
	cout << "aΪ:" << a << endl;
	cout << "bΪ:" << b << endl;

	b = 20;
	cout << "aΪ:" << a << endl;
	cout << "bΪ:" << b << endl;



	system("pause");
	return 0;
}