#include<iostream>
using namespace std;
//	//练习案例:设计立方体类
//	//设计立方体类(Cube)
//	//求出立方体的面积和体积
//	//分别用全局函数和成员函数判断两个立方体是否相等
//class Cube//立方体的类
//{
//public:
//	//void setlength(int length)//行为函数设置长
//	//{
//	//	C_length = length;
//	//}
//	//void setwide(int wide)//行为函数为设置宽
//	//{
//	//	C_wide = wide;
//	//}
//	//void settall(int tall)//行为函数为设置高
//	//{
//	//	C_tall = tall;
//	//}
//	//很冗长
//	void setnum(int length, int wide, int tall)
//	{
//		C_length = length;
//		C_wide = wide;
//		C_tall = tall;
//	}
//	int shownum1()
//	{
//		return C_length;
//	}
//	int shownum2()
//	{
//		return C_wide;
//	}
//	int shownum3()
//	{
//		return C_tall;
//	}
//	int area()//面积
//	{
//		return 2 * C_length * C_wide + 2 * C_length * C_tall + 2 * C_tall * C_wide;
//	}
//	int showvolume()//体积
//	{
//		int volume =C_length * C_wide * C_tall;//体积计算公式
//		return volume;
//	}
//	bool judge1(Cube c)
//	{
//		if (C_length == c.shownum1() && C_wide == c.shownum2() && C_tall == c.shownum3())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int C_length;//长
//	int C_wide;//宽
//	int C_tall;//高
//};
//
//bool judge(Cube c1, Cube c2)
//{
//	if (c1.shownum1() == c2.shownum1() && c1.shownum2() == c2.shownum2() && c1.shownum3() == c2.shownum3())
//	{
//		return true;
//	}
//	return false;
//}
//int main()
//{
//	Cube c1;
//	c1.setnum(10, 12, 15);
//
//	//设计立方体的全局函数
//	Cube c2;
//	c2.setnum(12, 13, 14);
//
//	bool ret = judge(c1, c2);
//	if (ret == true)//全局函数判断立方体是否相同
//	{
//		cout << "两个立方体是相同的" << endl;
//	}
//	cout << "两个立方体是不同的" << endl;
//	
//	if (c1.judge1(c2) == true)//行为函数判断立方体是否相同
//	{
//		cout << "两个立方体是相同的" << endl;
//	}
//	cout << "两个立方体是不同的" << endl;
//	
//	system("pause");
//	return 0;
//}

//练习案例2:点和圆的关系
//设计一个圆类，和一个点类，计算点和圆的关系

//class dot//点的类
//{
//public:
//	void set(int x, int y)//设置x和y
//	{
//		x2 = x;
//		y2 = y;
//	}
//	int showX2()//返回x和y
//	{
//		return x2;
//	}
//	int showY2()
//	{
//		return y2;
//	}
//private:
//	int x2;
//	int y2;
//};
//class circle//圆的类
//{
//public:
//	void set(int x,int y,int r)
//	{
//		center.set(x, y);
//		m_r = r;
//	}
//	//void set(int x,int y,int r)
//	//{
//	//	x1 = x;
//	//	y1 = y;
//	//	m_r = r;
//	//}
//	int showX1()
//	{
//		//return x1;
//		return center.showX2();
//	}
//	int showY1()
//	{
//		//return y1;
//		return center.showY2();
//	}
//	int showR()
//	{
//		return m_r;
//	}
//	
//private:
//	//int x1;
//	//int y1;
//	dot center;
//	int m_r;
//};
//
//
//void calculate(circle c1, dot d1)
//{
//	int distance = (c1.showX1() - d1.showX2()) * (c1.showX1() - d1.showX2()) + 
//		(c1.showY1() - d1.showY2()) * (c1.showY1() - d1.showY2());//计算圆心与点之间的距离
//	int r = c1.showR() * c1.showR();//r的大小
//	if (distance>r)//判断点和圆心的关系
//	{
//		cout << "点在圆外" << endl;
//	}
//	else if (distance==r)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else
//	{
//		cout << "点在圆里" << endl;
//	}
//}
//int main()
//{
//	circle c1;//创建c1对象
//	dot d1;//创建d1对象
//	c1.set(4, 6, 9);
//	d1.set(13, 6);
//
//	calculate(c1, d1);
//	system("pause");
//	return 0;
//}
//可以将点类直接用作是圆类中圆心的创建
//如现在代码所示，不包含注释所写