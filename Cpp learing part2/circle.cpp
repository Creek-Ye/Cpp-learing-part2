#include<iostream>
using namespace std;
#include"circle.h"
//����Բ��ĳ�Ա����
void circle::set_r(int r)//����Բ�İ뾶
{
	m_r = r;
}
void circle::set_center_p(point p)//����Բ��Բ�ģ�
{
	center_p = p;

}
int circle::get_r()//��ȡԲ�İ뾶
{
	return m_r;
}
point circle::get_center_p()//��ȡԲ��Բ��
{
	return center_p;
}
