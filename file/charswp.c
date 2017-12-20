#include<stdio.h>
int main(void)
{
char a[10];
int count,i,j,k;
scanf("%s",&a);
for(i=0;i<strlen(a);i++)
{
count=1;
for(j=i+1;j<strlen(a);j++)
{
if(a[i]==a[j])
{
count++;
for(k=j+1;k<strlen(a);k++) 
a[k-1]=a[k];
a[k-1]='\0';
}
}
printf("%c - %d\n",a[i],count);
}
return 0;
}
