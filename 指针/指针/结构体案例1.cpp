//#include <iostream>
//using namespace std;
//
//struct student
//{
//	string name;
//	int score;
//};
//struct teacher
//{
//	string name;
//	struct student stuarray[5];
//};
//
//void allocate_teacher(struct teacher teaarray[], int len)
//{
//	string name_seed = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		teaarray[i].name = "teacher_";
//		teaarray[i].name += name_seed[i];
//
//		for (int j = 0; j < 5; j++)
//		{
//			teaarray[i].stuarray[j].name = "atudent_";
//			teaarray[i].stuarray[j].name += name_seed[j];
//
//			teaarray[i].stuarray[j].score = rand()%61+40;
//		}
//	}
//}
//void printinfo(struct teacher teaarray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "��ʦ����: " << teaarray[i].name << endl;
//		for (int j = 0; j < 5 ; j++)
//		{
//			cout << "\tѧ������: " << teaarray[i].stuarray[j].name << " ѧ������: " << teaarray[i].stuarray[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//��������:
//	//ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3��ѧ������������:
//	//���ѧ������ʦ�Ľṹ�壬��������ʦ�Ļ������У�����ʦ��һ�����5��ѧ����������Ϊ��Ա
//	//ѧ����Ա��Ҫ�����������Գɼ�������������3����ʦ��ͨ��������ÿ����ʦ������ѧ���ĸ�ֵ
//	//���ִ�ӡ����ʦ���ݼ���ʦ������ѧ������
//	//1.������ʦ�����ѧ������
//	struct teacher teaarray[3];
//	struct student stuarray[5];
//	//2.����ʦ��ѧ��������и�ֵ
//	int len = sizeof(teaarray) / sizeof(teaarray[0]);
//	allocate_teacher(teaarray,len);
//	//3.��ӡ��ʦ��ѧ����Ϣ
//	printinfo(teaarray, len);
//	system("pause");
//	return 0;
//}