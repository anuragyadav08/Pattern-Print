//hollow triangle 2
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n;
clrscr();
printf("Enter No. of Row :");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(k=i-1;k>0;k--)
 {
  printf("  ");
 }
  for(j=1;j<=n-i+1;j++)
  {
  if(i==n||j==n||i==1||j==1||i==(n-j+1))
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