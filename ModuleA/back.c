/*退课*/
#include "defs.h"

void back(struct student *p)
{
	struct course *p1;
	int num1,i,j;
	printf("请输入退课的课程编号：\n");
	scanf("%d",&num1);
	p1 = head1;
	while (p1->num1 != num1)
		p1 = p1->next;
	for (i = 0;p->selectnum[i] != num1;i++);
	for (j = i;p->selectnum[j] != 0;j++)
		p->selectnum[j] = p->selectnum[j+1];
	p->selectnum[--j] = 0;
	(p1->selectpeo)--;
	printf("退课成功！\n");
}
