#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"
void is_incircle(circle& c, point& p)//�жϵ��Բλ�ù�ϵ�ĺ���,���ô���
{
	int distance = (c.get_center_p().get_x() - p.get_x()) * (c.get_center_p().get_y() - p.get_y()) + (c.get_center_p().get_y() - p.get_y()) * (c.get_center_p().get_y() - p.get_y());
	int r = c.get_r()* c.get_r();
	if (distance == r)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > r)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}

}
int main()
{
	//ʵ����һ����
	point input_p;
	input_p.set_x(0);
	input_p.set_y(50);

	//ʵ����һ��Բ�ĵ�
	point center_p;
	center_p.set_x(0);
	center_p.set_y(0);
	//ʵ����һ��Բ
	circle c1;
	c1.set_center_p(center_p);
	c1.set_r(50);

	//�жϵ��Բ�Ĺ�ϵ
	is_incircle(c1,input_p);
	
	system("pause");
	return 0;


}