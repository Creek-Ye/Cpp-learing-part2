#pragma once
#include<iostream>
using namespace std;
//����һ������
class point
{
	//��Ա����
private:
	int m_x;//X����
	int m_y;//Y����
	//��Ա����
public:
	//����������
	void set_x(int x);
	
	void set_y(int y);
	
	//��ȡ�������
	int get_x();
	
	int get_y();
	
};
