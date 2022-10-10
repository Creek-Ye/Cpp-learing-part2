#include<iostream>
using namespace std;
//分别创建三种不同零件的父类，声明不同零件如何工作的函数；
class CPU
{
public:
	virtual void calculte() = 0;
};
class Graphic_card
{
public:
	virtual void show() = 0;
};
class Memory_stripe
{
public:
	virtual void storage() = 0;
};

//创建三种零件的不同的厂商：子类

//intel厂商的
class intelCPU:public CPU
{
	void calculte()
	{
		cout << "intelCPU is calculating" << endl;
	}
};
class intelGraphic_card :public Graphic_card
{
	void show()
	{
		cout << "intelGraphic_card is showing grapic" << endl;
	}
};
class intelMemory_stripe :public Memory_stripe
{
	void storage()
	{
		cout << "intelMemory_stripe is storaging" << endl;
	}
};

//lenovo厂商的
class lenovoCPU :public CPU
{
	void calculte()
	{
		cout << "lenovoCPU is calculating" << endl;
	}
};
class lenovoGraphic_card :public Graphic_card
{
	void show()
	{
		cout << "lenovoGraphic_card is showing grapic" << endl;
	}
};
class lenovoMemory_stripe :public Memory_stripe
{
	void storage()
	{
		cout << "lenovoMemory_stripe is storaging" << endl;
	}
};



class computer
{
public:
	//computer的构造函数,给computer的成员属性符初值
	computer(CPU* cpu, Graphic_card* graphic_card, Memory_stripe* memory_stripe)
	{
		m_cpu = cpu;
		m_graphic_card = graphic_card;
		m_memory_stripe = memory_stripe;
	}
	//提供一个工作函数，要让内部的零件工作起来
	void dowork()
	{
		m_cpu->calculte();//调用父类cpu的功能；
		m_graphic_card->show();//调用父类显卡的功能；
		m_memory_stripe->storage();//调用父类内存条的功能；
	}
	//提供一个析构函数,用来删除其中的零件
	~computer()
	{
		//删除cpu零件
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//删除显卡零件
		if (m_graphic_card != NULL)
		{
			delete m_graphic_card;
			m_graphic_card = NULL;
		}
		//删除内存条零件
		if (m_memory_stripe != NULL)
		{
			delete m_memory_stripe;
			m_memory_stripe = NULL;
		}
	}


private:
	//computer类自己的成员属性
	CPU* m_cpu;
	Graphic_card* m_graphic_card;
	Memory_stripe* m_memory_stripe;

};

//实例化第一台电脑
void test01()
{
	computer *c1=new computer(new(lenovoCPU), new(lenovoGraphic_card), new(lenovoMemory_stripe));
	c1->dowork();
	delete c1;
}

void test02()
{
	computer* c2 = new computer(new(intelCPU), new(intelGraphic_card), new(intelMemory_stripe));
	c2->dowork();
	delete c2;
}

void test03()
{
	computer* c3 = new computer(new(intelCPU), new(lenovoGraphic_card), new(intelMemory_stripe));
	c3->dowork();
	delete c3;
}

int main()
{
	test01();
	cout << "**********************************" << endl;
	test02();
	cout << "**********************************" << endl;
	test03();
	system("pause");
	return 0;
}

