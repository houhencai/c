#include<iostream>
using namespace std;
#include "swap.h"

//����ļӷ�����
//�ں�������ʱ��num1��num2���������������ݣ�����һ����ʽ�ϵĲ���������β�
//int add(int num1, int num2)
//{
//	int sum = num1 + num2;
//	return sum;
//}

//�����ĺ����ǲ���Ҫ����ֵ��ʱ��������ʱ�����дvoid
//void swap(int num1, int num2)
//{
//	cout << "a=" << num1 << endl;
//	cout << "b=" << num2 << endl;
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//	cout << "a=" << num1 << endl;
//	cout << "b=" << num2 << endl;
//	return;
//}

//�����ĳ�����ʽ
//1.�޲��޷�
void test01()
{
	cout << "���" << endl;
}
//2.�в��޷�
void test02(int num1)
{
	cout << "��ֵ��СΪ: " << num1<<endl;
}
//3.�޲��з�
int test03()
{
	int a = 10;
	return a;
}
//4.�в��з�
int test04(int num1)
{
	int num2 = num1 / 10;
	return num2;
}

//����������
//���߱�����������������һ������
//int add(int num1,int num2);

//�����ķ��ļ���д
//����:1.����.h��׺����ͷ�ļ�
//2.����.cpp��׺����Դ�ļ�
//3.��ͷ�ļ���д����������
//4.��Դ�ļ���д�����Ķ���
int main()
{
	//�����Ķ���
	//��һ�ξ���ʹ�õĴ����װ�����������ظ�����
	//�����Ľṹ
	//����ֵ���� ������(�����б�)
	//{
	//	������;
	//	return ���ʽ;
	//}	
	//int num1 = 5;
	//int num2 = 8;
	//int sum = add(num1, num2);
	//�����num1��num2����ʵ�ʲ��������ʵ��
	//cout << sum << endl;
	//�����ĵ���
	//������(����),����:add(num1.num2)

	//ֵ����
	//��������ʱʵ�ν���ֵ�����β�
	//ֵ���ݵ�ʱ������βη����ı䣬������Ӱ��ʵ��
	//int a = 10;
	//int b = 20;
	//cout << "a=" << a << endl;
	//cout << "b=" << b << endl;
	//swap(a, b);
	//cout << "a=" << a << endl;
	//cout << "b=" << b << endl;
	//˵����ֵ���ݹ����У��βη����仯��������Ӱ��ʵ�ε�ֵ

	//�����ĳ�����ʽ
	//1.�޲��޷��ĺ�������
	test01();
	//2.�в��޷��ĺ�������
	test02(100);
	//3.�޲��з��ĺ�������
	int a = test03();
	cout << "a= " << a << endl;
	//4.�в��з��ĺ�������
	int b = test04(1000);
	cout << "b= " << b << endl;

	int num = add(10, 20);
	cout << "num = " << num << endl;
	system("pause");
	return 0;
}
//int add(int num1, int num2)
//{
//	int num = num1 + num2;
//	return num;
//}