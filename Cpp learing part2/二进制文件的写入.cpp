#include<iostream>
using namespace std;
#include<fstream>
//����һ����
class person
{	
public:
	char m_name[64];//���ַ�������ķ�ʽ�������ַ���
	
	int age;
	
};

void test()
{
	//1.����ͷ�ļ�

//2.����һ���ļ���Ķ���,д���ļ�����Ϊofstream(�������)
	ofstream ofs;

	//3.���ļ�
	ofs.open("partfolio_name.txt", ios::out | ios::binary);

	//4.���ļ���д������
	
	person p={"����",31};//�����person p������һ���ṹ��ı���p�ĸ�ֵ��ʽ
	ofs.write((const char*)& p, sizeof(p));
	//5.����д�ļ�
}
int main()
{
	test();
	system("pause");
	return 0;
}

