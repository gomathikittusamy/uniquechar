#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int n,i,j,count;
clrscr();
printf("Enter the string");
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
count=0;
for(j=0;j<n;j++)
{
if(a[i]==a[j])
count++;
}
if(count==1)
printf("%c",a[i]);
}
getch();
}
