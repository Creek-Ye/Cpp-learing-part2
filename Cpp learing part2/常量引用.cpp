#include<iostream>
using namespace std;

void printf(const int& a)//��һ��const���������޶�ʵ��rel��ֵ��Ϊ20��������Ϊ�������ڲ���������¸�ֵ��Ӱ��main���������ʵ��ֵ
{
	//a = 500;//�ᱨ����Ϊconst���������βΣ��������ٸ����е�ֵ�ˡ�
	cout << "a=" << a << endl;
}


int main()
{
	int a = 10;
	int& ref = a;//����һ�����ñ���ref��ʹ��ref��aָ��һ���ڴ�ռ䣬��ref=a;
	//int& b = 10;//�Ƿ�����������ֻ�ܵ������ı����ϣ�����ֱ�����õĳ�����

	//��������
	const int& b = 10;//ǰ���һ��const�ͺϷ��ˣ��䱾����int temp =10��const int&b=temp;�൱��ϵͳ��ʱ������һ���м����temp

	int rel = 20;
	printf(rel);

	system("pause");
	return 0;
}