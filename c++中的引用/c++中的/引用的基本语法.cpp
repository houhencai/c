#include <iostream>
using namespace std;
void test01()
{
	//���õĻ����﷨
	//�����Ǹ����������
	//�﷨��:�������� &���� = ԭ��
	int a = 10;
	int& b = a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	b = 12;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
void test02()
{
	int a = 10;
	int& b = a;
	//1.���ñ����ʼ��
	//int& b;//���Ǵ�������ò���
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//2.�����ڳ�ʼ���󣬲����Ըı�
	int c = 20;
	b = c;//����һ����ֵ���������Ǹ�������
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}
void swap01(int& a,int & b)//���ô���
{
	int temp = a;
	a = b;
	b = temp;
}
void test03()
{
	//��������������
	//����:��������ʱ�������������õļ������β�����ʵ��
	//�ŵ�:���Լ�ָ���޸�ʵ��
	int a = 10;
	int b = 20;
	swap01(a,b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
int& ide()
{
	int a = 10;//a�Ǿֲ������������ջ��
	return a;
}
int& idea()
{
	static int a = 10;
	return a;
}
void test04()
{
	//�����ǿ�����Ϊ�����ķ���ֵ���ڵ�
	//ע��:��Ҫ���ؾֲ���������
	int& ref = ide();
	cout << "a=" << ref << endl;
	cout << "a=" << ref << endl;
	//����������Ϊ��ֵ
	int& b = idea();
	idea() = 200;
	cout << "a=" << b << endl;
	cout << "a=" << b << endl;
}
void test05()
{
	//���õı��ʾ���ָ�볣�����������е�ָ�����������������������
	int a = 10;
	int b = 20;
	int& ref = a;
	//���Զ�ת��Ϊint* const ref = &a; ָ�볣����ָ��ָ�򲻿ɸ��ģ�Ҳ˵��Ϊʲô���ò��ɸ���
	ref = 20;//�ڲ�����ref�����ã��Զ�������ת��Ϊ*ref=a;
	cout << "a=" << a << endl;
	cout << "ref=" << ref << endl;
}
void showvalue(const int& val)//������const��val��ֵ���ױ��ı�
{
	////val = 1000;
	cout << "val=" << val << endl;
}
void test06()
{
	int a = 10;
	//int& ref = 10;//���Ǵ���ģ�������Ҫ��һ���ڴ�ռ�
	const int& ref = 10;//���൱��int temp=10; int& ref=temp;

	showvalue(a);
	cout << "a=" << a << endl;
}
int main()
{
	//test01();//���õĻ����﷨
	//test02();//���õ�ע������
	//test03();//��������������
	//test04();//�����������ķ���ֵ
	//test05();//���õı���
	//test06();//��������
	system("pause");
	return 0;
}
//�ʼ��������⣬�ɽ���ָ��
//If there is any problem with the notes, you can correct them