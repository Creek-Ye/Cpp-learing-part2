#include<iostream>
using namespace std;
//����һ����Բ������
//����������ԡ��͡���Ϊ��
const double PI = 3.1415926;
class Circle//����һ�����ֽ�Circle���� �ؼ���class
{
	public://����Ȩ�ޣ���������Ȩ�ޣ�
	//�����������
	int radius;
	//���������Ϊ������ϰΪ����Բ���ܳ�
	double calculate_perimeter()//ͨ���������������Ϊ��
	{
		return 2 * PI * radius;
	}
};
int main()
{
	//����һ����Ķ���C1
	Circle C1;
	C1.radius = 30;//������C1�е�����radius��ֵ��
	cout << "C1���Բ���ܳ�Ϊ" << C1.calculate_perimeter() << endl;//�Զ�����Ϊ�Ľ���������

	system("pause");
	return 0;

}