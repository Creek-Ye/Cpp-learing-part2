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
	//����һ�������Լ����е�����
public:
	int m_d;
};
int main()
{
	cout << sizeof(Ch) << endl;
	//˵�����������е��������඼�̳��ˣ�ֻ��û��private������û��Ȩ�޷��ʶ��ѣ�
	system("pause");
	return 0;
}