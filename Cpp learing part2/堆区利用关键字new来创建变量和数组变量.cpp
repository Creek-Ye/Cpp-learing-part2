#include<iostream>
using namespace std;
//利用new关键字在堆区创建一个局部变量
int* func1()
{
	int* p = new int(10);//new了一个变量10，new的本质是一个地址，所以需要创建一个指针变量p来接受这个地址，指针变量p存放在栈区，而变量10存在于堆区；
	return p;
}
void test1()
{
	int*p=func1();
	cout << *p << endl;
	cout << *p << endl;
	//delete p;利用delete关键字来删除堆区的局部变量；
	cout << *p << endl;
	
}
//利用new关键字在堆区创建一个数组
int* func2()
{
	int* array = new int[10];//new了一个具有10个元素的数组，new的本质是该数组首元素（也可认为是该数组的）的地址；
	for (int i = 0; i < 10; i++)//利用for循环对数组里的元素赋值
	{
		array[i] = i + 100;
	}
	return array;//把赋值好的数组以地址的方式返回出去
}

void test2()
{
	int*arr=func2();//定义一个指针变量arr来接受func2函数返回的数组地址
	for (int i = 0; i < 10; i++)//利用循环来打印出数组的每个元素
	{
		cout << *(arr) << endl;
		arr++;
	}
	//delete[]arr;利用delete关键字来删除堆区的用new关键字创建出的数组局部变量；

}
int main()
{
	test1();
	test2();
	system("pause");
	return 0;
}