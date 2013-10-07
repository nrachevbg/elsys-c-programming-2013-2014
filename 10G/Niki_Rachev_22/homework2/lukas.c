#include <stdio.h>

int main() {
  
        unsigned long long int u,j,k;
        int i;
        u=2;
        j=1;
	printf("%llu\n" , u);
	printf("%llu\n" , j);
	for (i=3;i<=100;i++)
{
	c=u+j;
	printf("%d - %llu\n" ,i,k);
	u=j;
	j=k;
}
	return 0;
}

