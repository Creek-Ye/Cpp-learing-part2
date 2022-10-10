#include<iostream>
using namespace std;
void dim_arr(int(*array)[5],int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << array[i][j] << "  ";
		}
		cout << endl;
	}
}
int main()
{
	int array[2][5] =
	{
		{1,2,3,4,50},
		{5,6,7,9,60}
	};
	int len = sizeof(array) / sizeof(array[0]);
	dim_arr(array, len);

	system("pause");
	return 0;
}