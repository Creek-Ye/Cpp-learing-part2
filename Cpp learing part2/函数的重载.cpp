#include<iostream>
using namespace std;
#include<string>
//�������صļ�������:
//1.��ͬ�����������綼��ȫ����
//2.������һ��
//3.�������β��б��У��βεĸ������βε��������ͣ��βε�ǰ��˳��������һ����һ��
//4.����ֵ���� ������ ��Ϊ���ֺ������ص�����

void function1(int a, double b, float c)
{
	cout << "this is function1's int a, double b, float c invoke" << endl;
}
void function1(int a)
{
	cout << "this is function1's int a invoke" << endl;
}

void function1(float a, int b, string u)
{
	cout << "this is function1's float a, int b, string u invoke" << endl;
}
//���������е�ע������
//1.�����������β�Ϊ����

void func2(int& a)//int &a ʵ�α�������һ����������֮��Ӧ
{
	cout << "this is func2 int&a invoke" << endl;
}

void func2(const int& a)//const int&a ʵ�α�������һ��������֮��Ӧ����Ϊ int temp = һ�����εĳ����� const int &a = temp;
{
	cout << "this is func2 const int& a invoke" << endl;
}

//2.����������Ĭ�ϲ����Ŀ�
void func3(float a)
{
	cout << "this is func3 float a's invoke" << endl;
}

void func3(float a, float b=20.5)//��Ӧ��ʵ���� ����һ��folat ���͵�ֵҲ���ԣ�����Ҳ���ԣ������������ɶ����ԣ��Ӷ��ᱨ��
{
	cout << "this is func3 float a's invoke" << endl;
}

int main()
{
	function1(10, 10.2, 10.5);

	function1(10);

	function1(10.0,30,"С��");

	int a = 20;

	func2(a);
	func2(20);

	func3(10.4);
	//��Ӧ�ĵڶ������غ������β��б�����һ��Ĭ��ֵ������һ��ֵ�Ϳ��Ե���func3�ĵڶ������غ�������������һ��ʵ�Σ�
	//����������Ϊ�ȿ��Ե���func3�ĵ�һ�����غ�����Ҳ���Ե��õڶ������Ӷ��ᱨ��


	system("pause");
	return 0;
}