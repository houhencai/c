#include <iostream>
using namespace std;

//void swap01(int a, int b);
//int main()
//{
	//1.ָ��Ķ���
	//int a = 10;
	//int b = 20;
	//����ָ����﷨���������� * ָ�������
	//int* p;
	//p = &a;
	//cout << "a�ĵ�ַ�� " << &a << endl;
	//cout << "a�ĵ�ַ�� " << p << endl;
	//ʹ��ָ��
	//ͨ�������õĲ����ҵ�ָ��ָ����ڴ�
	//��ָ��ǰ����*�����ǽ����ã��ҵ�ָ��ָ����ڴ�����
	//*p = 100;
	//cout << "a = " << a << endl;
	//cout << "a = " << *p << endl;

	//ָ����ռ���ڴ�ռ�
	//int a = 10;
	//int* p = &a;
	//cout << "sizeof(int*)= " << sizeof(int*) << endl;
	//cout << "sizeof(float*)= " << sizeof(float*) << endl;
	//cout << "sizeof(double*)= " << sizeof(double*) << endl;
	//cout << "sizeof(char*)= " << sizeof(char*) << endl;
	//ָ����ռ���ڴ�ռ������������޹أ���ϵͳ��λ�����

	//��ָ��
	//��ָ����ָָ�����ָ���ڴ���Ϊ0������
	//��;�ǳ�ʼ��ָ�����
	//��ָ��ָ����ڴ��ǲ����Է��ʵ�
	//int* p = NULL;
	//�ڴ���Ϊ0~255Ϊϵͳռ���ڴ棬�������û����ʣ��ᵼ��ȡ������
	//cout << *p << endl;

	//Ұָ��
	//ָ�����ָ��Ƿ����ڴ�ռ�
	//int* p = (int*)0x1100;
	//����Ұָ���ʧ��
	//cout << *p << endl;
	//Ұָ��Ϳ�ָ�붼������������Ŀռ䣬��˲�Ҫ����

	//const����ָ��
	//1.const����ָ�� �� const int * p= &a;
	//ָ��ָ����Ըı䣬����ָ��ָ���ֵ���ܸı�
	//const int* p1 = &a;
	//p = &b;//�ı�ָ���ָ������ȷ�Ĳ���
	//*p = 20;//�ı�ָ���ֵ���Ǵ���Ĳ���
	//2.const���γ�������int * const p=&a;
	//ָ���ָ�򲻻�ı䣬ָ��ָ���ֵ���Ըı�
	//int* const p2 = &a;
	//p = &b;//����
	//*p = 20;//��ȷ
	//const����ָ��ͳ���
	//const int* const p = &a;
	//p = &b;//����
	//*p = 20;//����
	//�����Ҫ��:��const���ε���ʲô,��const���ε���int *��ֻ�ܸı�ָ��ָ����const���ε���p��ֻ�ܸı�ֵ

	//ָ�������
	//����ָ����������е�Ԫ��
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	//int* p = arr;
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << *p << endl;
	//	p++;//ÿ��+4
	//}

	//ָ���뺯��

	//��ַ����
	

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