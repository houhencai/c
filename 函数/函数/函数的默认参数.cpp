#include <iostream>
using namespace std;

//��������е��β��ǿ�����Ĭ��ֵ��
//�﷨:����ֵ���� ������ (���� Ĭ��ֵ){}
int func(int a=10, int b=10, int c=10)
{
	return a + b + c;
}

//ע������:
//1.��ĳ������֮ǰ��Ĭ��ֵ����ô�����λ�����󣬴������ң����붼��Ĭ��ֵ����������
//int func2(int a = 20, int b, int c)
//{
//	return a + b + c;
//}
//2.������������Ĭ��ֵ������ʵ�ֵ�ʱ��Ͳ�����Ĭ�ϲ���
//int func3(int a = 10, int b = 20, int c = 30);
//int func3(int a = 10, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
void test01()
{
	func(10, 10, 10);
	//func2(10, 20, 30);
	//func3();
	cout << func(10, 10, 10) << endl;
}

//ռλ�������﷨
//����ֵ���� ������(��������){}
//ռλ����������Ĭ��ֵ
//int fanc(int a, int = 10)
//{
//	cout << "this is func" << endl;
//}
void test02()
{
	//fanc(10);
}

void fbnc()
{
	cout << "�����func" << endl;
}
void fbnc(int a)
{
	cout << "�����func(int a)" << endl;
}
//����:�����ķ���ֵ���Ͳ�������Ϊ�������ص�����
//int fbnc(int a)
//{
//	cout << "�����func(int a)" << endl;
//}
void test03()
{
	//�������ص������Ǻ�������ͬ����߸�����
	//�������ص�����:
	//ͬһ���������£�����������ͬ�������������Ͳ�ͬ���߸�����ͬ����˳��ͬ
	fbnc();
	fbnc(10);
	
}
//int main()
//{
	//test01();//������Ĭ�ϲ���
	//test02();//������ռλ����
//	test03();//��������
//	system("pause");
//	return 0;
//}