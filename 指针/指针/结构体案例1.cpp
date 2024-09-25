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
//		cout << "老师姓名: " << teaarray[i].name << endl;
//		for (int j = 0; j < 5 ; j++)
//		{
//			cout << "\t学生姓名: " << teaarray[i].stuarray[j].name << " 学生分数: " << teaarray[i].stuarray[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//案例描述:
//	//学校正在做毕设项目，每名老师带领5名学生，总共有3名学生，需求如下:
//	//设计学生和老师的结构体，其中在老师的机构体中，有老师和一个存放5名学生的数组作为成员
//	//学生成员中要有姓名，考试成绩，创建数组存放3名老师，通过函数给每个老师及所带学生的赋值
//	//做种打印出老师数据及老师所带的学生数据
//	//1.创建老师数组和学生数组
//	struct teacher teaarray[3];
//	struct student stuarray[5];
//	//2.对老师和学生数组进行赋值
//	int len = sizeof(teaarray) / sizeof(teaarray[0]);
//	allocate_teacher(teaarray,len);
//	//3.打印老师和学生信息
//	printinfo(teaarray, len);
//	system("pause");
//	return 0;
//}