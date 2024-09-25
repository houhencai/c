#include<iostream>
using namespace std;
#include<string>
int main()
{
	//一维数组
	//一个集合中存放相同类型的数据元素
	//定义方式:1.数据类型 数组名[数组长度];
	//         2.数据类型 数组名[数组长度] = { 值1,值2 };
	//         3.数据类型 数组名[] = { 值1,值2 };
	//定义数组
	//int arr[5];
	//对数组进行赋值
	//arr[0] = 10;//数组是从0开始索引的
	//arr[1] = 20;
	//arr[2] = 30;
	//arr[3] = 40;
	//arr[4] = 50;
	//数组类型 数组名[数组长度]={值1，值2};
	//int arr[5] = { 0,1,2,3,4 };
	//cout << arr[0] << endl;
	//cout << arr[1] << endl;
	//cout << arr[2] << endl;
	//cout << arr[3] << endl;
	//cout << arr[4] << endl;
	//由于上面的重复性很高，可以使用循环结构来进行输出
	/*int i = 0;
	for (i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}*/
	//数组数据 数组名[]={值1，值2};
	//int arr[] = { 1,2,5,6,4,3 };
	//int i = 0;
	//for (i = 0; i < 5; i++)
	//{
	//	cout << arr[i] << endl;
	//}

	//一维数组名称的用途:
	//int arr[] = { 2,4,5,6,7,6 };
	//1.可以统计整个数组在内存中的长度 sizeof(arr)
	//cout << sizeof(arr) << endl;
	//2.可以获取数组在内存中的首地址  cout<<arr<<endl;
	//cout << arr << endl;
	//cout << arr[0] << endl;
	//数组名是常量，不能赋值

	//数组案例—五只小猪称体重
	//一个数组中记录了五只小猪的体重，找出并打印了最重的小猪体重
	//int arr[5] = { 300,350,200,400,250 };
	//int max = arr[0];
	//for (int i = 1; i < 5; i++)
	//{
	//	//if (arr[i] > max)
	//	//{
	//	//	max = arr[i];
	//	//}
	//	(arr[i] > max)?arr[i] : max;
	//}
	//cout << max << endl;


	//数组案例-字符逆序
	//int arr[] = { 1,3,2,5,4 };
	//int len = sizeof(arr) / sizeof(arr[0]) - 1;
	//int i = 0;
	//while (i != len)
	//{
	//	int tem = arr[i];
	//	arr[i] = arr[len];
	//	arr[len] = tem;
	//	i++;
	//	len--;
	//}
	//for (i = 0; i < 5; i++)
	//{
	//	cout << arr[i] << endl;
	//}

	//冒泡排序
	//对数组内的元素进行排序
	//int arr[] = { 4,2,8,0,5,7,1,3,9 };
	//int len = sizeof(arr) / sizeof(arr[0])-1;
	//int i = 0;
	//1.比较相邻的元素。如果第一个比第二个大，就交换他们两个。
	//2.对每一对相邻的元素进行相同的工作，执行完毕之后，找到第一个最大值
	//3.重复以上的步骤，每次比较次数-1，直到不需要比较
	//for (i = 0; i <= len; i++)
	//{
	//	int j = 0;
	//	for (j = 0;j<len-i;j++)
	//	{
	//		if (arr[j] > arr[j + 1])
	//		{
	//			int tem = arr[j];
	//			arr[j] = arr[j+1];
	//			arr[j + 1] = tem;
	//		}
	//	}
	//}
	//for (i = 0; i <= len; i++)
	//{
	//	cout << arr[i] << endl;
	//}
	//是要把大的往后走

	//二维数组
	//二维数组的四种定义方式:
	//1.数组类型 数组名[行数][列数];
	//int arr1[2][3];
	//2.数组类型 数组名[行数][列数]={{数据1,数据2}，{数据3,数据4}};
	//int arr2[2][3] = { {1,2,3},{4,5,6} };
	//3.数组类型 数组名[行数][列数]={数据1,数据2,数据3,数据4};
	//int arr3[2][3] = { 1,2,3,4,5,6 };
	//4.数组类型 数组名[][列数]={数据1,数据2,数据3,数据4};
	//int arr4[][3] = { 1,2,3,4,5,6 };
	//建议:以上四种定义方式推荐2
	//二维数组的输出方式
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << arr2[i][j] << endl;
	//	}
	//}

	//二维数组的数组名
	//int arr[2][3];
	// 1.可以查看占用内存空间的大小
	//cout << "arr内存空间的大小是：" << sizeof(arr) << endl;
	//cout << "arr第一行占用内存是：" << sizeof(arr[0]) << endl;
	//cout << "arr第一个元素占用内存是：" << sizeof(arr[0][0]) << endl;

	/*cout << "二维数组的行数是：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组的列数是：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;*/
	//2.可以查看二维数组的首元素的地址
	//cout << "arr首元素的地址是：" << arr << endl;
	//cout << "arr第一行首地址是：" << arr[0] << endl;
	//cout << "arr第二行首地址是：" << arr[1] << endl;

	//cout << "arr第一个元素的首地址：" << &arr[0][0] << endl;
	//cout << "arr第二个元素的首地址：" << &arr[0][1] << endl;

	//二维数组案例-考试成绩统计
	//有三名同学(张三，李四，王五),在一次考试中的成绩分别如下表，请分别输出三名同学的总成绩
	int scores[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,80,60},
	};
	string names[] = { "张三","李四","王五" };//需要添加头文件
	for (int i = 0; i < 3; i++)
	{
		int score = 0;
		for (int j = 0; j < 3; j++)
		{

			score += scores[i][j];
		}
		cout << names[i]<< "的成绩是" << score << " ";
		cout << endl;
	}


	system("pause");
	return 0;
}
