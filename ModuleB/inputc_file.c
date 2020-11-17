/*从文件录入课程信息*/
#include "defs.h"

void inputc_file()
{
	FILE *fp;
	char filepath[50];
	struct course *p1,*p2;
	n1 = 0;
	printf("输入导入文件的路径：");
	getchar();
	gets(filepath);
	if ((fp = fopen(filepath,"r"))) {
		printf("找不到%s文件\n",filepath);
		exit(0);
	}
	p1 = p2 = (struct course*)malloc(sizeof(struct course));
	fscanf(fp,"%d%s%s%d%d%d%d",&p1->num1,p1->name1,p1->type,&p1->hour,&p1->score,&p1->selectpeo,&p1->toplimit);
	head1 = NULL;
	while (!feof(fp)) {
		n1 = n1 + 1;
		if (n1 == 1)
			head1 = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (struct course*)malloc(sizeof(struct course));
		fscanf(fp,"%d%s%s%d%d%d%d",&p1->num1,p1->name1,p1->type,&p1->hour,&p1->score,&p1->selectpeo,&p1->toplimit);
	}
	p2->next = NULL;

}
