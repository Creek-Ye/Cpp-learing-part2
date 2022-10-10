#include<iostream>
using namespace std;
#include<fstream>
#define FILENAME "save_document"

void save()
{
	ofstream ofs;
	ofs.open(FILENAME,ios::out);
	ofs << "ÐÕÃû" << "  " << "Ò¶ÐÀ" << "  "
		<< "ÄêÁä" << "  " << "19";
	ofs.close();
		
}

int main()
{
	save();
	system("pause");
	return 0;
}