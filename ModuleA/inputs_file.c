/*从文件录入学生信息*/
#include "defs.h"

void inputs_file()
{
	int i = 0;
	FILE *fp;
	char filepath[50];
	struct student *p1,*p2;
	n2 = 0;
	printf("输入导入文件的路径：");
	getchar();
	gets(filepath);
	if ((fp = fopen(filepath,"r")) == NULL) {
		printf("找不到%s文件！\n",filepath);
		exit(0);
	}
	p1 = p2 = (struct student *)malloc(sizeof(struct student));
	fread(p1,sizeof(struct student),1,fp);
	head2 = NULL;
	while (!feof(fp)) {
		i = 0;
		n2 = n2 + 1;
		if (n2 == 1)
			head2 = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (struct student *)malloc(sizeof(struct student));
		fread(p1,sizeof(struct student),1,fp);
	}
	p2->next = NULL;

}
