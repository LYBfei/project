#include<stdio.h>

int bj(int *a,int l,int r)
{
	int i,j,k,z;
	z=0;
	i=l;
	j=r;
	printf("lllllllllllllllll\n");
	k=a[i];
	printf("bbbbbbbbbbbbbbbbllll\n");
	while(i<j)
	{
	printf("cccccccccccccccbbbbbbbllll\n");

		while(i<j&&k<=a[j])
		{
			j--;
		}
		if(i<j)
		a[i]=a[j];
		while(i<j&&a[i]<=k)
		{
			i++;
		}
		if(i<j)
		a[j]=a[i];
	}


	a[i]=k;
	bj(a,l,i-1);
	bj(a,i+1,r);
	printf("deeeeeeeeeeeeeeeeeeeeeeeeeeddddddddddd\n");
	for(z=0;z<l;z++)
	printf("%d",a[z]);
	printf("ddddddddddddddddddd\n");
	return 0;
}

int main()
{
	int i=0;
	int s[5]={1,3,5,4,2};
	for (i=0;i<5;i++)
	printf("%d\t",s[i]);
	bj(s,0,5);
	printf("hhhhhhhhhhhhhhhhhhh\n");
	return 0;
}
