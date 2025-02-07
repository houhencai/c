#include<iostream>
using namespace std;
//建立饮品抽象类
class drink
{
public:
	void work()
	{
		heat();
		brew();
		pour();
		add();
	}
	//煮水
	virtual void heat() = 0;
	//冲泡
	virtual void brew() = 0;
	//导入杯中
	virtual void pour() = 0;
	//添加辅料
	virtual void add() = 0;
};

//建立咖啡
class coffee :public drink
{
public:
	void heat()
	{
		cout << "水已经开了" << endl;
	}
	void brew()
	{
		cout << "coffee已经冲泡" << endl;
	}
	void pour()
	{
		cout << "已经将coffee倒入杯中" << endl;
	}
	void add()
	{
		cout << "coffee中加了糖" << endl;
	}
};
//建立茶
class tea :public drink
{
public:
	void heat()
	{
		cout << "水已经开了" << endl;
	}
	void brew()
	{
		cout << "茶已经冲泡" << endl;
	}
	void pour()
	{
		cout << "已经将茶倒入杯中" << endl;
	}
	void add()
	{
		cout << "茶中加了柠檬" << endl;
	}
};
////使用引用的方法
//void test01()
//{
//	//制作茶
//	drink* d = new tea;
//	d->work();
//	delete d;
//
//	cout << "-------------------------" << endl;
//
//	//制作咖啡
//	drink* d1 = new coffee;
//	d1->work();
//	delete d1;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}