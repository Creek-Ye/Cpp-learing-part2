#include<iostream>
using namespace std;
//c++要对文件编写的话要包含头文件
#include<fstream>

//文件的三大类
//fstream：读写文件的类
//ofstream：写文件的类
//ifstream：读文件的类


//写文件的五大步骤
//1.包含头文件。include<fstream>
//2.写一个文件类的对象 ofstream ofs；
//3.打开该对象 ofs.open("文件路径"，打开方式)
//4.写入你想写入该文件的内容 ofs<<"............"<<endl;
//5.关闭文件 ofs.close

//文件的打开方式
//1 ios::in 为读文件而打开该文件
//2 ios::out 为写文件而打开该文件
//3 ios::trunc 如果文件存在先删除，再创建
//4 ios::binary 二进制方式
void test01()
{
	ofstream ofs;//创建一个写入文件类的对象 ofs

	ofs.open("test.txt", ios::out);//文件路径（文件名称）和打开方式

	//输入想要向文件里写入的内容
	ofs << "姓名：张三" << endl;
	ofs << "年龄：18" << endl;

	//关闭文件对象
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}


