/*查询已选课程,包含退课*/
#include "defs.h"

void hcheak()
{
	char c;
	struct course *p1;
	struct student *p2;
	int num2,i,totals = 0; //totals:学分
	printf("请输入学号：");
	scanf("%d",&num2);
	p2 = head2;
	while (p2->num2 != num2 && p2 != NULL)
		p2 = p2->next;
	if (p2 == NULL) {
		printf("不存在该学号学生！\n");
		goto end;
	}
	if(p2->selectnum[0] == 0) {
		printf("没有选课信息！\n");
		goto end;
	}
	printf("已选课程编号：\n");
	for (i = 0;p2->selectnum[i] != 0;i++) {
		printf("%d\n",p2->selectnum[i]);
		p1 = head1;
		while (p1->num1 != p2->selectnum[i])
			p1 = p1->next;
		totals = totals + p1->score;
	}
	printf("总学分：%d\n",totals);
	printf("是否退课(y/s)?:");
	getchar();
	c = getchar();
	while (c == 'y') {
		back(p2);
		printf("继续退课(y/s)?:");
		getchar();
		c = getchar();
		(p2->selectcount)--;
	}
	end:;
}
