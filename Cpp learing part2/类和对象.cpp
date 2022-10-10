#include<iostream>
using namespace std;
//定义一个“圆”的类
//类包含“属性”和“行为”
const double PI = 3.1415926;
class Circle//声明一个名字叫Circle的类 关键字class
{
	public://访问权限：公共访问权限，
	//定义类的属性
	int radius;
	//定义类的行为；本练习为计算圆的周长
	double calculate_perimeter()//通过函数定义类的行为；
	{
		return 2 * PI * radius;
	}
};
int main()
{
	//定义一个类的对象C1
	Circle C1;
	C1.radius = 30;//给对象C1中的属性radius赋值；
	cout << "C1这个圆的周长为" << C1.calculate_perimeter() << endl;//对对象行为的结果进行输出

	system("pause");
	return 0;

}