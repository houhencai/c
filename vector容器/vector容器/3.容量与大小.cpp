#include<iostream>
using namespace std;
#include<vector>

//vector容量和大小的操作

//函数原型
//empty();                        //判断容器是否为空
//capacity();                    //计算容器的容量
//size();                        //计算容量已用的容量
//resize(int num);               //重新指定容器的长度为num，若容器变长，则以默认值填充剩余位置
//                               //若变小，则将超出部分删除
//resize(int num,elem);        //重新指定容器的长度为num，若容器变长，则以elem填充剩余位置
//                             //若变小，则将超出部分删除
 


 
// void printvector(vector<int>v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
// void test01()
// {
//	 vector<int>v;
//	 for (int i = 0; i < 10; i++)
//	 {
//		 v.push_back(i);
//	 }
//	 cout << v.empty() << endl;
//	 if (v.empty())
//	 {
//		 cout << "v是空的" << endl;//空为1
//	 }
//	 else
//	 {
//		 cout << "v不为空" << endl;//不空为0
//	 }
//
//	 cout << v.capacity() << endl; 
//	 cout << v.size() << endl;
//
//
//	 v.resize(20);//默认值为0
//	 printvector(v);
//
//	 v.resize(5);
//	 printvector(v);
//
//	 v.resize(10,'c');
//	 printvector(v);
//
// }
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}