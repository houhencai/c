#include<iostream>
using namespace std;
#include<vector>
//函数对象概念
//重载函数调用操作符的类，其对象称为函数对象
//函数对象使用重载的()时，行为类似函数调用，也叫仿函数

//本质是：函数对象(仿函数)是一个类，不是一个函数

//函数对象的使用
//特点：
//函数对象在使用的时候，可以像普通函数那样调用，可以有参数，可以有返回值
//函数对象超出普通函数的概念，函数对象可以有自己的状态
//函数对象可以作为参数传递

//class myadd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
////函数对象在使用的时候，可以像普通函数那样调用，可以有参数，可以有返回值
//void test01()
//{
//	myadd ma;
//	cout << ma(10, 20) << endl;
//}
////函数对象超出普通函数的概念，函数对象可以有自己的状态
//class myprint
//{
//public:
//	myprint()
//	{
//		this->num = 0;
//	}
//	void operator()(string text)
//	{
//		cout << text << endl;
//		num++;
//	}
//	int num;
//};
//void test02()
//{
//	myprint mp;
//	mp("hello world");
//	cout << mp.num << endl;
//}
////函数对象可以作为参数传递
//void doprint(myprint& mp1, string text)
//{
//	mp1(text);
//}
//void test03()
//{
//	myprint mp1;
//	doprint(mp1, "Come on Chelsea");
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}