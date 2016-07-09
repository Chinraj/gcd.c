#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("\n enter two integers");
scanf("%d%d",&a,&b);
while(a!=b)
{
if(a>b)
a-=b;
else
b-=a;
}
printf("GCD is : %d",a);
getch();

}
