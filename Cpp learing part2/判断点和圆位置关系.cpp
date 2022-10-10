#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"
void is_incircle(circle& c, point& p)//判断点和圆位置关系的函数,引用传递
{
	int distance = (c.get_center_p().get_x() - p.get_x()) * (c.get_center_p().get_y() - p.get_y()) + (c.get_center_p().get_y() - p.get_y()) * (c.get_center_p().get_y() - p.get_y());
	int r = c.get_r()* c.get_r();
	if (distance == r)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > r)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}

}
int main()
{
	//实例化一个点
	point input_p;
	input_p.set_x(0);
	input_p.set_y(50);

	//实例化一个圆心点
	point center_p;
	center_p.set_x(0);
	center_p.set_y(0);
	//实例化一个圆
	circle c1;
	c1.set_center_p(center_p);
	c1.set_r(50);

	//判断点和圆的关系
	is_incircle(c1,input_p);
	
	system("pause");
	return 0;


}