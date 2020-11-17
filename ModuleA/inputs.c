/*录入学生信息主函数*/
#include "defs.h"

void inputs()
{
	int i;
	printf("****录入学生信息****\n");
	printf("1.从键盘录入\n");
	printf("2.从文件录入\n");
	printf("3.返回主菜单\n");
	printf("请选择（1~3)：");
	scanf("%d",&i);
	switch (i) {
	case 1:
		inputs_keyboard();
		break;
	case 2:
		inputs_file();
		break;
	case 3:
		main();
		break;
	}
}
