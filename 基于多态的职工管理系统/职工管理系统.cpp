#include<iostream>
using namespace std;

/*
ְ������ϵͳ
1������ϵͳ����
ְ������ϵͳ������������˾������Ա������Ϣ
���̳�����C++��ʵ��һ�����ڶ�̬��ְ������ϵͳ

��˾��ְ����Ϊ���ࣺ��ͨԱ���������ϰ塢��ʾ��Ϣʱ����Ҫ��ʾְ����š�ְ��������ְ����λ�Լ�ְ��

��ͨԱ��ְ����ɾ�����������
����ְ������ϰ彻�������񣬲��������Ա��
�ϰ�ְ�𣺹���˾��������

����ϵͳ����Ҫʵ�ֵĹ������£�
1���˳���������˳���ǰ����ϵͳ
2������ְ����Ϣ��ʵ���������ְ�����ܣ�����Ϣ¼�뵽�ļ��У�ְ����ϢΪ��ְ����š����������ű�š�
3����ʾְ����Ϣ����ʾ��˾�ڲ�����ְ������Ϣ
4��ɾ����ְԱ�������ձ��ɾ��ָ����Ա��
5���޸�ְ����Ϣ�����ձ���޸�ְ��������Ϣ
6������ְ����Ϣ������ְ���ı�Ż���ְ�����������в�����ص���Ա��Ϣ
7�����ձ�����򣺰���ְ����š�������������������û�ָ��
8����������ĵ�������ļ��м�¼������ְ����Ϣ �����ǰ��Ҫ�ٴ�ȷ�ϣ���ֹ��ɾ��

*/

#include"WorkManager.h"
#include"Worker.h"
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"
int main() {
	////���Դ��룺
	//Worker* worker = NULL;
	//worker = new Employee(1,"����",1);
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2, "����",2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "����", 3);
	//worker->showInfo();
	//delete worker;

	//ʵ���������߶���
	WorkerManager wm;

	int choice = 0;//�����洢�û���ѡ��

	while (true) {
		//����չʾ�˵���Ա����
		wm.Show_Menu();

		cout << "����������ѡ��" << endl;
		cin >> choice; //�����û���ѡ��

		switch (choice) {
		case 0:	//�˳�ϵͳ
			wm.ExitSystem();
			break;
		case 1:	//����ְ��
			wm.Add_Emp();
			break;
		case 2: //��ʾְ��
			wm.Show_Emp();
			break;
		case 3: //ɾ��ְ��
		//{//����
		//	int ret = wm.IsExist(2);
		//	if (ret != -1) {
		//		cout << "ְ������" << endl;
		//	}
		//	else {
		//		cout << "ְ��������" << endl;
		//	}
		//	break; 
		//}
			wm.Del_Emp();
			break;
		case 4: //�޸�ְ��
			wm.Mod_Emp();
			break;
		case 5: //����ְ��
			wm.Fine_Emp();
			break;
		case 6: //����ְ��
			wm.Sort_Emp();
			break;
		case 7: //����ĵ�
			wm.Clean_File();
			break;
		default:
			system("cls"); //����
			break;
		}
	}
	
	system("pause");
	return 0;
}

