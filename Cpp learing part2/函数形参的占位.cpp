#include<iostream>
using namespace std;
void func1(int a, int)//�������βε�ռλ��ֻ�������������ͣ������������ƣ�
{
	cout << "this is func1's invoke" << endl;
}

void func2(int a, int=10)//ռλ��Ҳ���Լ�Ĭ�ϲ���
{
	cout << "this is func2's invoke" << endl;
}
int main()
{
	func1(10, 3);//���봫����Ӧ����������3����Ӧfunc1�е�ռλ��int��

	func2(20);//func2�����ĵ�������ռλ����Ĭ�ϲ��������Ե���ʱ���ô��볣��Ҳ���Ե��á�

	system("pause");
	return 0;
}