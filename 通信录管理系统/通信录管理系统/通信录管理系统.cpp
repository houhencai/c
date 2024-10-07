#include<iostream>
using namespace std;
#define MAX 1000
void showmenu()
{
	cout << "*************************" << endl;
	cout << "****** 1.�����ϵ�� *****" << endl;
	cout << "****** 2.��ʾ��ϵ�� *****" << endl;
	cout << "****** 3.ɾ����ϵ�� *****" << endl;
	cout << "****** 4.������ϵ�� *****" << endl;
	cout << "****** 5.�޸���ϵ�� *****" << endl;
	cout << "****** 6.�����ϵ�� *****" << endl;
	cout << "****** 0.�˳�ͨѶ¼******" << endl;
	cout << "*************************" << endl;

}
struct person //ͨ��¼���˵���Ϣ
{
	string name;
	int m_sex;
	int m_age;
	string m_phone;
	string m_addr;	
};
struct adressbooks//ͨ��¼����Ϣ
{
	struct person personarray[MAX];
	int num;
};
void addperson(struct adressbooks* abs)//�����ϵ�˵ĺ���
{
	abs->num = 0;
	if (abs->num < MAX)
	{
		//1.����
		cout << "���������������" << endl;
		string name;
		cin >> name;
		abs->personarray[abs->num].name = name;
		//2.�Ա�
		cout << "����������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
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
				cout << "����������" << endl;
			}
		}
		//3.����
		cout << "������������䣺" << endl;
		int age;
		cin >> age;
		abs->personarray[abs->num].m_age = age;
		//4.�ֻ�����
		cout << "����������ֻ����룺" << endl;
		string phone;
		cin >> phone;
		abs->personarray[abs->num].m_phone = phone;
		//5.��ͥ��ַ
		cout << "��������ļ�ͥסַ��" << endl;
		string adr;
		cin >> adr;
		abs->personarray[abs->num].m_addr = adr;

		cout << "��ӳɹ�" << endl;
		abs -> num++;
		system("pause");//�����������
		system("cls");//����
	}
	else
	{
		cout << "��Ǹ��ͨ��¼��Ա����" << endl;
		return;
	}
}
//��ʾ��ϵ��
void showperson(struct adressbooks* abs)
{
	if (abs->num > 0)
	{
		for (int i = 0; i < abs->num; i++)
		{
			cout << "����:  " << abs->personarray[i].name << "\t";
			cout << "����: " << abs->personarray[i].m_age << "\t";
			cout << "�Ա�: " << (abs->personarray[i].m_sex == 1 ? "��" : "Ů") << "\t";
			cout << "�绰����: " << abs->personarray[i].m_phone << "\t";
			cout << "��ͥ��ַ: " << abs->personarray[i].m_addr << endl;
		}

		system("pause");
		system("cls");
	}
	else
	{
		cout << "ͨ��¼���ˣ����������ϵ��" << endl;
	}	
}
//������ϵ��
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
	cout << "������Ҫɾ����ϵ�˵������� " << endl;
	string name;
	cin >> name;
	if (exist(abs, name) == -1)//abs�Ѿ��ǵ�ַ�ˣ�����Ҫȡ��ַ����
	{
		cout << "���޴���" << endl;
	}
	else 
	{
		int ret = exist(abs, name);
		for (int i = ret; i < abs->num; i++)
		{
			abs->personarray[i] = abs->personarray[i + 1];
		}
		cout << "��ɾ����ϵ��" << endl;
		abs->num--;
	}
	system("pause");
	system("cls");
}
void findperson(adressbooks* abs)//���ҵ�����ϵ��
{
	cout << "������Ҫ���ҵ������� " << endl;
	string name;
	cin >> name;
	int ret = exist(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "������ " << abs->personarray[ret].name << "\t";
		cout << "���䣺 " << abs->personarray[ret].m_age << "\t";
		cout << "�Ա� " << (abs->personarray[ret].m_sex==1?"��":"Ů") << "\t";
		cout << "�绰���룺 " << abs->personarray[ret].m_phone << "\t";
		cout << "��ͥ��ַ�� " << abs->personarray[ret].m_addr << endl;
	}
	system("pause");
	system("cls");
}
void meun()
{
	cout << "**********************" << endl;
	cout << "***** 1.���� *********" << endl;
	cout << "***** 2.���� *********" << endl;
	cout << "***** 3.�Ա� *********" << endl;
	cout << "***** 4.�绰���� *****" << endl;
	cout << "***** 5.��ͥ��ַ *****" << endl;
	cout << "**********************" << endl;
}
//�޸���ϵ��
void modifyperson(adressbooks* abs)
{
	cout << "������Ҫ�޸ĵ�����: " << endl;
	string name;
	cin >> name;
	int ret = exist(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		//while (true)
		//{
			
			cout << "��ѡ��Ҫ�޸�ʲô��Ϣ��" << endl;
			meun();
			int chose = 0;
			cin >> chose;
			switch (chose)
			{
			case 1:
			{
				cout << "������Ҫ�޸ĵ���Ϣ: " << endl;
				string name;
				cin >> name;
				abs->personarray[ret].name = name;
				cout << "�޸ĳɹ�" << endl;
				break;
			}
			case 2:
			{
				cout << "������Ҫ�޸ĵ���Ϣ: " << endl;
				int age;
				cin >> age;
				abs->personarray[ret].m_age = age;
				cout << "�޸ĳɹ�" << endl;
				break;
			}
			case 3:
			{
				cout << "������Ҫ�޸ĵ���Ϣ: " << endl;
				cout << "1 --- ��" << endl;
				cout << "2 --- Ů" << endl;
				int sex;
				cin >> sex;
				abs->personarray[ret].m_sex = sex;
				abs->personarray[ret].m_sex == 1 ? "��" : "Ů";
				cout << "�޸ĳɹ�" << endl;
				system("pause");
				system("cls");
				break;
			}
			case 4:
			{
				cout << "������Ҫ�޸ĵ���Ϣ: " << endl;
				string phone;
				cin >> phone;
				abs->personarray[ret].m_phone = phone;
				cout << "�޸ĳɹ�" << endl;
				break;
			}
			case 5:
			{
				cout << "������Ҫ�޸ĵ���Ϣ: " << endl;
				string addr;
				cin >> addr;
				abs->personarray[ret].m_addr = addr;
				cout << "�޸ĳɹ�" << endl;
				break;
			}
			default:
			{
				cout << "�޸���Ϣ������������" << endl;
				break;
			}
			}
		}
	system("pause");
	system("cls");
	//}
}
void cleanperson(adressbooks* abs)//�����ϵ��
{
	cout << "��ȷ��Ҫ�����ϵ����" << endl;
	cout << "**** 1.ȷ����� ****"<<endl;
	cout << "**** 2.ȡ����� ****" <<endl;
	int choose;
	cin >> choose;
	if (choose == 1)
	{
		abs->num = 0;
		cout << "�����ͨѶ¼" << endl;
	}
	else
	{
		cout << "��ȡ�����ͨѶ¼" << endl;
	}
	system("pause");
	system("cls");
}
int main()
{
	//ͨ��¼��һ�����Լ�¼���ˣ�������Ϣ�Ĺ���
	//ϵͳҪʵ�����¼�������:
	//�����ϵ��:��ͨѶ¼��������ˣ���Ϣ����(�������Ա����䣬��ϵ�绰����ͥסַ),����¼1000��
	//��ʾ��ϵ��:��ʾͨ��¼��������ϵ�˵���Ϣ
	//ɾ����ϵ��:������������ɾ��ָ����ϵ��
	//������ϵ��:���������鿴ָ����ϵ����Ϣ
	//�޸���ϵ��:���������޸�ָ����ϵ��
	//�����ϵ��:���ͨѶ¼��������Ϣ
	//�˳�ͨ��¼:�˳���ǰʹ�õ�ͨ��¼
	
	int select = 0;
	adressbooks abs;//����ӵ���
	while (true)
	{
		showmenu();
		cout << "���������ѡ��" << endl;
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
			cout << "������Ҫ���ҵ�������" << endl;
			string name;
			cin >> name;
			if (exist(&abs, name) == -1)
			{
				cout << "���޴���" << endl;
			}
			else
			{
				cout << "�Ѳ��д���" << endl;
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
			cout << "�����´η���" << endl;
			return 0;
			break;
		}
	}
	
	system("pause");
	return 0;
}