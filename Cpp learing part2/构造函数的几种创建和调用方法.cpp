#include<iostream>
using namespace std;
//����һ��person ��
class person
{

  public:
	//���캯���Ĵ���������
	//1.�޲�������Ĭ�Ϲ��캯����
	person()
	{
		cout << "�޲ι��캯���ĵ���" << endl;
	}
	//2.�вη�
	person(int a)
	{
		age = a;
		cout << "�вι��캯���ĵ���" << endl;
	}
	//��������
	person(const person& p)
	{
		age = p.age;//�ѿ����Ķ���p������age��ֵ��Ҫ�´����Ķ���
		cout << "�������캯���ĵ���" << endl;
	}

	//������������
	~person()
	{
		cout << "���������ĵ���" << endl;
	}

//�������һ������
int age;
	
};
int main()
{
	//���캯�����õķ�����
	//1.���ŷ���
	//person p1;//����һ������p1���Զ���ȡĬ�Ϲ��캯��
	//person p2(10);//����һ������p2,ͬʱ�����вεĹ��캯��
	//person p3(p2);//����һ������p3,p3������age��p2������ageһ����

	//���ŷ�����Ĭ�Ϲ��캯��ʱ������д�� person p4();������������Ϊʱһ������ֵΪ person��� ��������Ϊp4�ĺ���������
	//cout << p2.age << endl;
	//cout << p3.age << endl;

	//2.��ʾ��
	person p1 = person();//Ĭ�Ϲ��캯������ʾ���ã�
	person p2 = person(10);//�вι��캯������ʾ����
	person p3 = person(p2);//�������캯������ʾ����

	//��Ҫע����ǵȺ��Ҳ����һ�� person�࣬û�����ֵĶ�������������ó�������ʱ�ģ�������ִ���걾�ж���Ĵ�����������
	person(10);
	cout << "aaaaaaaaaaaa" << endl;




	system("pause");
	return 0;
		 
}