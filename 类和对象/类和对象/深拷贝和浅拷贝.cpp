//#include <iostream>
//using namespace std;
////深拷贝和浅拷贝
////浅拷贝就是
//class person
//{
//public:
//	person()
//	{
//		cout << "person 无参构造函数的调用" << endl;
//	}
//	person(int age, int height)
//	{
//		m_age = age;
//		m_height = new int(height);//为了和m_height对接将int类型的height转化为int*类型的height
//		cout << "perosn 有参构造函数的调用" << endl;
//	}
//	person(const person &p)
//	{
//		m_age = p.m_age;
//		//m_height = p.m_height;//这就是浅拷贝，
//		//但是浅拷贝只会对其的内存编号进行复制，但对其的值并没有改变(简单的复制拷贝工作)
//
//		m_height = new int(*p.m_height);//深拷贝就是在堆区创建一个自己的内存空间
//		cout << "person 拷贝构造函数的调用" << endl;
//	}
//	~person()
//	{
//		//由于堆区的数据需要有程序员自己释放
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		//会出现报错，是因为我创建了两个person的对象，这两个对象指向的内存空间都是相同的
//		//由程序先进后出原则，p2在析构函数中已经对m_height进行了内存释放
//		//但是p1也要对m_height进行内存释放，所以会报错。
//		//解决方法就是深拷贝
//		cout << "person 析构函数的调用" << endl;
//	}
//	int m_age;
//	int* m_height;
//};
//void test01()
//{
//	person p(18,160);
//	person p1(p);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}