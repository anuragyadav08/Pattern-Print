//revese triangle 2 pattern print
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
for(k=i-1;k>0;k--)
 {
  printf("  ");
 }
  for(j=1;j<=n-i+1;j++)
  {
   printf("* ");
  }
  printf("\n");
}
getch();

}