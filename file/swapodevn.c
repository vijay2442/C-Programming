#include <stdio.h>

int main(void) 
{
	char a[10];
	int i,temp;
	scanf("%s",&a);
	for(i=0;i<strlen(a);i=i+2)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		
	}
	printf("%s",a);
	return 0;
