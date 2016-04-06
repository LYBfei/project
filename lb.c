#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define LEN sizeof(struct stu)
struct stu
{
	int num;
	struct stu *next;
	};
	struct stu * creat()
	{
	struct stu * head;
	struct stu * p1;
	struct stu * p2;
	int n= 0;
	head=NULL;
	p1=NULL;
	p2=p1=(struct stu *)malloc(LEN);
	scanf("%d",&p1->num);
	while(p1->num!=0)
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
		p2->next=NULL;
		return (head);
}
	
	void print(head)
	struct stu *head;
	{
		struct stu * p3;
		p3=head;
		if(head!=NULL)
		{
			while(p3!=NULL)
			
			{printf("%d\t",p3->num);
			p3=p3->next;
				}
			}
		}
		int main()
		{
			struct stu *p;
			p=creat();
			print(p);
			return 0;
			}
