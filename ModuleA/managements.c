/*学生信息管理主函数*/
#include "defs.h"

void managements()
{
	struct student *in;
	int i,num2;
	printf("****学生信息管理****\n");
	printf("1.新增学生信息\n");
	printf("2.删除学生信息\n");
	printf("3.返回主菜单\n");
	printf("请选择（1~3)：");
	scanf("%d",&i);
	switch (i) {
	case 1:
		in = (struct student *)malloc(sizeof(struct student));
		printf("学生学号\t学生姓名\n");
		scanf("%d%s",&in->num2,in->name2);
		in->selectnum[0] = 0;
		in->selectcount = 0;
		inserts(in);
		break;
	case 2:
		printf("请输入要删除学生的学号：");
		scanf("%d",&num2);
		dels(num2);
		break;
	case 3:
		main();
		break;
	}

}
