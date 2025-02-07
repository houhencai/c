#include<iostream>
using namespace std;
#include<vector>

//给vector赋值

//函数原型
//vector& operator=(const vector &vec);              //重载等号操作符
//assgin(beg,end);                                   //将[beg,end)区间中的数据拷贝赋值给本身
//assgin(n,elem)                                     //将n个elem赋值给本身

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
//	//1.
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>v1;
//	v1 = v;
//	printvector(v);
//	printvector(v1);
//
//	vector<int>v2;
//	v2.assign(v1.begin(), v1.end());
//	printvector(v1);
//
//	vector<int>v3;
//	v3.assign(10, 100);
//	printvector(v3);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}