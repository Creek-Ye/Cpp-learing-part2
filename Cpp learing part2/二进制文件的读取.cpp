#include<iostream>
using namespace std;
#include<fstream>
class person
{
public:
	char m_name[64];
	int age;

};
void test()
{
	//�������ļ��Ķ�ȡ
	//1.����ͷ�ļ�
	//2.����һ��ifstream�Ķ���
		ifstream ifs;
	//3.open����
    ifs.open("partfolio_name.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "��ȡ���ļ�������" << endl;
	}
	//4.��read������ȡ�ļ�
	person p;//����һ��person��Ķ���p;
	ifs.read((char*) &p, sizeof(p));

	cout << "����Ϊ" << p.m_name << "  " << "����Ϊ" << p.age << endl;
	/*char BR[1024]={0};
	while (ifs.getline(BR, 1024))
	{
		cout << BR << endl;
	}*/

	//5.close���ļ�
	ifs.close();	
}

int main()
{
	test();
	system("pause");
	return 0;
}

