#include<stdio.h>
#include<malloc.h>
#define LEN sizeof(struct stu)

struct stu
{
	int num;
	char name[20];
	struct stu *next;
};
struct stu *cre()
{
	struct stu *p1,*p2;
	struct stu *head;
	int n;
	n=0;
	head=NULL;
	FILE *fp=fopen("./student","w+");
	p2=p1=(struct stu *)malloc(LEN);
	scanf("%d",&p1->num);
	scanf("%s",p1->name);
	fwrite(&p1->num,sizeof(struct stu),1,fp);
	fwrite(p1->name,sizeof(struct stu),1,fp);

	fclose(fp);
	while(p1->num!=0&&p1->name!=0)
	{
		n++;
		if(n==1)
		head=p1;
		else
		p2->next=p1;
		p2=p1;
		p1=(struct stu *)malloc(LEN);
		scanf("%d",&p1->num);
		scanf("%s",p1->name);
		fwrite(&p1->num,sizeof(struct stu),1,fp);
		fwrite(p1->name,sizeof(struct stu),1,fp);

		fclose(fp);
	}
	p2=NULL;
	return head;
}

/*void save(struct stu *head)

{
	struct stu *p1;
	p1=head;
	FILE *fp=fopen("./stu","w+");
	while(p1!=NULL)
	{
		fwrite(p1,sizeof(struct stu),1,fp);
		p1=p1->next;
	}
	fclose(fp);
}
*/
void pri(struct stu *head)
{
	struct stu *p1;
	p1=head;
	while(p1!=NULL)
	{
		printf("%d  %s",p1->num,p1->name);
		p1=p1->next;
	}
}


int main(void)
{
	struct stu *p;
	p=cre();
//	save(p);
	pri(p);
	return 0;
}
