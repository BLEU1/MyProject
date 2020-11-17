/*录入课程主函数*/
#include "defs.h"

void inputc()
{
	int i;
	printf("****录入课程信息****\n");
	printf("1.从键盘录入\n");
	printf("2.从文件录入\n");
	printf("3.返回主菜单\n");
	printf("请选择（1~3)：\n");
	scanf("%d",&i);
	switch (i) {
	case 1:
		inputc_keyboard();
		break;
	case 2:
		inputc_file();
		break;
	case 3:
		main();
		break;
	}
}
