#include<iostream>
using namespace std;
//c++Ҫ���ļ���д�Ļ�Ҫ����ͷ�ļ�
#include<fstream>

//�ļ���������
//fstream����д�ļ�����
//ofstream��д�ļ�����
//ifstream�����ļ�����


//д�ļ��������
//1.����ͷ�ļ���include<fstream>
//2.дһ���ļ���Ķ��� ofstream ofs��
//3.�򿪸ö��� ofs.open("�ļ�·��"���򿪷�ʽ)
//4.д������д����ļ������� ofs<<"............"<<endl;
//5.�ر��ļ� ofs.close

//�ļ��Ĵ򿪷�ʽ
//1 ios::in Ϊ���ļ����򿪸��ļ�
//2 ios::out Ϊд�ļ����򿪸��ļ�
//3 ios::trunc ����ļ�������ɾ�����ٴ���
//4 ios::binary �����Ʒ�ʽ
void test01()
{
	ofstream ofs;//����һ��д���ļ���Ķ��� ofs

	ofs.open("test.txt", ios::out);//�ļ�·�����ļ����ƣ��ʹ򿪷�ʽ

	//������Ҫ���ļ���д�������
	ofs << "����������" << endl;
	ofs << "���䣺18" << endl;

	//�ر��ļ�����
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}


