#include <iostream>
using namespace std;

//函数类表中的形参是可以有默认值的
//语法:返回值类型 函数名 (参数 默认值){}
int func(int a=10, int b=10, int c=10)
{
	return a + b + c;
}

//注意事项:
//1.若某个参数之前有默认值，那么从这个位置往后，从左向右，必须都有默认值，案例如下
//int func2(int a = 20, int b, int c)
//{
//	return a + b + c;
//}
//2.若函数声明有默认值，函数实现的时候就不能有默认参数
//int func3(int a = 10, int b = 20, int c = 30);
//int func3(int a = 10, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
void test01()
{
	func(10, 10, 10);
	//func2(10, 20, 30);
	//func3();
	cout << func(10, 10, 10) << endl;
}

//占位参数的语法
//返回值类型 函数名(数据类型){}
//占位参数可以有默认值
//int fanc(int a, int = 10)
//{
//	cout << "this is func" << endl;
//}
void test02()
{
	//fanc(10);
}

void fbnc()
{
	cout << "这就是func" << endl;
}
void fbnc(int a)
{
	cout << "这就是func(int a)" << endl;
}
//错误:函数的返回值类型并不能作为函数重载的条件
//int fbnc(int a)
//{
//	cout << "这就是func(int a)" << endl;
//}
void test03()
{
	//函数重载的作用是函数名相同，提高复用率
	//函数重载的条件:
	//同一个作用域下，函数名称相同，函数参数类型不同或者个数不同或者顺序不同
	fbnc();
	fbnc(10);
	
}
//int main()
//{
	//test01();//函数的默认参数
	//test02();//函数的占位参数
//	test03();//函数重载
//	system("pause");
//	return 0;
//}