#include <iostream>
using namespace std;

void func(int& a)//int& a��int���ͣ�����ֱ�ӵ���10
{
	cout << "����func(int& a)�ĵ���" << endl;
}
void func(const int& a)//const int &a�ǳ��������Կ��Ե���10
{
	cout << "����func(const int& a)�ĵ���" << endl;
}

void func2(int a, int b = 20)
{
	cout << "����func2(int a, int b = 20)�ĵ���" << endl;
}
void func2(int a)
{
	cout << "����func2(int a)�ĵ���" << endl;
}
int main()
{
	//�������ص�ע������
	//1.������Ϊ��������
	func(10);
	//2.����������������Ĭ�ϲ���
	func2(10);//�����β���Ĭ��ֵʱ���൱��ֻ��һ���βΣ���������func2�ظ��ˣ���func2�������������򲻻�������������
	system("pause");
	return 0;
}


