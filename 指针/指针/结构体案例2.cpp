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
		cout << "������ " << man[i].name << "���䣺" << man[i].age << "�Ա� " << man[i].gender << endl;
	}
}
int main()
{
	//��������: ���һ��Ӣ�۵Ľṹ�壬������Ա�����������䣬�Ա𣬴����ṹ�����飬���ִ��5��Ӣ��
	//ͨ��ð��������㷨���������е�Ӣ�۰�����������������У����մ�ӡ�����Ľ��
	struct heroman man[5] = {
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	int len = sizeof(man) / sizeof(man[5]);
	bubble(man, len);
	printman(man, len);
	system("pause");
	return 0;
}