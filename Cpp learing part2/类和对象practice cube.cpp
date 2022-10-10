#include<iostream>
using namespace std;
//����һ�����������
class cube
{
    //���������Ϊ,����Ȩ��Ϊpublic
public:
	//���ù����ӿ��������ⲿ�ĳ�������
	void set_value_l(int L)
	{
		m_l = L;
	}
	void set_value_w(int W)
	{
		m_w = W;
	}
	void set_value_h(int H)
	{
		m_h = H;
	}
	//���ù����ӿ�����ӡ��������
	int get_value_l()
	{
		return m_l;	
	}
	int get_value_w()
	{
		return m_w;
	}
	int get_value_h()
	{
		return m_h;
	}
	//�����Ա������������������
	int calculate_area()
	{
		return 2 * m_l * m_w + 2 * m_l * m_h + 2 * m_w * m_h;
	}
	int calculate_volume()
	{
		return m_l * m_w * m_h;
	}

	//�����������
	//���Եķ���Ȩ��Ϊprivate
private:
	int m_l;//��
	int m_w;//��
	int m_h;//��
	//�������������һ������ıȽ�
	//ͨ�����������Ƿ���ͬ���ж������������Ƿ���ͬ
public:
	void Is_same(cube& c)
	{
		if (m_l == c.m_l && m_w == c.m_w && m_h == c.m_h)
		{
			cout << "������������ͬ" << endl;
		}
		else
		{
			cout << "���������岻ͬ" << endl;
		}
	}
};
//��������������������Ƿ���ͬ���жϣ�
void Is_same_outside(cube& c1, cube& c2)
{
	if 
		(c1.get_value_l() == c2.get_value_l() && c1.get_value_w() == c2.get_value_w() && c1.get_value_h() == c2.get_value_h())
	{
		cout << "������������ͬ" << endl;
	}
	else
	{
		cout << "���������岻ͬ" << endl;
	}
}

int main()
{
	//ʵ����һ�����������
	cube C1;
	C1.set_value_l(50);
	C1.set_value_w(30);
	C1.set_value_h(40);
	cout << "������C1�ı����Ϊ��" << C1.calculate_area() << endl;
	cout << "������C1�����Ϊ��" << C1.calculate_volume() << endl;
	cube C2;
	C2.set_value_l(50);
	C2.set_value_w(30);
	C2.set_value_h(40);
	C1.Is_same(C2);

	Is_same_outside(C1, C2);

	system("pause");
	return 0;
}