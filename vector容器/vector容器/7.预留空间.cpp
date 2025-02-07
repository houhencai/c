#include<iostream>
using namespace std;
#include<vector>

//vector预留空间
//减少vector在动态扩展容量时的扩展次数

//函数原型
//reserve(int len);       //容器预留len个元素长度，预留的位置不初始化，元素不可访问

void test01()
{
	vector<int>v1;
	int num = 0;
	int* p = NULL;
	v1.reserve(1000000);
	for (int i = 0; i < 1000000; i++)
	{
		v1.push_back(i);
		if ( p != &v1[0])
		{
			p = &v1[0];
			num++;
		}
	}
	cout << num << endl;
	//代码解释:p=v1&[0]，如果p!=&v1[0]的话，p=&v1[0]
	//由于大小等于容量又要添加新的数据，所以要开辟一个新的内存空间，
	// 将原有得知数据都复制到新的内存空间中，指向原来空间的p就会失效
	//当预留出1000000的空间时，扩展次数就为1
}
int main()
{
	test01();
	system("pause");
	return 0;
}