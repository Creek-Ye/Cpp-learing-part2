#include<iostream>
using namespace std;
//����new�ؼ����ڶ�������һ���ֲ�����
int* func1()
{
	int* p = new int(10);//new��һ������10��new�ı�����һ����ַ��������Ҫ����һ��ָ�����p�����������ַ��ָ�����p�����ջ����������10�����ڶ�����
	return p;
}
void test1()
{
	int*p=func1();
	cout << *p << endl;
	cout << *p << endl;
	//delete p;����delete�ؼ�����ɾ�������ľֲ�������
	cout << *p << endl;
	
}
//����new�ؼ����ڶ�������һ������
int* func2()
{
	int* array = new int[10];//new��һ������10��Ԫ�ص����飬new�ı����Ǹ�������Ԫ�أ�Ҳ����Ϊ�Ǹ�����ģ��ĵ�ַ��
	for (int i = 0; i < 10; i++)//����forѭ�����������Ԫ�ظ�ֵ
	{
		array[i] = i + 100;
	}
	return array;//�Ѹ�ֵ�õ������Ե�ַ�ķ�ʽ���س�ȥ
}

void test2()
{
	int*arr=func2();//����һ��ָ�����arr������func2�������ص������ַ
	for (int i = 0; i < 10; i++)//����ѭ������ӡ�������ÿ��Ԫ��
	{
		cout << *(arr) << endl;
		arr++;
	}
	//delete[]arr;����delete�ؼ�����ɾ����������new�ؼ��ִ�����������ֲ�������

}
int main()
{
	test1();
	test2();
	system("pause");
	return 0;
}