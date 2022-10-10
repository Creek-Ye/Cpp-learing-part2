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
	//二进制文件的读取
	//1.包含头文件
	//2.创建一个ifstream的对象
		ifstream ifs;
	//3.open对象
    ifs.open("partfolio_name.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "读取的文件不存在" << endl;
	}
	//4.用read函数读取文件
	person p;//创建一个person类的对象p;
	ifs.read((char*) &p, sizeof(p));

	cout << "姓名为" << p.m_name << "  " << "年龄为" << p.age << endl;
	/*char BR[1024]={0};
	while (ifs.getline(BR, 1024))
	{
		cout << BR << endl;
	}*/

	//5.close掉文件
	ifs.close();	
}

int main()
{
	test();
	system("pause");
	return 0;
}

