//hollow triangle 1
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n;
clrscr();
printf("Enter No. of Row :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  for(j=1;j<=i;j++)
  {
   if(i==1||j==1||i==n||j==n||i==j)
   {
   printf("* ");
   }
   else
   {
    printf("  ");
   }
  }
  printf("\n");
}
getch();

}