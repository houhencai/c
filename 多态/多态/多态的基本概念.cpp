#include <iostream>
using namespace std;
//多态分为两类：
//静态多态类:函数重载和运算符重载，复用函数名
//动态多态类:派生类和虚函数实现运行时多态

//静态多态和动态多态的区别:
//静态多态的函数地址早绑定 - 编译阶段确定函数的地址
//动态多态的函数地址晚绑定 - 运行阶段确定函数的地址
//建立动物(父类)
//class animal
//{
//public:
//	//void speak()//建立一个称为说话的函数
//	virtual void speak()//建立一个称为说话的函数(虚函数)
//	{
//		cout << "动物在说话" << endl;
//	}
//};
////建立猫类(子类)
//class Cat : public animal
//{
//public:
//	//重写:函数返回值类型 函数名 参数列表 完全一致称为重写
//	void speak()
//	{
//		cout << "猫在说话" << endl;
//	}
//};
////建立狗类（子类）
//class Dog : public animal
//{
//public:
//	void speak()
//	{
//		cout << "狗在说话" << endl;
//	}
//};
//void dospeak(animal& ani)//建立执行说话的函数
//{
//	ani.speak();
//}
//动态多态满足条件:
//1.有继承关系
//2.子类重写父类的虚函数

//动态多态使用
//父类的指针或者引用 执行子类对象
//void test01()
//{
//	Cat cat;
//	Dog dog;
//	dospeak(cat);
	//由于dospeak函数的参数指定为animal类的speak函数
	//所以无论给的参数是cat还是dog都是执行animal类的函数
	//这是在编译阶段就已经确定的

	//若想输出猫类的speak函数，需要在animal类的speak函数之前，加上virtual
	//表示这个函数是一个虚函数，结果就是实现了 猫在说话
	//虚函数的作用是为了实现一个接口，起到一个规范的作用，规范继承这个类的程序员必须实现这个函数。
//}

//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
