/*学生选课*/
#include "defs.h"

void selects(struct student *s)
{
	struct course *p;
	int num1,i;
	printf("请输入选择课程的课程编号：");
	scanf("%d",&num1);
	for (i = 0;s->selectnum[i] != 0;i++); //选了i门课
	s->selectnum[i]=num1;
	(s->selectcount)++;
	p = head1;
	while (p->num1 != num1)
		p = p->next;
	(p->selectpeo)++;
}
