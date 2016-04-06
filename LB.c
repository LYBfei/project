#include<stdio.h>
#include<stdlib.h>
//#define NULL 0
#define LEN sizeof(struct stu)
struct stu
{
	int num;
	struct stu * next;
};
int n;
struct stu *creat()
{
	struct stu * head;
	struct stu * p1,* p2;
	n=0;
	p2=p2=((struct stu *)malloc(LEN));
	scanf("%d",&p1->num);
	* head=NULL;
	while (p1->num!=0)
	{
		n=n+1;
		if(n==1)
			head=p1;
		else 
			p2->next=p1;
		p2=p1;
		p1=(struct stu *)malloc(LEN);
		scanf("%d",&p1->num);
	}
//	p2->num=NULL;
	return head;
}
void print(head)
struct stu *head;
{
	struct stu *p;
	printf("%d\n",n);
	if(* head!=NULL)
		p=head;
	do{
		printf("%d\n",p->num);
		p=p->next;
	}
	while(p!=NULL);
}
int main()
{
struct stu * p3;
//p3=NULL;
p3=creat();
print(p3);
return 0;
}
