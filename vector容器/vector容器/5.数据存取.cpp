#include<iostream>
using namespace std;
#include<vector>

//vector数据存取

//函数原型
//at[int idx];               //返回索引idx所指的数据
//operator[];                //返回索引idx所指的数据
//frout();                   //返回容器中第一个数据元素
//back();                    //返回容器中最后一个数据元素

//void printvector(vector<int>v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << v1.at(5) << endl;
//	cout << v1[5] << endl;
//
//	cout << v1.front() << endl;
//	cout << v1.back() << endl;
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}