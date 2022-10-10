#include<iostream>
using namespace std;
#include<fstream>
//创建一个类
class person
{	
public:
	char m_name[64];//用字符型数组的方式来定义字符串
	
	int age;
	
};

void test()
{
	//1.包含头文件

//2.创建一个文件类的对象,写入文件的类为ofstream(输出流类)
	ofstream ofs;

	//3.打开文件
	ofs.open("partfolio_name.txt", ios::out | ios::binary);

	//4.往文件内写入内容
	
	person p={"张三",31};//这里把person p看成是一个结构体的变量p的赋值方式
	ofs.write((const char*)& p, sizeof(p));
	//5.结束写文件
}
int main()
{
	test();
	system("pause");
	return 0;
}

