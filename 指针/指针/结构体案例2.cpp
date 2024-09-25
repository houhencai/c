#include <iostream>
using namespace std;
struct heroman
{
	string name;
	int age;
	string gender;
};
void bubble(struct heroman man[], int len) 
{
	for (int i = len; i > 0; i--)
	{
		int j = 0;
		for (j = 0; j < i - 1; j++)
		{
			if (man[j].age > man[j + 1].age)
			{
				struct heroman temp = man[j];
				man[j] = man[j + 1];
				man[j + 1] = temp;
			}
		}
	}
}
void printman(struct heroman man[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名： " << man[i].name << "年龄：" << man[i].age << "性别： " << man[i].gender << endl;
	}
}
int main()
{
	//案例描述: 设计一个英雄的结构体，包括成员的姓名，年龄，性别，创建结构体数组，数字存放5名英雄
	//通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排列，最终打印排序后的结果
	struct heroman man[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	int len = sizeof(man) / sizeof(man[5]);
	bubble(man, len);
	printman(man, len);
	system("pause");
	return 0;
}