//#include<iostream>
//using namespace std;
//结构体的语法:struct 结构体名称 {成员列表};
//struct student
//{
//	string name;
//	int age;
//	int score;
//}s3;//创建了一个s3的结构体变量

//结构体嵌套结构体
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//	struct student stu;
//}s4;

//打印学生信息函数
//值传递
//void printstudent1(student s1)
//{
//	s1.name = "zhangwu";
//	cout << "子函数中的姓名： " << s1.name << "年龄： " << s1.age << "分数： " << s1.score << endl;
//}
//地址传递
//void printstudent2(const student* p)
//{
//	cout << "子函数中的姓名： " << p->name << "年龄： " << p->age << "分数： " << p->score << endl;
//}
//值传递会完全创建一个结构体副本，可能会导致内存过大，我们可以将值传递改变为地址传递，这样会使内存变小
//但是地址传递会改变原有值，为了防止原有值的改变，我们可以在前面加上const修饰
//int main()
//{
	//通过学生类型创建具体学生
	//创建具体学生的时候可以将结构变量名取消，但是创建学生类型时是不行的
	//struct student s1;
	//s1.name = "zhangsan";//访问结构体变量是用.
	//s1.age = 18;
	//s1.score = 100;
	//cout << "姓名: " << s1.name << "年龄: " << s1.age << "分数: " << s1.score << endl;

	//struct student s2 = { "lisi",20,80 };
	//cout << "姓名: " << s2.name << "年龄: " << s2.age << "分数: " << s2.score << endl;

	//s3.name = "wangwu";
	//s3.age = 22;
	//s3.score = 75;
	//cout << "姓名: " << s3.name << "年龄: " << s3.age << "分数: " << s3.score << endl;

	//结构体数组
	//student stuarray[3] =
	//{
	//	{"zhangsan",18,100},
	//	{"lisi", 20, 80},
	//	{"wangwu", 22, 75},
	//};

	//给结构体变量赋值
	//stuarray[1].name = "zhawu";
	//stuarray[1].age = 22;
	//stuarray[1].score = 120;

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "姓名: " << stuarray[i].name << "年龄: " << stuarray[i].age << "分数: " << stuarray[i].score << endl;
	//}

	//结构体指针
	//通过指针指向结构体变量
	//struct student* p = &stuarray[1];
	//通过指针访问结构体数据
	//p->score = 120;
	//cout << "姓名: " << p->name << "年龄: " << p->age << "分数: " << p->score << endl;

	//嵌套结构体的定义
	//s4.stu.name = "changsan";
	//s4.stu.age = 18;
	//s4.stu.score = 150;

	//结构体做函数参数
	//将结构体作为参数向函数中传递
	//printstudent1(s1);
	//printstudent2(&s1);
	//cout << "姓名: " << s1.name << "年龄: " << s1.age << "分数: " << s1.score << endl;	
	//若你想改变主函数中的数据的话，用地址传递，否则用值传递

	//结构体中const的使用场景
	//用const来防止误操作
//	printstudent2(&s1);
//	system("pause");
//	return 0;
//}