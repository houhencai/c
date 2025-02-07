#include<iostream>
using namespace std;
#include<vector>

//互换容器
//实现两个容器内元素的互换

//函数原型
//swap(vec)         //将vec与本身元素进行互换

////void printvector(vector<int>v)
////{
////	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
////	{
////		cout << *it << " ";
////	}
////	cout << endl;
////}
////
////void test01()
////{
////	vector<int>v1;
////	for (int i = 0; i < 10; i++)
////	{
////		v1.push_back(i);
////	}
////
////	vector<int>v2;
////	for (int i = 10; i > 0; i--)
////	{
////		v2.push_back(i);
////	}
////	v1.swap(v2);
////	printvector(v1);
////	printvector(v2);
////}
////
//////实用功能
////void test02()
////{
////	vector<int>v3;
////	for (int i = 0; i < 1000000; i++)
////	{
////		v3.push_back(i);
////	}
////
////	cout << v3.capacity() << endl;
////	cout << v3.size() << endl;
////
////	v3.resize(3);
////	cout<< v3.capacity() << endl;
////	cout << v3.size() << endl;
////
////	vector<int>(v3).swap(v3);
////	cout << vector<int>(v3).capacity() << endl;
////	cout << vector<int>(v3).size() << endl;
////	//cout << v3.capacity() << endl;
////	//cout << v3.size() << endl;
////	//vector<int>(v3)是一个匿名对象，容量为3，大小也为3
////	//该匿名对象和v3进行容器的交换，v3就变为容量为3，大小也为3
////	//匿名对象在编译结束后，自动被删除，节省了内存空间
////}
////int main()
////{
////	//test01();
////	test02();
////	system("pause");
////	return 0;
//}