#include<iostream>
using namespace std;
//创建一个立方体的类
class cube
{
    //定义类的行为,访问权限为public
public:
	//设置公共接口来接受外部的长，宽，高
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
	//设置公共接口来打印长，宽，高
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
	//定义成员函数计算立方体表面积
	int calculate_area()
	{
		return 2 * m_l * m_w + 2 * m_l * m_h + 2 * m_w * m_h;
	}
	int calculate_volume()
	{
		return m_l * m_w * m_h;
	}

	//定义类的属性
	//属性的访问权限为private
private:
	int m_l;//长
	int m_w;//宽
	int m_h;//高
	//在类内完成与另一个对象的比较
	//通过长，宽，高是否相同来判断两个立方体是否相同
public:
	void Is_same(cube& c)
	{
		if (m_l == c.m_l && m_w == c.m_w && m_h == c.m_h)
		{
			cout << "两个立方体相同" << endl;
		}
		else
		{
			cout << "两个立方体不同" << endl;
		}
	}
};
//在类外完成两个立方体是否相同的判断：
void Is_same_outside(cube& c1, cube& c2)
{
	if 
		(c1.get_value_l() == c2.get_value_l() && c1.get_value_w() == c2.get_value_w() && c1.get_value_h() == c2.get_value_h())
	{
		cout << "两个立方体相同" << endl;
	}
	else
	{
		cout << "两个立方体不同" << endl;
	}
}

int main()
{
	//实例化一个立方体对象；
	cube C1;
	C1.set_value_l(50);
	C1.set_value_w(30);
	C1.set_value_h(40);
	cout << "立方体C1的表面积为：" << C1.calculate_area() << endl;
	cout << "立方体C1的体积为：" << C1.calculate_volume() << endl;
	cube C2;
	C2.set_value_l(50);
	C2.set_value_w(30);
	C2.set_value_h(40);
	C1.Is_same(C2);

	Is_same_outside(C1, C2);

	system("pause");
	return 0;
}