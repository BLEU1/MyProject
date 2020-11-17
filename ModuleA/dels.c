/*删除学生信息*/
#include "defs.h"

void dels(int num2)
{
	struct student *p1,*p2;
	if (head2 == NULL) {
		printf("\n没有学生信息！\n");
		goto end;
	}
	p1 = head2;
	while (num2 != p1->num2 && p1->next != NULL) {
		p2 = p1;
		p1 = p1->next;
	}
	if (num2 == p1->num2) {
		if (p1 == head2)
			head2 = p1->next;
		else
			p2->next = p1->next;
		printf("已删除该学号的学生！\n");
		n2 = n2 -1;
	} else {
		printf("没有该学号的学生！\n");
	}
	end:;
}
