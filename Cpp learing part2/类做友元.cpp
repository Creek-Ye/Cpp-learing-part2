#include<iostream>
using namespace std;
#include<string>

class building;//������Ҫ��һ��building��
class goodgay
{
public:
	goodgay();//����һ��goodgay�Ĺ��캯��

	void visit();//����һ��visit��Ա����

	//��Ա����
	building* m_Building;//����һ��building��Ķ���ָ�롣

};


class building//����һ��building�ࣻ
{
	friend class goodgay;
public:
	building();//����building�Ĺ��캯��

	//��Ա����
	string sitting_room;
private:
	string bed_room;
};


//�����building��Ĺ��캯������ֵ
building::building()
{
	sitting_room = "��ܰ�Ŀ���";
	bed_room = "��Ҷ�Ĺ���";
}
goodgay::goodgay()//goodgay�µĹ��캯��goodgay(),��ָ�����m_Building new����һ��building��Ķ���
{	
	m_Building = new building ;//new����һ������Building����ڶ�������ָ�뷵�ظ�building��
}
void goodgay::visit()//���ⴴ��goodgay�������visit��Ա����
{
	cout << "��ĺû���goodgay���ڷ�����ģ�" << m_Building->sitting_room << endl;
	cout << "��ĺû���goodgay���ڷ�����ģ�" << m_Building->bed_room << endl;
}
int main()
{
	//����һ��goodgay��Ķ���
	goodgay gg;
	gg.visit();
	system("pause");
	return 0;
}