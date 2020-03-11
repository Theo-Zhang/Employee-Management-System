#include<iostream>
using namespace std;

/*
职工管理系统
1、管理系统需求
职工管理系统可以用来管理公司内所有员工的信息
本教程利用C++来实现一个基于多态的职工管理系统

公司中职工分为三类：普通员工、经理、老板、显示信息时，需要显示职工编号、职工姓名、职工岗位以及职责、

普通员工职责：完成经理交给的任务
经理职责：完成老板交给的任务，并下任务给员工
老板职责：管理公司所有事物

管理系统中需要实现的功能如下：
1、退出管理程序：退出当前管理系统
2、增加职工信息：实现批量添加职工功能，将信息录入到文件中，职工信息为：职工编号、姓名、部门编号。
3、显示职工信息：显示公司内部所有职工的信息
4、删除离职员工：按照编号删除指定的员工
5、修改职工信息：按照编号修改职工个人信息
6、查找职工信息：按照职工的编号或者职工的姓名进行查找相关的人员信息
7、按照编号排序：按照职工编号、进行排序、排序规则由用户指定
8、清空所有文档：清空文件中记录的所有职工信息 （清空前需要再次确认，防止误删）

*/

#include"WorkManager.h"
#include"Worker.h"
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"
int main() {
	////测试代码：
	//Worker* worker = NULL;
	//worker = new Employee(1,"张三",1);
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2, "李四",2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "王五", 3);
	//worker->showInfo();
	//delete worker;

	//实例化管理者对象
	WorkerManager wm;

	int choice = 0;//用来存储用户的选项

	while (true) {
		//调用展示菜单成员函数
		wm.Show_Menu();

		cout << "请输入您的选择：" << endl;
		cin >> choice; //接受用户的选项

		switch (choice) {
		case 0:	//退出系统
			wm.ExitSystem();
			break;
		case 1:	//增加职工
			wm.Add_Emp();
			break;
		case 2: //显示职工
			wm.Show_Emp();
			break;
		case 3: //删除职工
		//{//测试
		//	int ret = wm.IsExist(2);
		//	if (ret != -1) {
		//		cout << "职工存在" << endl;
		//	}
		//	else {
		//		cout << "职工不存在" << endl;
		//	}
		//	break; 
		//}
			wm.Del_Emp();
			break;
		case 4: //修改职工
			wm.Mod_Emp();
			break;
		case 5: //查找职工
			wm.Fine_Emp();
			break;
		case 6: //排序职工
			wm.Sort_Emp();
			break;
		case 7: //清空文档
			wm.Clean_File();
			break;
		default:
			system("cls"); //清屏
			break;
		}
	}
	
	system("pause");
	return 0;
}

