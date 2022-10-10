#include<iostream>
using namespace std;
#include<string>
class virtualcalculator
{
public:
	virtualcalculator()
	{
		num1 = 0;
		num2 = 0;
	}
	virtual int calculate()//对源码（父类中的成员函数）进行编写的时候，什么都不写，只return一个0；注意加virtual
	{
		return 0;
	}
	/*创建类的对象*/
	int num1;
	int num2;
};
//想开辟一个加法运算
//创建一个子类继承父类
class add_calculate:public virtualcalculator
{
	//重写成员函数
	int calculate()
	{
		return num1 + num2;
	}
};

// 想开辟一个减法运算
//创建一个子类继承父类
class sub_calculate :public virtualcalculator
{
	//重写成员函数
	int calculate()
	{
		return num1 - num2;
	}
};

// 想开辟一个乘法运算
//创建一个子类继承父类
class mul_calculate :public virtualcalculator
{
	//重写成员函数
	int calculate()
	{
		return num1 * num2;
	}
};

// 想开辟一个除法运算
//创建一个子类继承父类
class div_calculate :public virtualcalculator
{
	//重写成员函数
	int calculate()
	{
		return num1 / num2;
	}
};


//调用多态
//父类的引用或指针指向子类的对象
//实现加法的调用
void jia_calculate()
{
	virtualcalculator* add;//创建一个父类的对象指针，指针变量名称为add

	add = new add_calculate;//new 出来一个add_calculate的对象；
	add->num1 = 10;
	add->num2 = 20;

	
	cout << add->num1 << "+" << add->num2 << "=" << add->calculate()<<endl;
}

//实现减法的调用
void jian_calculate()
{
	virtualcalculator* sub;//创建一个父类对象的指针，指针变量名称为add

	sub = new sub_calculate;//new 出来一个sub_calculate的对象；
	sub->num1 = 10;
	sub->num2 = 5;


	cout << sub->num1 << "-" << sub->num2 << "=" << sub->calculate()<<endl;
}

//实现乘法的调用
void cheng_calculate()
{
	virtualcalculator* mul;//创建一个父类对象的指针，指针变量名称为add

	mul = new mul_calculate;//new 出来一个mul_calculate的对象；
	mul->num1 = 10;
	mul->num2 = 50;

	cout << mul->num1 << "*" << mul->num2 << "=" << mul->calculate()<<endl;
}

int main()
{

	jia_calculate();
	jian_calculate();
	cheng_calculate();

	system("pause");
	return 0;
}