//#include<iostream>
//using namespace std;
//
//const double PI = 3.14;
////封装的语法
//class circle 
//{
//	//访问权限
//	//1.公共权限 public 是类内和类外都可以访问的
//	//2.保护权限 protected 是类内可以访问，但是类外不能访问
//	//3.私有权限 private 是类内可以访问，但是类外无法访问
//public:
//	//属性
//	int rad;
//	//行为
//	double per()
//	{
//		return 2 * PI * rad;
//	}
//};
//
//class person 
//{
//	//访问权限
////1.公共权限 public 是类内和类外都可以访问的
//public:
//	string p_name;
////2.保护权限 protected 是类内可以访问，但是类外不能访问，继承的时候是能够访问
//protected:
//	string m_car;
////3.私有权限 private 是类内可以访问，但是类外无法访问，继承不能够访问
//private:
//	int bank_num;
//
//	//行为
//public:
//	void setperson()
//	{
//		p_name = "zhangsan";
//		m_car = "轿车";
//		bank_num = 12315646;
//	}
//};
//int main()
//{
//	circle c1;
//	c1.rad  = 20;
//	cout << "圆的周长为: " << c1.per() << endl;
//
//	person p1;
//	p1.p_name = "李四";
//	//p1.m_car = "奔驰";//会报错
//
//	system("pause");
//	return 0;
//}