#include<iostream>
using namespace std;
#include<string>
class cars
{
public:
	friend ostream& operator<<(ostream& out, cars& p);
	//void operator<<(cout)//ʵ�ʵ��õ�ʱ��϶�Ϊ ����object.operator<< cout// �����cout ��object.operator���ұߣ����������ǵ�Ҫ��cout����ߡ�
	//���Բ������ó�Ա������������������й��졣

	//���ù��캯������ֵ
	cars(string brand, string length, string weight)
	{
		m_brand = brand;
		m_length = length;
		m_weight = weight;
	}
private:
	string m_brand;
	string m_length;
	string m_weight;
};

//��ȫ�ֺ���������һ�������������
ostream& operator<<(ostream& out, cars& p)//ʵ�ʻ�Ӱ�����ص����������Լ�����������ǰ�����ͺ����
{
	cout << p.m_brand << "\t" << p.m_length << "\t" << p.m_weight << "\t";
	return out;
}
void test01()
{
	//ʵ����һ������
	cars p("volvo","2560mm", "350kg");
	//cout << p;//û�����ع�������������ᱨ��
	cout << p << endl;//ʵ���ǵ��ú���ostream& operator<<(cout,p),

}




int main()
{
	test01();

	system("pause");
	return 0;
}