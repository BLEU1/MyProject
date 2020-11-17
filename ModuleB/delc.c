/*删除课程*/
#include "defs.h"

void delc(int num1)
{
	struct course *p1,*p2;
	if (head1 == NULL) {
		printf("\n没有课程信息！\n");
		goto end;
	}
	p1 = head1;
	while (num1 != p1->num1 && p1->next != NULL) {
		p2 = p1;
		p1 = p1->next;
	}
	if (num1 == p1->num1) {
		if (p1 == head1)
			head1 = p1->next;
		else
			p2->next = p1->next;
		printf("已删除该编号的课程！\n");
		n1 = n1 - 1;
	} else {
		printf("没有该编号的课程！\n");
	}
	end:;
}
