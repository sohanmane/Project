#include<stdio.h>
int add(int,int);
int sub(int,int);
main()
{
	int a,b,c;
	printf("Enter value of A and B\n");
	scanf("%d%d",&a,&b);
	c=add(a,b);
	printf("Add=%d\n",c);
	c=sub(a,b);
	printf("Sub=%d\n",c);
}
