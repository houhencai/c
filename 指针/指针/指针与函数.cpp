//#include<iostream>
//using namespace std;
//void swap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void swap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void bubblesort(int arr[], int len)
//{
//	for (int i = len; i > 0; i--)
//	{
//		int j = 0;
//		for (j = 0; j < i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
	//值传递
	//swap01(a, b);
	//cout << "a= " << a << endl;
	//cout << "b= " << b << endl;
	//地址传递
	//地址传递能够改变实参，但是值传递不能
	//swap02(&a, &b);
	//cout << "a= " << a << endl;
	//cout << "b= " << b << endl;

	//指针，数组，函数使用案例
	//封装一个函数，利用冒泡排序，实现对整型数组的升序排列
//	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubblesort(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	system("pause");
//	return 0;
//}