//#include <iostream>
//using namespace std;
//
////若类中出现纯虚函数，则将该类称为抽象类
////建立动物(父类)
//class animal
//{
//public:
//	//virtual void speak()//建立一个称为说话的函数(虚函数)
//	//{
//	//	cout << "动物在说话" << endl;
//	//}
//	virtual void speak() = 0;//这就是纯虚函数
//	//纯虚函数和虚函数的区别
//	//该类无法实例化对象，例如animal ani;
//	//子类必须重写父类的纯虚函数，否则子类也为抽象类
//};
////建立猫类(子类)
//class Cat : public animal
//{
//public:
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
//void test01()
//{
//	animal* ani = new Dog;
//	ani->speak();
//	delete ani;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}