#include<iostream>
using namespace std;
#include<fstream>

//1.包含头文件

void test()
{
	//2.创建一个读取文件类ifsream的对象
	ifstream ifs;
	//3.打开文件并判断文件是否打开成功
	// 
	//3.1打开文件
	ifs.open("test.txt", ios::in);
	//3.2判断打开的文件是否存在 运用ifs.is_open()来判断
	if (!ifs.is_open())
	{
		cout << "当前文件名或文件地址错误" << endl;
	}
	//4.打开文件方式

	char BR[1024]={0};
	while (ifs.getline(BR, 1024))
	{
		cout << BR <<endl;
	}
	//5.打开文件结束
	ifs.close();
}

int main()
{
	test();
	system("pause");
	return 0;
}
