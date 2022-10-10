#include<iostream>
using namespace std;
class P
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class Ch :public P
{
	//创建一个子类自己独有的属性
public:
	int m_d;
};
int main()
{
	cout << sizeof(Ch) << endl;
	//说明父类中所有的属性子类都继承了，只是没有private的子类没有权限访问而已；
	system("pause");
	return 0;
}