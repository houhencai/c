#include<iostream>
using namespace std;
#include<vector>

//vector基本概念
//功能:vector数据结构和数组非常相似，也称为单端数组

//vector与普通数组的区别
//不同之处在于数组是静态的，而vector可以动态扩展

//动态扩展:并不是在原空间之后续接新空间，而是找到更大的空间，然后将数据拷贝到新空间中，释放原空间

//v.begin()指向的是vector中的第一个元素，v.end()指向的是vector中的最后一个元素的后面一个位置

//vector容器的构造函数
//创建vector容器

//函数原型:
//vector<int>v;                     //采用模版实现类实现，默认构造函数
//vector(v.begin(),v.end());        //将v.begin()和v.end()区间中的元素拷贝给本身
//vector(n.elem);                   //构造函数将n个elem拷贝给自身
//vector(const vector &vec);        //拷贝构造函数

//void printvector(vector<int>v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	//1.
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	printvector(v);
//
//
//	//2.
//	vector<int>v1(v.begin(), v.end());
//	printvector(v1);
//
//	//3.
//	vector<int>v2(10, 100);
//	printvector(v2);
//
//	//4.
//	vector<int>v3(v2);
//	printvector(v3);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}