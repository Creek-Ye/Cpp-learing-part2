#include<iostream>
using namespace std;
#include<fstream>
#define FILENAME "save_document"

void read()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	char ch[1024];
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
	}
	while (ifs.getline(ch, 1024))
	{
		cout << ch << endl;
	}
	ifs.close();



}

int main()
{
	read();
	system("pause");
	return 0;
}