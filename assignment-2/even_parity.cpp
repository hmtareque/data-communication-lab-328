#include<stdio.h>
#include<conio.h>

void main()
{
 int i=0,k=0,j,par[20],flag = 1;

 printf("\n Length of the Bitstream : ");
 scanf("%d",&j);
 printf("\n     Input the Bitstream : ");
 

 do
 {
  scanf("%d",&par[i]);
   if(par[i]==1)
   {k++;}
  i++;
 } while(i<j);

 i=0;
 if((k%2)==0)
 flag=0;

 printf("\n      The Data Stream is : ");

  do
 {
  printf(" %d ",par[i]);
  i++;
 } while(i<j);
printf("( %d )",flag);

getche();
 
}