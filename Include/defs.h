#include <stdio.h>
#include <stdlib.h>
int n1,n2;
struct course *head1;
struct student *head2;
void back(struct student *p);
void cheak();
void dels(int num2);
void elective();
void hcheak();
void inputs();
void inputs_file();
void inputs_keyboard();
void inserts(struct student *in);
void lists();
void managements();
void saves();
void selects(struct student *s);
void delc(int num1);
void inputc();
void inputc_file();
void inputc_keyboard();
void insertc(struct course *in);
void listc();
void managementc();
void savec();
void list();
void save();
int main();


//课程信息结构体
struct course
{
	int num1; //课程编号
	char name1[50]; //课程名称
	char type[20]; //课程性质
	int hour; //授课学时
	int score; //学分
	int selectpeo; //课程已选人数
	int toplimit; //课程人数上限
	struct course *next;
};

//学生信息结构体
struct student
{
	int num2; //学号
	char name2[50]; //姓名
	char selectnum[50]; //已选课程列表
	int selectcount; //已选课程数量
	struct student *next;
};
