//#include<iostream>
//using namespace std;
////建CPU父类
//class CPU
//{
//public:
//	virtual void calculate() = 0;
//};
//
////建显卡父类
//class Videocard
//{
//public:
//	virtual void display() = 0;
//};
//
////建内存父类
//class Memory
//{
//public:
//	virtual void storage() = 0;
//};
//
////建立computer父类
//class computer
//{
//public:
//	void docomputer()
//	{
//		cpu->calculate();
//		vc->display();
//		mem->storage();
//	}
//	virtual~computer()
//	{
//		delete cpu;
//		cpu = NULL;
//		delete vc;
//		vc = NULL;
//		delete mem;
//		mem = NULL;
//	}
//private:
//	CPU * cpu;
//	Videocard* vc;
//	Memory* mem;
//};
////inter
//class inter :public computer
//{
//	void calculate()
//	{
//		cout << "inter计算开始" << endl;
//	}
//	void display()
//	{
//		cout << "inter已经显示" << endl;
//	}
//	void storage()
//	{
//		cout << "inter已经保存" << endl;
//	}
//};
//
////lenovo
//class lenovo :public computer
//{
//	void calculate()
//	{
//		cout << "lenovo计算开始" << endl;
//	}
//	void display()
//	{
//		cout << "lenovo已经显示" << endl;
//	}
//	void storage()
//	{
//		cout << "lenovo已经保存" << endl;
//	}
//};
//
//void acomputer(computer& com)
//{
//	com.docomputer();
//}
//void test01()
//{
//	inter in;
//	acomputer(in);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//错误原因：
//在 computer 类中，cpu、vc 和 mem 指针被声明但未初始化，直接使用它们调用成员函数会导致未定义行为。
//inter 和 lenovo 类继承自 computer，但它们错误地重写了 display 和 storage 函数，
//它们应该继承自 CPU、Videocard 和 Memory 的相应虚函数，而不是直接在 computer 的派生类中重写。