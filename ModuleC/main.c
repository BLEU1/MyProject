#include "defs.h"

int main()
{
	int i;
	start:
	printf("\n**********欢迎使用学生选课管理系统**********\n");
	printf("*菜单：\t\t\t\t\t   *\n");
	printf("*\t1.录入课程信息\t");
	printf("2.课程信息管理     *\n");
	printf("*\t3.录入学生信息\t");
	printf("4.学生信息管理     *\n");
	printf("*\t5.学生选课\t");
	printf("6.查看信息         *\n");
	printf("*\t7.存储信息\t");
	printf("8.退出             *\n");
	printf("********************************************\n");
	printf("请选择（1~8)：");
	scanf("%d",&i);
	switch (i) {
	case 1:
		system("clear");
		inputc();
		goto start;
		break;
	case 2:
		system("clear");
		managementc();
		goto start;
		break;
	case 3:
		system("clear");
		inputs();
		goto start;
		break;
	case 4:
		system("clear");
		managements();
		goto start;
		break;
	case 5:
		system("clear");
		elective();
		goto start;
		break;
	case 6:
		system("clear");
		list();
		goto start;
		break;
	case 7:
		system("clear");
		save();
		goto start;
		break;
	case 8:
		system("clear");
		printf("感谢使用学生选课管理系统！\n");
		break;
	default:
		system("clear");
		printf("输入有误，请重新输入！\n");
		goto start;
		break;
	}
	return 0;
}
