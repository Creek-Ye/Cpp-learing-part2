#include<iostream>
using namespace std;
//�ֱ𴴽����ֲ�ͬ����ĸ��࣬������ͬ�����ι����ĺ�����
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

//������������Ĳ�ͬ�ĳ��̣�����

//intel���̵�
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

//lenovo���̵�
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
	//computer�Ĺ��캯��,��computer�ĳ�Ա���Է���ֵ
	computer(CPU* cpu, Graphic_card* graphic_card, Memory_stripe* memory_stripe)
	{
		m_cpu = cpu;
		m_graphic_card = graphic_card;
		m_memory_stripe = memory_stripe;
	}
	//�ṩһ������������Ҫ���ڲ��������������
	void dowork()
	{
		m_cpu->calculte();//���ø���cpu�Ĺ��ܣ�
		m_graphic_card->show();//���ø����Կ��Ĺ��ܣ�
		m_memory_stripe->storage();//���ø����ڴ����Ĺ��ܣ�
	}
	//�ṩһ����������,����ɾ�����е����
	~computer()
	{
		//ɾ��cpu���
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//ɾ���Կ����
		if (m_graphic_card != NULL)
		{
			delete m_graphic_card;
			m_graphic_card = NULL;
		}
		//ɾ���ڴ������
		if (m_memory_stripe != NULL)
		{
			delete m_memory_stripe;
			m_memory_stripe = NULL;
		}
	}


private:
	//computer���Լ��ĳ�Ա����
	CPU* m_cpu;
	Graphic_card* m_graphic_card;
	Memory_stripe* m_memory_stripe;

};

//ʵ������һ̨����
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

