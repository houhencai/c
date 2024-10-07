#include<iostream>
using namespace std;
//初始化列表
class person
{
public:
	//原来赋初值操作
	//person(int a, int b, int c)
	//{
	//	m_a = a;
	//	m_b = b;
	//	m_c = c;
	//}

	//初始化赋值
	//语法 构造函数():属性1(值),属性2(值)   {}
	//person() :m_a(10), m_b(20), m_c(30)
	//{
	//}
	//本题如下
	person(int a,int b,int c) :m_a(a), m_b(b), m_c(c)
	{
	}
	int m_a;
	int m_b;
	int m_c;
};
void test01()
{
	person p(10, 20, 30);
	cout << p.m_a << endl;
	cout << p.m_b << endl;
	cout << p.m_c << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}