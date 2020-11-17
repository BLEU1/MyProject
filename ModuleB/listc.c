/*输出课程信息*/
#include "defs.h"

void listc()
{
	struct course *p;
	p = head1;
	printf("课程编号\t课程名称\t课程性质\t授课学时\t学分\t课程已选人数\t课程人数上限\n");
	while (p != NULL) {
		printf("%-8d %10s %10s %4d %4d %8d %8d\n",p->num1,p->name1,p->type,p->hour,p->score,p->selectpeo,p->toplimit);
		p = p->next;
	}
}
