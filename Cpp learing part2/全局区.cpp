#include<iostream>
using namespace std;
//����ȫ�ֱ���������main�����еı���)
int g_a = 10;
int g_b = 20;
//const���ε�ȫ�ֱ���
const int c_g_a = 10;
const int c_g_b = 20;
int main()
{
	//����ֲ���������main��������ı�����
	int l_a = 10;
	int l_b = 20;
	cout << "�ֲ�����l_a�ĵ�ַΪ " << int(&(l_a)) << endl;
	cout << "�ֲ�����l_b�ĵ�ַΪ " << int(&(l_b)) << endl;
	cout << "ȫ�ֱ���g_a�ĵ�ַΪ " << int(&(g_a)) << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ " << int(&(g_b)) << endl;
	//���徲̬���� ����ǰ�ӹؼ���static
	static int s_a = 10;
	cout << "��̬�����ĵ�ַΪ " << int(&(s_a))  << endl;
	//���峣��
	//��Ϊ�ַ�������
	cout << "�ַ��������ĵ�ַΪ " << int(&("hello,world")) << endl;
	
	cout << "const���ε�ȫ�ֱ���a�ĵ�ַΪ " << int(&(c_g_a)) << endl;
	cout << "const���ε�ȫ�ֱ���b�ĵ�ַΪ " << int(&(c_g_b)) << endl;
	//����const���εľֲ���������main��������Ǿֲ���
	const int c_l_a = 10;
	const int c_l_b = 20;
	cout << "const���εľֲ�����a�ĵ�ַΪ " << int(&(c_l_a)) << endl;
	cout << "const���εľֲ�����b�ĵ�ַΪ " << int(&(c_l_b)) << endl;

	system("pause");
	return 0;
}