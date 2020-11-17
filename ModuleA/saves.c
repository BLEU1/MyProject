/*存储学生信息*/
#include "defs.h"

void saves()
{
	FILE *fp;
	struct student *p;
	char filepath[50];
	printf("输入学生信息要保存的文件路径：");
	getchar();
	gets(filepath);
	if ((fp = fopen(filepath,"w")) == NULL) {
		printf("\n保存失败！\n");
		exit(0);
	}
	p = head2;
	while (p != NULL) {
		fwrite(p,sizeof(struct student),1,fp);
		p = p->next;
	}
	fclose(fp);
	printf("学生信息已保存！\n");
}
