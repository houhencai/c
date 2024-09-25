#include<iostream>
using namespace std;
//需要包含时间函数的文件
#include<ctime>
#include<math.h>
int main()
{
	//程序流程结构
	//选择结构
	//if语句——满足条件的时候，进行输出
	// 单行if语句格式
	//int score = 0;
	//cin >> score;
	//if (score > 600)
	//{
	//	cout << "你考上了大学" << endl;
	//}
	//注:在if语句后面不要加上;，这样会使{}中的语句在不符合条件的情况下运行

	//多行if语句格式(if{}else{})
	//int score = 0;
	//cout << "请输入你的分数: " << endl;
	//cin >> score;
	//cout << "你的考试分数为:" << score << endl;
	//if (score >= 600)
	//{
	//	cout << "你考上了一本" << endl;
	//}
	//else
	//{
	//	cout << "你未考上一本" << endl;
	//}

	//多条件的if语句
	//int score = 0;
	//cout << "请输入你的分数: " << endl;
	//cin >> score;
	//cout << "你的考试分数为:" << score << endl;
	//if (score >= 600)
	//{
	//	cout << "你考上了一本大学" << endl;
	//}
	//else if(score>=500)
	//{
	//	cout << "你考上了二本大学" << endl;
	//}
	//else if (score >= 400)
	//{
	//	cout << "你考上了三本大学" << endl;
	//}
	//else
	//{
	//	cout << "你未考上大学，请继续加油" << endl;
	//}

	//嵌套if语句
	//在if语句中写入if语句
	//int score = 0;
	//cout << "请输入你的分数: " << endl;
	//cin >> score;
	//cout << "你的考试分数为:" << score << endl;
	//if (score >= 600)
	//{
	//	if (score > 650)
	//	{
	//		cout << "恭喜你考入985" << endl;
	//	}
	//	else if(score > 625)
	//	{
	//		cout << "恭喜你考入211" << endl;
	//	}
	//	else
	//	{
	//		cout << "你考上了一本大学" << endl;
	//	}
	//}
	//else if (score >= 500)
	//{
	//	cout << "你考上了二本大学" << endl;
	//}
	//else if (score >= 400)
	//{
	//	cout << "你考上了三本大学" << endl;
	//}
	//else
	//{
	//	cout << "你未考上大学，请继续加油" << endl;
	//}

	//练习案例
	//有三只小猪ABC，请分别输入三只小猪的体重，并判断那只小猪最重?
	//1.创建小猪变量
	//int num1 = 0;
	//int num2 = 0;
	//int num3 = 0;
	//2.输入小猪的体重数据
	//cout << "请输入小猪A的体重:" << endl;
	//cin >> num1;
	//cout << "请输入小猪B的体重:" << endl;
	//cin >> num2;
	//cout << "请输入小猪C的体重:" << endl;
	//cin >> num3;
	//3.进行判断
	//if (num1 >= num2)
	//{
	//	if (num1 > num3)
	//	{
	//		cout << "小猪A的体重最重" << endl;
	//	}
	//	else if (num3 > num1)
	//	{
	//		cout << "小猪C的体重最重" << endl;
	//	}
	//}
	//else
	//{
	//	if (num2 > num3)
	//	{
	//		cout << "小猪B的体重最重" << endl;
	//	}
	//	else /*if (num3 > num2)*/
	//	{
	//		cout << "小猪C的体重最重" << endl;
	//	}
	//}
	//并不考虑等于的情况

	//三目运算符
	//实现简单的判断
	//语法:表达式1?表达式2:表达式3
	//解释:若表达式1为真的话，执行表达式2，若表达式1为假的话，执行表达式3
	//int a = 10;
	//int b = 20;
	//int c = 0;
	//cout << "a= " << a << endl;
	//cout << "b= " << b << endl;
	//cout << "c= " << c << endl;
	//c = a > b ? a : b;
	//cout << "c= " << c << endl;
	//在c++中三目运算符返回的是变量，可以继续赋值
	//(a > b ? a : b) = 100;
	//cout << "a= " << a << endl;
	//cout << "b= " << b << endl;
	//cout << "c= " << c << endl;

	//switch语句
	//用于执行多条件分支语句
	//int score = 0;
	//cout << "请输入你对该影片的评分： " << endl;
	//cin >> score;
	//cout << "你输入的评分是" << score << endl;
	//switch (score)
	//{
	//case 10:
	//case 9:
	//	cout << "你认为这是一个经典的影片" << endl;
	//	break;
	//case 8:
	//case 7:
	//	cout << "你认为这是一个非常不错的影片" << endl;
	//	break;
	//case 6://与if语句中的else if语句相似
	//case 5:
	//	cout << "你认为这是一个一般的影片" << endl;
	//	break;
	//default://与if语句中的else作用相似
	//	cout << "你认为这是一个烂片" << endl;
	//	break;
	//}
	//switch语句的缺点:判断的表达式只能是字符型和整数型，不能是区间
	//若是没有break语句，程序会一直往下运行
	//优点:结构清晰，执行效率高

	//循环结构
	//while循环语句
	//语法:while(循环条件){}
	//只要循环条件结果为真就执行循环语句
	//注意:要避免死循环的出现问
	//int num = 0;
	//while (num < 10) {
	//	cout << num << endl;
	//	num++;
	//}
	

	//猜数字游戏
	//系统随机生成一个0~100的数字，玩家进行猜测，如果猜错，提示猜大或猜小，知道猜对未知
	// 添加随机数种子作用于当前系统时间生成随机数，防止随机数是一样的
	//srand((unsigned int)time(NULL));
	//1.生成随机数字
	//int num = rand() % 100+1;//rand() % 100表示随机生成0~99的数字,但是第一个随机数字都一样
	//2.进行猜测
	///*int num1 = 0;
	//while (1)
	//{
	//	cout << "请输入你猜的数字: " << endl;
	//	cin >> num1;
	//	if (num1 > num)
	//	{
	//		cout << "你猜大了" << endl;
	//	}
	//	else if (num1 < num)
	//		cout << "你猜小了" << endl;
	//	else
	//	{
	//		cout << "你找到了" << endl;
	//		break;
	//	}
	//}*/

	//do while语句
	//语法:do{循环语句}while(循环条件);
	//与while区别是要先执行循环条件，再判断循环条件
	//int num = 0;
	//do
	//{
	//	cout << num << endl;
	//	num++;
	//} while (num < 10);

	//循环结构案例:水仙花数
	//水仙花数是指一个三位数，它的每个位上的数字的三次幂之和等于它本身
	//例如:1^3+5^3+3^3=153
	//int num = 100;
	//do
	//{
	//	int x = num % 10;
	//	int y = (num / 10) % 10;
	//	int z = (num / 100) % 10;
	//	int num1 = x*x*x + y*y*y + z*z*z;
	//	//int num1 = x ^ 3 + y ^ 3 + z ^ 3;//这是错误的写法
	//	if (num1 == num)
	//	{
	//		cout << num << endl;
	//	}
	//	num++;
	//} while (num < 1000);

	//for循环
	//作用:满足循环条件，执行循环语句
	//语法:for(起始表达式;条件判断式;末尾循环式){循环语句;}
	//起始表达式只在开始时执行，然后进行条件判断，循环语句，末尾循环式，
	// 再次进行条件判断，循环语句，末尾循环式，直到条件不满足为止
	//例:打印数字0到9
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	cout << i<<endl ;
	//}

	//练习案例:敲桌子
	//从1到100，如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们敲桌子，其余直接输出
	//int i = 0;
	//for (i = 1; i < 101; i++)
	//{
	//	if (i % 7 == 0 || i / 10 == 7 || i % 10 == 7)
	//	{
	//		cout << "敲桌子" << endl;
	//	}
	//	else
	//	{
	//		cout << i << endl;
	//	}
	//}
	//要满足上面所有的条件，所以是或，而不是且的关系

	//嵌套循环
	//打印一行星图
	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j < 10; j++)
	//	{
	//		cout << "* ";
	//	}
	//	cout << endl;
	//}
	//外层循环一次，内层循环一周
	//一般内层变量和外层变量要不一样
	//一般变量是就近原则

	//练习案例:乘法口诀表
	//for (int i = 1; i < 10; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		cout << i<<"*"<<j<<"="<<i*j<<" ";
	//	}
	//	cout << endl;
	//}

	//跳转语句
	//break语句，作用是用于跳出选择结构或循环语句
	//break使用的时机：
	//出现Switch条件语句中，作用是终止case并跳出switch
	//cout << "请输入你的难度" << endl;
	//cout << "1.普通难度" << endl;
	//cout << "2.一般难度" << endl;
	//cout << "1.困难难度" << endl;
	//int select = 0;
	//cin >> select;
	//switch (select)
	//{
	//case 1:
	//	cout << "这是普通难度"<<endl;
	//	break;
	//case 2:
	//	cout << "这是一般难度" << endl;
	//	break;
	//case 3:
	//	cout << "这是困难难度" << endl;
	//	break;
	//default:
	//	break;
	//}
	//出现在循环语句中，跳出循环语句
	//int i = 0;
	//while (1)
	//{
	//	cout << i<< endl;
	//	if (i == 5)
	//	{
	//		break;
	//	}
	//	i++;
	//}
	//出现在嵌套循环中，跳出最近的内层循环语句
	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j < 10; j++)
	//	{
	//		if (j < 5)
	//		{
	//			cout << "* ";
	//		}
	//		else
	//		{
	//			break;
	//		}
	//	}
	//	cout << endl;
	//}

	//continue语句
	//作用:跳过本次循环未执行的语句，继续执行下次循环
	//例:输出奇数(0~100)中
	//for (int i = 0; i < 101; i++)
	//{
	//	if (i % 2 == 0)
	//	{
	//		continue;
	//	}
	//	cout << i << endl;
	//}

	//goto语句(跳转语句)
	cout << "1.******" << endl;

	cout << "2.******" << endl;
	goto FLAG;
	cout << "3.******" << endl;

	cout << "4.******" << endl;
	FLAG:
	cout << "5.******" << endl;
	//并不建议使用goto语句，因为会使阅读代码变困难
	system("pause");
	return 0;
}