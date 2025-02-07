#include<iostream>
using namespace std;
//建一个抽象类的父类
class calculate
{
public:
	calculate()
	{
		m_num1 = 0;
		m_num2 = 0;
	}
	virtual int ca()
	{
		return 0;
	}
	int m_num1;
	int m_num2;
};

//建立加法
class Add :public calculate
{
public:
	int ca()
	{
		return m_num1 - m_num2;
	}
};
//建立减法
class Sub :public calculate
{
public:
	int sub()
	{
		return m_num1 - m_num2;
	}
};

//建立乘法
class Mul :public calculate
{
public:
	int ca()
	{
		return m_num1 * m_num2;
	}
};
//这是利用指针的方式执行计算过程
void ca(calculate &calu)
{
	int num = calu.ca();
	cout << "计算结果是" << num << endl;
}
//多态是父类指针或引用到子类对象
//void test01()
//{
//	Mul mul;
//	Sub sub;
//	sub.m_num1 = 10;
//	sub.m_num2 = 10;
//	ca(sub);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}