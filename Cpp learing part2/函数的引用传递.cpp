#include<iostream>
using namespace std;
//����һ��ֵ���ݵĺ���
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01��a=" << a << endl;
	cout << "swap01��b=" << b << endl;

}

//����һ����ַ���ݵĺ���
void swap02(int* a, int* b)//�����൱������������int�͵�ָ�����a��b��
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//����һ�����ô��ݵĺ���
void swap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	swap01(a, b);
	cout << "ֵ���ݺ�a=" << a << endl;
	cout << "ֵ���ݺ�b=" << b << endl;

	swap02(&a, &b);//��ַ�����βεĸı��Ӱ��ʵ��
	cout << "��ַ���ݺ�a=" << a << endl;
	cout << "��ַ���ݺ�b=" << b << endl;

	swap03(a, b); //���ô����βεĸı��Ӱ��ʵ��
	cout << "���ô��ݺ�a=" << a << endl;
	cout << "���ô��ݺ�b=" << b << endl;

	system("pause");
	return 0;
}