#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//谓词概念：
//返回bool类型的仿函数称为谓词
//如果operator()接受一个参数，叫做一元谓词
//如果operator()接受两个参数，叫做二元谓词

//class mycompare
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//class mycompare1
//{
//public:
//	bool operator()(int val,int val2)
//	{
//		return val < val2;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(8);
//	v.push_back(6);
//	v.push_back(4);
//	v.push_back(2);
//	v.push_back(0);
//
//	vector<int>::iterator it=find_if(v.begin(), v.end(), mycompare());
//	if (it != v.end())
//	{
//		cout << "有大于5的数" << *it << endl;
//	}
//	else
//	{
//		cout << "没有大于5的数" << endl;
//	}
//
//}
//
//void test02()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(8);
//	v.push_back(6);
//	v.push_back(4);
//	v.push_back(2);
//	v.push_back(0);
//
//	sort(v.begin(), v.end(), mycompare1());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}