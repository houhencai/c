#include <iostream>
using namespace std;

void func(int& a)//int& a是int类型，不能直接等于10
{
	cout << "这是func(int& a)的调用" << endl;
}
void func(const int& a)//const int &a是常量，所以可以等于10
{
	cout << "这是func(const int& a)的调用" << endl;
}

void func2(int a, int b = 20)
{
	cout << "这是func2(int a, int b = 20)的调用" << endl;
}
void func2(int a)
{
	cout << "这是func2(int a)的调用" << endl;
}
int main()
{
	//函数重载的注意事项
	//1.引用作为重载条件
	func(10);
	//2.函数重载碰到函数默认参数
	func2(10);//函数形参有默认值时，相当于只有一个形参，所以两个func2重复了，若func2有两个参数，则不会有这样的问题
	system("pause");
	return 0;
}


