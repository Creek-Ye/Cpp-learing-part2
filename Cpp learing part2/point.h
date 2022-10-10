#pragma once
#include<iostream>
using namespace std;
//定义一个点类
class point
{
	//成员属性
private:
	int m_x;//X坐标
	int m_y;//Y坐标
	//成员函数
public:
	//输入点的坐标
	void set_x(int x);
	
	void set_y(int y);
	
	//获取点的坐标
	int get_x();
	
	int get_y();
	
};
