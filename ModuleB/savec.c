/*存储课程*/
#include "defs.h"

void savec()
{
	FILE *fp;
	struct course *p;
	char filepath[50];
	printf("输入课程信息要保存的文件路径：");
	getchar();
	gets(filepath);;
	if ((fp = fopen(filepath,"w")) == NULL) {
		printf("\n保存失败！\n");
		exit(0);
	}
	p = head1;
	while (p != NULL) {
		fprintf(fp,"%d %s %s %d %d %d %d",p->num1,p->name1,p->type,p->hour,p->score,p->selectpeo,p->toplimit);
		p = p->next;
	}
	fclose(fp);
	printf("课程信息已保存！\n");
}
