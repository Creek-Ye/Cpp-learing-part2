#include<iostream>
using namespace std;
#include<fstream>

//1.����ͷ�ļ�

void test()
{
	//2.����һ����ȡ�ļ���ifsream�Ķ���
	ifstream ifs;
	//3.���ļ����ж��ļ��Ƿ�򿪳ɹ�
	// 
	//3.1���ļ�
	ifs.open("test.txt", ios::in);
	//3.2�жϴ򿪵��ļ��Ƿ���� ����ifs.is_open()���ж�
	if (!ifs.is_open())
	{
		cout << "��ǰ�ļ������ļ���ַ����" << endl;
	}
	//4.���ļ���ʽ

	char BR[1024]={0};
	while (ifs.getline(BR, 1024))
	{
		cout << BR <<endl;
	}
	//5.���ļ�����
	ifs.close();
}

int main()
{
	test();
	system("pause");
	return 0;
}
