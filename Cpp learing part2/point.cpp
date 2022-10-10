#include<iostream>
using namespace std;
#include"point.h"
void point::set_x(int x)
{
	m_x = x;
}
void  point::set_y(int y)
{
	m_y = y;
}
//获取点的坐标
int  point::get_x()
{
	return m_x;
}
int  point::get_y()
{
	return m_y;
}
