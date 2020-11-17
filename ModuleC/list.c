/*查看信息主函数*/
#include "defs.h"

void list()
{
	int i;
	printf("****查看信息****\n");
	printf("1.查看课程信息\n");
	printf("2.查看学生信息\n");
	printf("3.返回主菜单\n");
	printf("请选择（1~3)：");
	scanf("%d",&i);
	switch (i) {
	case 1:
		listc();
		break;
	case 2:
		lists();
		break;
	case 3:
		main();
		break;
	}
}
