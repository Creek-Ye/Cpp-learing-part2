# include<iostream>
using namespace std;
//ջ����žֲ��������β����ݣ�ջ����ŵ������ɱ��������ٺ��ͷ�
//ע�⣺��Ҫ���ؾֲ������ĵ�ַ�����£�
int*func(int i)
{
	int a = 10;//����һ���ֲ��������ñ��������ջ����
	return &a;//���ؾֲ������ĵ�ַ
}
int main()
{
	int*b = func(1);//����һ��ָ�����b������func�������صľֲ�����a�ĵ�ַ��
	cout << *b << endl;
	cout << *b << endl;

	system("pause");
	return 0;

}