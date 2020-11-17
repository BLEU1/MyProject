/*查询可选课程*/
#include "defs.h"

void cheak()
{
	char e;
	struct course *c;
	struct student *s;
	int num2,i,j = 0,t = 0;
	printf("请输入学号：");
	scanf("%d",&num2);
	s = head2;
	while (s->num2 != num2 && s->next != NULL)
		s = s->next;
	if (s->num2 != num2) {
		printf("该学生信息不存在！\n");
		goto end;
	}
	c = head1;
	printf("可选课程编号：\n");
	while (c != NULL) {
		for (t = 0,i = 0;s->selectnum[i] != 0;i++)
			if (c->num1 == s->selectnum[i])
				t = 1;
		if (t == 0 && (c->selectpeo != c->toplimit)){
			printf("%d\n",c->num1);
			j++;
		}
		c = c->next;
	}
	if (j == 0) {
		printf("您已选完所有课程，无法再多选\n");
		goto end;
	}
	printf("选课(y/n)?:");
	getchar();
	e = getchar();
	i = 0;
	while (e == 'y') {
		selects(s);
		printf("继续选课(y/n)?:");
		getchar();
		e = getchar();
	}
	end:;
}
