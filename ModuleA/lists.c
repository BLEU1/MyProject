/*输出学生信息*/
#include "defs.h"

void lists()
{
	struct student *p;
	p = head2;
	printf("学生学号\t学生姓名\t已选课程数\n"); 
	while (p != NULL) {
		printf("%-4d %10s %4d\n",p->num2,p->name2,p->selectcount);
		p = p->next;
	}
}
