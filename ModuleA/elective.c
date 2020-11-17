/*选课主函数*/
#include "defs.h"

void elective()
{
	int i;
	printf("****学生选课****\n");
	printf("1.查询可选课程\n");
	printf("2.查询已选课程\n");
	printf("3.返回主菜单\n");
	scanf("%d",&i);
	switch (i) {
	case 1:
		cheak();
		break;
	case 2:
		hcheak();
		break;
	case 3:
		main();
		break;
	}
}
