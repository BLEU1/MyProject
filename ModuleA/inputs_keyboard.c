/*从键盘录入学生信息*/
#include "defs.h"

void inputs_keyboard()
{
	int i;
	struct student *p1,*p2;
	n2 = 0;
	p1 = p2 = (struct student *)malloc(sizeof(struct student));
	printf("学生学号\t学生姓名\n");
	scanf("%d%s",&p1->num2,p1->name2);
	p1->selectcount = 0;
	for (i = 0;i < 20;i++)
		p1->selectnum[i] = 0;
	head2 = NULL;
	while (p1->num2 != 0) {
		n2 = n2 + 1;
		if (n2 == 1)
			head2 = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (struct student *)malloc(sizeof(struct student));
		scanf("%d%s",&p1->num2,p1->name2);
		p1->selectcount = 0;
		for (i = 0;i < 20;i++)
			p1->selectnum[i] = 0;
	}
	p2->next = NULL;

}
