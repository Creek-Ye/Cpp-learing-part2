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
	virtual int calculate()//��Դ�루�����еĳ�Ա���������б�д��ʱ��ʲô����д��ֻreturnһ��0��ע���virtual
	{
		return 0;
	}
	/*������Ķ���*/
	int num1;
	int num2;
};
//�뿪��һ���ӷ�����
//����һ������̳и���
class add_calculate:public virtualcalculator
{
	//��д��Ա����
	int calculate()
	{
		return num1 + num2;
	}
};

// �뿪��һ����������
//����һ������̳и���
class sub_calculate :public virtualcalculator
{
	//��д��Ա����
	int calculate()
	{
		return num1 - num2;
	}
};

// �뿪��һ���˷�����
//����һ������̳и���
class mul_calculate :public virtualcalculator
{
	//��д��Ա����
	int calculate()
	{
		return num1 * num2;
	}
};

// �뿪��һ����������
//����һ������̳и���
class div_calculate :public virtualcalculator
{
	//��д��Ա����
	int calculate()
	{
		return num1 / num2;
	}
};


//���ö�̬
//��������û�ָ��ָ������Ķ���
//ʵ�ּӷ��ĵ���
void jia_calculate()
{
	virtualcalculator* add;//����һ������Ķ���ָ�룬ָ���������Ϊadd

	add = new add_calculate;//new ����һ��add_calculate�Ķ���
	add->num1 = 10;
	add->num2 = 20;

	
	cout << add->num1 << "+" << add->num2 << "=" << add->calculate()<<endl;
}

//ʵ�ּ����ĵ���
void jian_calculate()
{
	virtualcalculator* sub;//����һ����������ָ�룬ָ���������Ϊadd

	sub = new sub_calculate;//new ����һ��sub_calculate�Ķ���
	sub->num1 = 10;
	sub->num2 = 5;


	cout << sub->num1 << "-" << sub->num2 << "=" << sub->calculate()<<endl;
}

//ʵ�ֳ˷��ĵ���
void cheng_calculate()
{
	virtualcalculator* mul;//����һ����������ָ�룬ָ���������Ϊadd

	mul = new mul_calculate;//new ����һ��mul_calculate�Ķ���
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