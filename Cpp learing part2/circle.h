#pragma once
#include<iostream>
using namespace std;
#include "point.h"
//����һ��Բ�ࣺ
class circle
{
private:
	//����Բ�������:
	//1.�뾶
	int m_r;
	//2.Բ�ĵ�
	point center_p;
public:

	//����Բ��ĳ�Ա����
	void set_r(int r);//����Բ�İ뾶

	void set_center_p(point p);//����Բ��Բ�ģ�

	int get_r();//��ȡԲ�İ뾶

	point get_center_p();//��ȡԲ��Բ��

};

	


