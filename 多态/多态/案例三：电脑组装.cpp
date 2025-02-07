#include<iostream>
using namespace std;
//建CPU父类
class CPU
{
public:
	virtual void calculate() = 0;
};

//建显卡父类
class Videocard
{
public:
	virtual void display() = 0;
};

//建内存父类
class Memory
{
public:
	virtual void storage() = 0;
};
//建立组装电脑
class computer
{
public:
	//计算机调用接口
	computer(CPU* cpu, Videocard* vc, Memory* mem)//computer构造函数
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	~computer()//析构函数 --释放堆区的数据
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
private:
	CPU* m_cpu;
	Videocard* m_vc;
	Memory* m_mem;
};

class interCPU :public CPU
{
public:
	void calculate()
	{
		cout << "inter的cpu开始计算了" << endl;
	}
};

class interVideocard :public Videocard
{
public:
	void display()
	{
		cout << "inter的显卡开始显示了" << endl;
	}
};

class interMemory :public Memory
{
public:
	void storage()
	{
		cout << "inter的内存开始存储了" << endl;
	}
};

class LenovorCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Lenovo的cpu开始计算了" << endl;
	}
};

class LenovoVideocard :public Videocard
{
public:
	void display()
	{
		cout << "Lenovo的显卡开始显示了" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	void storage()
	{
		cout << "Lenovo的内存开始存储了" << endl;
	}
};

//void test01()
//{
//	CPU* intercpu = new interCPU;
//	Memory* intermem = new interMemory;
//	Videocard* intervc = new interVideocard;
//
//	computer* com1 = new computer(intercpu, intervc, intermem);
//	com1->work();
//	delete com1;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}