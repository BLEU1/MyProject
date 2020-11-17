/*课程管理主函数*/
#include "defs.h"

void managementc()
{
	struct course *p1;
	int i,num1;
	printf("****课程管理****\n");
	printf("1.新增课程\n");
	printf("2.删除课程\n");
	printf("3.返回主菜单\n");
	printf("请选择（1~3)：");
	scanf("%d",&i);
	switch (i) {
	case 1:
		p1 = (struct course *)malloc(sizeof(struct course));
		printf("课程编号\t课程名称\t课程性质\t授课学时\t学分\t课程已选人数\t课程人数上限\n");
		scanf("%d%s%s%d%d%d%d",&p1->num1,p1->name1,p1->type,&p1->hour,&p1->score,&p1->selectpeo,&p1->toplimit);
		insertc(p1);
		break;
	case 2:
		printf("请输入要删除课程的编号：");
		scanf("%d",&num1);
		delc(num1);
		break;
	case 3:
		main();
		break;
	}
}
