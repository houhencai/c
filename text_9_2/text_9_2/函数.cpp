#include<iostream>
using namespace std;
#include "swap.h"

//定义的加法函数
//在函数定义时，num1和num2并不是真正的数据，而是一个形式上的参数，简称形参
//int add(int num1, int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}

//如果你的函数是不需要返回值的时候，声明的时候可以写void
//void swap(int num1, int num2)
//{
//	cout << "a=" << num1 << endl;
//	cout << "b=" << num2 << endl;
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//	cout << "a=" << num1 << endl;
//	cout << "b=" << num2 << endl;
//	return;
//}

//函数的常见样式
//1.无参无返
void test01()
{
	cout << "你好" << endl;
}
//2.有参无返
void test02(int num1)
{
	cout << "数值大小为: " << num1<<endl;
}
//3.无参有返
int test03()
{
	int a = 10;
	return a;
}
//4.有参有返
int test04(int num1)
{
	int num2 = num1 / 10;
	return num2;
}

//函数的声明
//告诉编译器，后面有这样一个函数
//int add(int num1,int num2);

//函数的分文件编写
//步骤:1.创建.h后缀名的头文件
//2.创建.cpp后缀名的源文件
//3.在头文件中写函数的声明
//4.在源文件中写函数的定义
int main()
{
	//函数的定义
	//将一段经常使用的代码封装起来，减少重复代码
	//函数的结构
	//返回值类型 函数名(参数列表)
	//{
	//	函数体;
	//	return 表达式;
	//}	
	//int num1 = 5;
	//int num2 = 8;
	//int sum = add(num1, num2);
	//这里的num1和num2就是实际参数，简称实参
	//cout << sum << endl;
	//函数的调用
	//函数名(参数),例如:add(num1.num2)

	//值传递
	//函数调用时实参将数值传给形参
	//值传递的时候，如果形参发生改变，并不会影响实参
	//int a = 10;
	//int b = 20;
	//cout << "a=" << a << endl;
	//cout << "b=" << b << endl;
	//swap(a, b);
	//cout << "a=" << a << endl;
	//cout << "b=" << b << endl;
	//说明在值传递过程中，形参发生变化，都不会影响实参的值

	//函数的常见样式
	//1.无参无返的函数调用
	test01();
	//2.有参无返的函数调用
	test02(100);
	//3.无参有返的函数调用
	int a = test03();
	cout << "a= " << a << endl;
	//4.有参有返的函数调用
	int b = test04(1000);
	cout << "b= " << b << endl;

	int num = add(10, 20);
	cout << "num = " << num << endl;
	system("pause");
	return 0;
}
//int add(int num1, int num2)
//{
//	int num = num1 + num2;
//	return num;
//}