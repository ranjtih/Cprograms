#include <stdio.h>
int main(void) {
char a[30];
int len,i;
printf("enter the string\n");
scanf("%s",a);
for(len=0;a[len]!='\0';len++);
for(i=0;i<len;i++)
{
	if(a[i]>='A'&&a[i]<='Z')
	{
		a[i]=a[i]+32;
	}
	else if(a[i]>='a'&&a[i]<='z')
	{
		a[i]=a[i]-32;
	}
}
printf("%s",a);
return 0;
}
