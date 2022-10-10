#pragma once
#include<iostream>
using namespace std;
#include "point.h"
//定义一个圆类：
class circle
{
private:
	//定义圆类的属性:
	//1.半径
	int m_r;
	//2.圆心点
	point center_p;
public:

	//定义圆类的成员函数
	void set_r(int r);//输入圆的半径

	void set_center_p(point p);//输入圆的圆心；

	int get_r();//获取圆的半径

	point get_center_p();//获取圆的圆心

};

	


