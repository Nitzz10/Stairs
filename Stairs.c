#include <stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number of stairs:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			{
			for(j=0;j<i;j++)
			printf("01");
		}
		printf(" ");
		}
		return 0;
}
