#include<iostream>
using namespace std;
class base
{
public:
	int m_age;
};

class subbase1 :public base
{
	
};
class subbase2 :public base
{

};
class son:public subbase1,public subbase2
{

};
void test01()
{
	son st;//通过子类创建一个对象st
	st.subbase1::m_age = 10;//通过son的对象st访问subbase1下的m_age;
	st.subbase2::m_age = 20;//通过son的对象st访问subbase2下的m_age;
	cout << "st.subbase1::m_age=" << st.subbase1::m_age << endl;
	cout << "st.subbase2::m_age=" << st.subbase2::m_age << endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}