//#include<iostream>
//using namespace std;
//�ṹ����﷨:struct �ṹ������ {��Ա�б�};
//struct student
//{
//	string name;
//	int age;
//	int score;
//}s3;//������һ��s3�Ľṹ�����

//�ṹ��Ƕ�׽ṹ��
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//	struct student stu;
//}s4;

//��ӡѧ����Ϣ����
//ֵ����
//void printstudent1(student s1)
//{
//	s1.name = "zhangwu";
//	cout << "�Ӻ����е������� " << s1.name << "���䣺 " << s1.age << "������ " << s1.score << endl;
//}
//��ַ����
//void printstudent2(const student* p)
//{
//	cout << "�Ӻ����е������� " << p->name << "���䣺 " << p->age << "������ " << p->score << endl;
//}
//ֵ���ݻ���ȫ����һ���ṹ�帱�������ܻᵼ���ڴ�������ǿ��Խ�ֵ���ݸı�Ϊ��ַ���ݣ�������ʹ�ڴ��С
//���ǵ�ַ���ݻ�ı�ԭ��ֵ��Ϊ�˷�ֹԭ��ֵ�ĸı䣬���ǿ�����ǰ�����const����
//int main()
//{
	//ͨ��ѧ�����ʹ�������ѧ��
	//��������ѧ����ʱ����Խ��ṹ������ȡ�������Ǵ���ѧ������ʱ�ǲ��е�
	//struct student s1;
	//s1.name = "zhangsan";//���ʽṹ���������.
	//s1.age = 18;
	//s1.score = 100;
	//cout << "����: " << s1.name << "����: " << s1.age << "����: " << s1.score << endl;

	//struct student s2 = { "lisi",20,80 };
	//cout << "����: " << s2.name << "����: " << s2.age << "����: " << s2.score << endl;

	//s3.name = "wangwu";
	//s3.age = 22;
	//s3.score = 75;
	//cout << "����: " << s3.name << "����: " << s3.age << "����: " << s3.score << endl;

	//�ṹ������
	//student stuarray[3] =
	//{
	//	{"zhangsan",18,100},
	//	{"lisi", 20, 80},
	//	{"wangwu", 22, 75},
	//};

	//���ṹ�������ֵ
	//stuarray[1].name = "zhawu";
	//stuarray[1].age = 22;
	//stuarray[1].score = 120;

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "����: " << stuarray[i].name << "����: " << stuarray[i].age << "����: " << stuarray[i].score << endl;
	//}

	//�ṹ��ָ��
	//ͨ��ָ��ָ��ṹ�����
	//struct student* p = &stuarray[1];
	//ͨ��ָ����ʽṹ������
	//p->score = 120;
	//cout << "����: " << p->name << "����: " << p->age << "����: " << p->score << endl;

	//Ƕ�׽ṹ��Ķ���
	//s4.stu.name = "changsan";
	//s4.stu.age = 18;
	//s4.stu.score = 150;

	//�ṹ������������
	//���ṹ����Ϊ���������д���
	//printstudent1(s1);
	//printstudent2(&s1);
	//cout << "����: " << s1.name << "����: " << s1.age << "����: " << s1.score << endl;	
	//������ı��������е����ݵĻ����õ�ַ���ݣ�������ֵ����

	//�ṹ����const��ʹ�ó���
	//��const����ֹ�����
//	printstudent2(&s1);
//	system("pause");
//	return 0;
//}