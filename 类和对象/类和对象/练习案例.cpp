#include<iostream>
using namespace std;
//	//��ϰ����:�����������
//	//�����������(Cube)
//	//������������������
//	//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
//class Cube//���������
//{
//public:
//	//void setlength(int length)//��Ϊ�������ó�
//	//{
//	//	C_length = length;
//	//}
//	//void setwide(int wide)//��Ϊ����Ϊ���ÿ�
//	//{
//	//	C_wide = wide;
//	//}
//	//void settall(int tall)//��Ϊ����Ϊ���ø�
//	//{
//	//	C_tall = tall;
//	//}
//	//���߳�
//	void setnum(int length, int wide, int tall)
//	{
//		C_length = length;
//		C_wide = wide;
//		C_tall = tall;
//	}
//	int shownum1()
//	{
//		return C_length;
//	}
//	int shownum2()
//	{
//		return C_wide;
//	}
//	int shownum3()
//	{
//		return C_tall;
//	}
//	int area()//���
//	{
//		return 2 * C_length * C_wide + 2 * C_length * C_tall + 2 * C_tall * C_wide;
//	}
//	int showvolume()//���
//	{
//		int volume =C_length * C_wide * C_tall;//������㹫ʽ
//		return volume;
//	}
//	bool judge1(Cube c)
//	{
//		if (C_length == c.shownum1() && C_wide == c.shownum2() && C_tall == c.shownum3())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int C_length;//��
//	int C_wide;//��
//	int C_tall;//��
//};
//
//bool judge(Cube c1, Cube c2)
//{
//	if (c1.shownum1() == c2.shownum1() && c1.shownum2() == c2.shownum2() && c1.shownum3() == c2.shownum3())
//	{
//		return true;
//	}
//	return false;
//}
//int main()
//{
//	Cube c1;
//	c1.setnum(10, 12, 15);
//
//	//����������ȫ�ֺ���
//	Cube c2;
//	c2.setnum(12, 13, 14);
//
//	bool ret = judge(c1, c2);
//	if (ret == true)//ȫ�ֺ����ж��������Ƿ���ͬ
//	{
//		cout << "��������������ͬ��" << endl;
//	}
//	cout << "�����������ǲ�ͬ��" << endl;
//	
//	if (c1.judge1(c2) == true)//��Ϊ�����ж��������Ƿ���ͬ
//	{
//		cout << "��������������ͬ��" << endl;
//	}
//	cout << "�����������ǲ�ͬ��" << endl;
//	
//	system("pause");
//	return 0;
//}

//��ϰ����2:���Բ�Ĺ�ϵ
//���һ��Բ�࣬��һ�����࣬������Բ�Ĺ�ϵ

//class dot//�����
//{
//public:
//	void set(int x, int y)//����x��y
//	{
//		x2 = x;
//		y2 = y;
//	}
//	int showX2()//����x��y
//	{
//		return x2;
//	}
//	int showY2()
//	{
//		return y2;
//	}
//private:
//	int x2;
//	int y2;
//};
//class circle//Բ����
//{
//public:
//	void set(int x,int y,int r)
//	{
//		center.set(x, y);
//		m_r = r;
//	}
//	//void set(int x,int y,int r)
//	//{
//	//	x1 = x;
//	//	y1 = y;
//	//	m_r = r;
//	//}
//	int showX1()
//	{
//		//return x1;
//		return center.showX2();
//	}
//	int showY1()
//	{
//		//return y1;
//		return center.showY2();
//	}
//	int showR()
//	{
//		return m_r;
//	}
//	
//private:
//	//int x1;
//	//int y1;
//	dot center;
//	int m_r;
//};
//
//
//void calculate(circle c1, dot d1)
//{
//	int distance = (c1.showX1() - d1.showX2()) * (c1.showX1() - d1.showX2()) + 
//		(c1.showY1() - d1.showY2()) * (c1.showY1() - d1.showY2());//����Բ�����֮��ľ���
//	int r = c1.showR() * c1.showR();//r�Ĵ�С
//	if (distance>r)//�жϵ��Բ�ĵĹ�ϵ
//	{
//		cout << "����Բ��" << endl;
//	}
//	else if (distance==r)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
//	}
//}
//int main()
//{
//	circle c1;//����c1����
//	dot d1;//����d1����
//	c1.set(4, 6, 9);
//	d1.set(13, 6);
//
//	calculate(c1, d1);
//	system("pause");
//	return 0;
//}
//���Խ�����ֱ��������Բ����Բ�ĵĴ���
//�����ڴ�����ʾ��������ע����д