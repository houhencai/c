//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	//姓名
//	void setname(string name)
//	{
//		m_name = name;
//	}
//	void showname()
//	{
//		cout << "我的名字是：" << m_name << endl;
//	}
//	//年龄
//	void showage()
//	{
//		cout << "我的年龄是：" << m_age << endl;
//	}
//	void setage(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "输入的年龄有错误" << endl;
//			return;
//		}
//		m_age = age;
//	}
//	//偶像
//	void setidol(string name)
//	{
//		m_idol = name;
//	}
//private:
//	string m_name;//姓名 可读可写
//	int m_age = 18;//年龄 只读 可写但是有范围0~150
//	string m_idol;//偶像 只写
//};
//
//int main()
//{
//	person p1;
//	p1.setname("李四");
//	p1.showname();
//	p1.setage(160);
//	p1.showage();
//	p1.setidol("wangwu");
//	system("pause");
//	return 0;
//}