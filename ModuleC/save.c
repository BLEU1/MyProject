/*存储信息主函数*/
#include "defs.h"

void save()
{
	int i;
	printf("****存储信息****\n");
	printf("1.存储课程信息\n");
	printf("2.存储学生信息\n");
	printf("3.返回主菜单\n");
	printf("请输入（1~3)：");
	scanf("%d",&i);
	switch (i) {
	case 1:
		savec();
		break;
	case 2:
		saves();
		break;
	case 3:
		main();
		break;
	}
}
