/*新增课程*/
#include "defs.h"

void insertc(struct course *in)
{
	struct course *p0,*p1,*p2;
	p0 = in;
	p1 = head1;
	if (head1 == NULL) {
		head1 = p0;
		p0->next = NULL;
	} else {
		while ((p0->num1 > p1->num1) && (p1->next != NULL)){
			p2 = p1;
			p1 = p1->next;
		}
		if (p0->num1 <= p1->num1) {
			if (head1 == p1)
				head1 = p0;
			else
				p2->next = p0;
			p0->next = p1;
		} else {
			p1->next = p0;
			p0->next = NULL;
		}
	}
	n1 = n1 + 1;
}
