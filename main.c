#include"header.h"
main()
{
	int a,b,c;
	printf("Enter value of A and B\n");
	scanf("%d%d",&a,&b);
	c=add(a,b);
	printf("Add=%d\n",c);
	c=sub(a,b);
	printf("Sub=%d\n",c);
	c=mul(a,b);
	printf("Mul=%d\n",c);
}
