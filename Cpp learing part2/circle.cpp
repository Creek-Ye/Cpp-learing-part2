#include<iostream>
using namespace std;
#include"circle.h"
//定义圆类的成员函数
void circle::set_r(int r)//输入圆的半径
{
	m_r = r;
}
void circle::set_center_p(point p)//输入圆的圆心；
{
	center_p = p;

}
int circle::get_r()//获取圆的半径
{
	return m_r;
}
point circle::get_center_p()//获取圆的圆心
{
	return center_p;
}
