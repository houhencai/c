#include <iostream>
using namespace std;

//void swap01(int a, int b);
//int main()
//{
	//1.指针的定义
	//int a = 10;
	//int b = 20;
	//定义指针的语法是数据类型 * 指针变量名
	//int* p;
	//p = &a;
	//cout << "a的地址是 " << &a << endl;
	//cout << "a的地址是 " << p << endl;
	//使用指针
	//通过解引用的操作找到指针指向的内存
	//在指针前加上*代表是解引用，找到指针指向的内存区域
	//*p = 100;
	//cout << "a = " << a << endl;
	//cout << "a = " << *p << endl;

	//指针所占的内存空间
	//int a = 10;
	//int* p = &a;
	//cout << "sizeof(int*)= " << sizeof(int*) << endl;
	//cout << "sizeof(float*)= " << sizeof(float*) << endl;
	//cout << "sizeof(double*)= " << sizeof(double*) << endl;
	//cout << "sizeof(char*)= " << sizeof(char*) << endl;
	//指针所占的内存空间与数据类型无关，与系统的位数相关

	//空指针
	//空指针是指指针变量指向内存编号为0的区域
	//用途是初始化指针变量
	//空指针指向的内存是不可以访问的
	//int* p = NULL;
	//内存编号为0~255为系统占用内存，不允许用户访问，会导致取消访问
	//cout << *p << endl;

	//野指针
	//指针变量指向非法的内存空间
	//int* p = (int*)0x1100;
	//访问野指针会失败
	//cout << *p << endl;
	//野指针和空指针都不是我们申请的空间，因此不要访问

	//const修饰指针
	//1.const修饰指针 — const int * p= &a;
	//指针指向可以改变，但是指针指向的值不能改变
	//const int* p1 = &a;
	//p = &b;//改变指针的指向，是正确的操作
	//*p = 20;//改变指针的值，是错误的操作
	//2.const修饰常量——int * const p=&a;
	//指针的指向不会改变，指针指向的值可以改变
	//int* const p2 = &a;
	//p = &b;//错误
	//*p = 20;//正确
	//const修饰指针和常量
	//const int* const p = &a;
	//p = &b;//错误
	//*p = 20;//错误
	//记忆的要点:看const修饰的是什么,若const修饰的是int *，只能改变指针指向，若const修饰的是p，只能改变值

	//指针和数组
	//利用指针访问数组中的元素
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	//int* p = arr;
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << *p << endl;
	//	p++;//每次+4
	//}

	//指针与函数

	//地址传递
	

//	swap01(a, b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	system("pause");
//	return 0;
//}
//void swap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}