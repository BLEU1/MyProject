/*从键盘录入课程信息*/
#include "defs.h"

void inputc_keyboard()
{
	struct course *p1,*p2;
	n1 = 0;
	p1 = p2 = (struct course*)malloc(sizeof(struct course));
	printf("课程编号\t课程名称\t课程性质\t授课学时\t学分\t课程已选人数\t课程人数上限\n");
	scanf("%d%s%s%d%d%d%d",&p1->num1,p1->name1,p1->type,&p1->hour,&p1->score,&p1->selectpeo,&p1->toplimit);
	head1 = NULL;
	while (p1->num1 != 0) {
		n1 = n1 + 1;
		if (n1 == 1)
			head1 = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (struct course *)malloc(sizeof(struct course));
		scanf("scanf%d%s%s%d%d%d%d",&p1->num1,p1->name1,p1->type,&p1->hour,&p1->score,&p1->selectpeo,&p1->toplimit);
	}
	p2->next = NULL;

}
