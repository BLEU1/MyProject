/*增加学生信息*/
#include "defs.h"

void inserts(struct student *in)
{
	struct student *p0,*p1,*p2;
	p0 = in;
	p1 = head2;
	if (head2 == NULL) {
		head2 = p0;
		p0->next = NULL;
	} else {
		while ((p0->num2 > p1->num2) && (p1->next != NULL)) {
			p2 = p1;
			p1 = p1->next;
		}
		if (p0->num2 <= p1->num2) {
			if (head2 == p1)
				head2 == p0;
			else 
				p2->next = p0;
			p0->next = p1;
		} else {
			p1->next = p0;
			p0->next = NULL;
		}
	}
	n2 = n2 + 1;
}
