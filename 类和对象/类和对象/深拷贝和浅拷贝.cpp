//#include <iostream>
//using namespace std;
////�����ǳ����
////ǳ��������
//class person
//{
//public:
//	person()
//	{
//		cout << "person �޲ι��캯���ĵ���" << endl;
//	}
//	person(int age, int height)
//	{
//		m_age = age;
//		m_height = new int(height);//Ϊ�˺�m_height�Խӽ�int���͵�heightת��Ϊint*���͵�height
//		cout << "perosn �вι��캯���ĵ���" << endl;
//	}
//	person(const person &p)
//	{
//		m_age = p.m_age;
//		//m_height = p.m_height;//�����ǳ������
//		//����ǳ����ֻ�������ڴ��Ž��и��ƣ��������ֵ��û�иı�(�򵥵ĸ��ƿ�������)
//
//		m_height = new int(*p.m_height);//��������ڶ�������һ���Լ����ڴ�ռ�
//		cout << "person �������캯���ĵ���" << endl;
//	}
//	~person()
//	{
//		//���ڶ�����������Ҫ�г���Ա�Լ��ͷ�
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		//����ֱ�������Ϊ�Ҵ���������person�Ķ�������������ָ����ڴ�ռ䶼����ͬ��
//		//�ɳ����Ƚ����ԭ��p2�������������Ѿ���m_height�������ڴ��ͷ�
//		//����p1ҲҪ��m_height�����ڴ��ͷţ����Իᱨ��
//		//��������������
//		cout << "person ���������ĵ���" << endl;
//	}
//	int m_age;
//	int* m_height;
//};
//void test01()
//{
//	person p(18,160);
//	person p1(p);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}