#include<iostream>
using namespace std;
#include<string>
int main()
{
	char ch1[1024];
	char ch2[1024];
	cin.get(ch1, 1024);
	//cin.get();
	cin.get(ch2, 1024);
	cout << ch1 << endl;
	cout << ch2 << endl;

	system("pause");
	return 0;
}