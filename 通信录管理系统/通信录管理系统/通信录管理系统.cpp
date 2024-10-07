#include<iostream>
using namespace std;
#define MAX 1000
void showmenu()
{
	cout << "*************************" << endl;
	cout << "****** 1.添加联系人 *****" << endl;
	cout << "****** 2.显示联系人 *****" << endl;
	cout << "****** 3.删除联系人 *****" << endl;
	cout << "****** 4.查找联系人 *****" << endl;
	cout << "****** 5.修改联系人 *****" << endl;
	cout << "****** 6.清空联系人 *****" << endl;
	cout << "****** 0.退出通讯录******" << endl;
	cout << "*************************" << endl;

}
struct person //通信录中人的信息
{
	string name;
	int m_sex;
	int m_age;
	string m_phone;
	string m_addr;	
};
struct adressbooks//通信录中信息
{
	struct person personarray[MAX];
	int num;
};
void addperson(struct adressbooks* abs)//添加联系人的函数
{
	abs->num = 0;
	if (abs->num < MAX)
	{
		//1.姓名
		cout << "请输入你的姓名：" << endl;
		string name;
		cin >> name;
		abs->personarray[abs->num].name = name;
		//2.性别
		cout << "请输入你的性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex;
		while(true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personarray[abs->num].m_sex = sex;
				break;
			}
			else
			{
				cout << "请重新输入" << endl;
			}
		}
		//3.年龄
		cout << "请输入你的年龄：" << endl;
		int age;
		cin >> age;
		abs->personarray[abs->num].m_age = age;
		//4.手机号码
		cout << "请输入你的手机号码：" << endl;
		string phone;
		cin >> phone;
		abs->personarray[abs->num].m_phone = phone;
		//5.家庭地址
		cout << "请输入你的家庭住址：" << endl;
		string adr;
		cin >> adr;
		abs->personarray[abs->num].m_addr = adr;

		cout << "添加成功" << endl;
		abs -> num++;
		system("pause");//按任意键继续
		system("cls");//清屏
	}
	else
	{
		cout << "抱歉，通信录人员已满" << endl;
		return;
	}
}
//显示联系人
void showperson(struct adressbooks* abs)
{
	if (abs->num > 0)
	{
		for (int i = 0; i < abs->num; i++)
		{
			cout << "姓名:  " << abs->personarray[i].name << "\t";
			cout << "年龄: " << abs->personarray[i].m_age << "\t";
			cout << "性别: " << (abs->personarray[i].m_sex == 1 ? "男" : "女") << "\t";
			cout << "电话号码: " << abs->personarray[i].m_phone << "\t";
			cout << "家庭地址: " << abs->personarray[i].m_addr << endl;
		}

		system("pause");
		system("cls");
	}
	else
	{
		cout << "通信录无人，请先添加联系人" << endl;
	}	
}
//查找联系人
int exist(adressbooks* abs, string name)
{
	for (int i = 0; i < abs->num; i++)
	{
		if (abs->personarray[i].name == name)
		{
			return i;
		}
	}
	return -1;
}
void deleteperson(adressbooks* abs)
{
	cout << "请输入要删除联系人的姓名： " << endl;
	string name;
	cin >> name;
	if (exist(abs, name) == -1)//abs已经是地址了，不需要取地址符了
	{
		cout << "查无此人" << endl;
	}
	else 
	{
		int ret = exist(abs, name);
		for (int i = ret; i < abs->num; i++)
		{
			abs->personarray[i] = abs->personarray[i + 1];
		}
		cout << "已删除联系人" << endl;
		abs->num--;
	}
	system("pause");
	system("cls");
}
void findperson(adressbooks* abs)//查找单个联系人
{
	cout << "请输入要查找的人名： " << endl;
	string name;
	cin >> name;
	int ret = exist(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		cout << "姓名： " << abs->personarray[ret].name << "\t";
		cout << "年龄： " << abs->personarray[ret].m_age << "\t";
		cout << "性别： " << (abs->personarray[ret].m_sex==1?"男":"女") << "\t";
		cout << "电话号码： " << abs->personarray[ret].m_phone << "\t";
		cout << "家庭地址： " << abs->personarray[ret].m_addr << endl;
	}
	system("pause");
	system("cls");
}
void meun()
{
	cout << "**********************" << endl;
	cout << "***** 1.姓名 *********" << endl;
	cout << "***** 2.年龄 *********" << endl;
	cout << "***** 3.性别 *********" << endl;
	cout << "***** 4.电话号码 *****" << endl;
	cout << "***** 5.家庭地址 *****" << endl;
	cout << "**********************" << endl;
}
//修改联系人
void modifyperson(adressbooks* abs)
{
	cout << "请输入要修改的人名: " << endl;
	string name;
	cin >> name;
	int ret = exist(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		//while (true)
		//{
			
			cout << "请选择要修改什么信息：" << endl;
			meun();
			int chose = 0;
			cin >> chose;
			switch (chose)
			{
			case 1:
			{
				cout << "请输入要修改的信息: " << endl;
				string name;
				cin >> name;
				abs->personarray[ret].name = name;
				cout << "修改成功" << endl;
				break;
			}
			case 2:
			{
				cout << "请输入要修改的信息: " << endl;
				int age;
				cin >> age;
				abs->personarray[ret].m_age = age;
				cout << "修改成功" << endl;
				break;
			}
			case 3:
			{
				cout << "请输入要修改的信息: " << endl;
				cout << "1 --- 男" << endl;
				cout << "2 --- 女" << endl;
				int sex;
				cin >> sex;
				abs->personarray[ret].m_sex = sex;
				abs->personarray[ret].m_sex == 1 ? "男" : "女";
				cout << "修改成功" << endl;
				system("pause");
				system("cls");
				break;
			}
			case 4:
			{
				cout << "请输入要修改的信息: " << endl;
				string phone;
				cin >> phone;
				abs->personarray[ret].m_phone = phone;
				cout << "修改成功" << endl;
				break;
			}
			case 5:
			{
				cout << "请输入要修改的信息: " << endl;
				string addr;
				cin >> addr;
				abs->personarray[ret].m_addr = addr;
				cout << "修改成功" << endl;
				break;
			}
			default:
			{
				cout << "无该信息，请重新输入" << endl;
				break;
			}
			}
		}
	system("pause");
	system("cls");
	//}
}
void cleanperson(adressbooks* abs)//清除联系人
{
	cout << "你确定要清空联系人吗？" << endl;
	cout << "**** 1.确定清空 ****"<<endl;
	cout << "**** 2.取消清空 ****" <<endl;
	int choose;
	cin >> choose;
	if (choose == 1)
	{
		abs->num = 0;
		cout << "已清空通讯录" << endl;
	}
	else
	{
		cout << "已取消清空通讯录" << endl;
	}
	system("pause");
	system("cls");
}
int main()
{
	//通信录是一个可以记录亲人，好友信息的工具
	//系统要实现以下几个功能:
	//添加联系人:向通讯录中添加新人，信息包括(姓名，性别，年龄，联系电话，家庭住址),最多记录1000人
	//显示联系人:显示通信录中所有联系人的信息
	//删除联系人:按照姓名进行删除指定联系人
	//查找联系人:按照姓名查看指定联系人信息
	//修改联系人:按照重新修改指定联系人
	//清空联系人:清空通讯录中所有信息
	//退出通信录:退出当前使用的通信录
	
	int select = 0;
	adressbooks abs;//所添加的人
	while (true)
	{
		showmenu();
		cout << "请输入你的选择：" << endl;
		cin >> select;
	switch (select)
		{
		case 1:
			addperson(&abs);
			break;
		case 2:
			showperson(&abs);
			break;
		case 3:
		/*{
			cout << "请输入要查找的姓名：" << endl;
			string name;
			cin >> name;
			if (exist(&abs, name) == -1)
			{
				cout << "查无此人" << endl;
			}
			else
			{
				cout << "已查有此人" << endl;
			}
			system("pause");
			system("cls")
		}*/
			deleteperson(&abs);
			break;
		case 4:
			findperson(&abs);
			break;
		case 5:
			modifyperson(&abs);
			break;
		case 6:
			cleanperson(&abs);
			break;
		case 0:
			cout << "欢饮下次访问" << endl;
			return 0;
			break;
		}
	}
	
	system("pause");
	return 0;
}