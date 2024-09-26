#include <iostream>
using namespace std;
void test01()
{
	//引用的基本语法
	//作用是给变量起别名
	//语法是:数据类型 &别名 = 原名
	int a = 10;
	int& b = a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	b = 12;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
void test02()
{
	int a = 10;
	int& b = a;
	//1.引用必须初始化
	//int& b;//这是错误的引用操作
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//2.引用在初始化后，不可以改变
	int c = 20;
	b = c;//这是一个赋值操作，不是更改引用
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}
void swap01(int& a,int & b)//引用传参
{
	int temp = a;
	a = b;
	b = temp;
}
void test03()
{
	//引用做函数参数
	//作用:函数传参时，可以利用引用的技术让形参修饰实参
	//优点:可以简化指针修改实参
	int a = 10;
	int b = 20;
	swap01(a,b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
int& ide()
{
	int a = 10;//a是局部变量，存放在栈区
	return a;
}
int& idea()
{
	static int a = 10;
	return a;
}
void test04()
{
	//引用是可以作为函数的返回值存在的
	//注意:不要返回局部变量引用
	int& ref = ide();
	cout << "a=" << ref << endl;
	cout << "a=" << ref << endl;
	//函数调用作为左值
	int& b = idea();
	idea() = 200;
	cout << "a=" << b << endl;
	cout << "a=" << b << endl;
}
void test05()
{
	//引用的本质就是指针常量，但是所有的指针操作编译器都帮我们做了
	int a = 10;
	int b = 20;
	int& ref = a;
	//会自动转化为int* const ref = &a; 指针常量是指针指向不可更改，也说明为什么引用不可更改
	ref = 20;//内部发现ref是引用，自动帮我们转换为*ref=a;
	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl;
}
void showvalue(const int& val)//若不加const，val的值容易被改变
{
	////val = 1000;
	cout << "val=" << val << endl;
}
void test06()
{
	int a = 10;
	//int& ref = 10;//这是错误的，引用需要有一块内存空间
	const int& ref = 10;//这相当于int temp=10; int& ref=temp;

	showvalue(a);
	cout << "a=" << a << endl;
}
int main()
{
	//test01();//引用的基本语法
	//test02();//引用的注意事项
	//test03();//引用做函数参数
	//test04();//引用作函数的返回值
	//test05();//引用的本质
	//test06();//常量引用
	system("pause");
	return 0;
}
//笔记若有问题，可进行指正
//If there is any problem with the notes, you can correct them