#include<iostream>
using namespace std;
class animal
{
public:
	animal()
	{
		cout << "animal类的构造函数" << endl;
	}
	virtual void speak() = 0;
	//父类析构函数
	//~animal()
	//{
	//	cout << "animal类的析构函数" << endl;
	//}
	//虚析构函数
	//virtual ~animal() 
	// {	cout << "animal的虚析构函数" << endl;}
	virtual ~animal() = 0;//纯虚析构函数
	string* m_name;
};
//纯虚析构需要声明
animal::~animal()
{
	cout << "animal的纯虚析构函数" << endl;
}
class Dog :public animal
{
public:
	Dog(string name)
	{
		m_name = new string(name);
		cout << "狗类的构造函数" << endl;
	}
	void speak()
	{
		cout <<*m_name<< "狗在说话" << endl;
	}
	~Dog()
	{
		if (m_name != NULL)
		{
			delete m_name;
			m_name = NULL;
			cout << "狗类的析构函数" << endl;
		}
	}
};
//从运行结果来看:子类的析构函数并没有运行
//所以通过子类指针来释放，会导致子类对象可能会清理不干净，造成内存的泄露
//如何解决? 在父类中加入一个虚析构函数
//虚析构就是用来解决通过父类指针释放子类对象的
void test01()
{
	animal* ani = new Dog("tom");
	ani->speak();
	delete ani;
}
int main()
{
	test01();
	system("pause");
	return 0;
}