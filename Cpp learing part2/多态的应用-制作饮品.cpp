#include<iostream>
using namespace std;

//����һ������
class abstract_makingdrinks
{
public:
	//���ж��崿���Ա����
	//��һ����ˮ
	virtual void boil_water() = 0;
	//�ڶ���
	//����������
	virtual void brew() = 0;
	//������
	//���뱭��
	virtual void pour_into_cup() = 0;
	//���Ĳ�
	//���븨��
	virtual void add_others() = 0;

	//ʹ�������ĸ�������Ч,���ô��
	void making_drinks()
	{
		boil_water();
		brew();
		pour_into_cup();
		add_others();
	}
};
//�����������ȵ�����
class making_coffee:public abstract_makingdrinks
{
	//��д��̬����
	//��һ����ˮ
	virtual void boil_water()
	{
		cout << "boiled coffee water" << endl;
	}
	//�ڶ���
	//����������
	virtual void brew()
	{
		cout << "brew coffee beans with water" << endl;
	}
	//������
	//���뱭��
	virtual void pour_into_cup()
	{
		cout << "pour mixed coffee water into cup" << endl;
	}

	//���Ĳ�
	//���븨��
	virtual void add_others()
	{
		cout << "add some mild and suger" << endl;
	}
		
};

//���������������
class making_tea :public abstract_makingdrinks
{
	//��д��̬����
	//��һ����ˮ
	virtual void boil_water()
	{
		cout << "boiled tea water" << endl;
	}
	//�ڶ���
	//����������
	virtual void brew()
	{
		cout << "brew teas with water" << endl;
	}
	//������
	//���뱭��
	virtual void pour_into_cup()
	{
		cout << "pour mixed tea water into cup" << endl;
	}

	//���Ĳ�
	//���븨��
	virtual void add_others()
	{
		cout << "add some lemon and suger" << endl;
	}
};

void do_workforcoffee()
{
	abstract_makingdrinks &abs = *new making_coffee;//���ø��������ָ������new������һ������
	//���ø�������س�Ա������ʵ������Ķ�̬
	abs.making_drinks();

}

void do_workfortea()
{
	abstract_makingdrinks& abs = *new making_tea;//���ø��������ָ������new������һ������
	//���ø�������س�Ա������ʵ������Ķ�̬
	abs.making_drinks();

}

int main()
{
	//����coffee
	do_workforcoffee();

	cout << "***************" << "�����Ƿָ���" << "******************<<endl" << endl;
	//������
	do_workfortea();

	system("pause");
	return 0;
}