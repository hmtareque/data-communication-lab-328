#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define R 8
#define S 10



int main()
{
	int counter, bits=0, redun[2 * S];

   int r, m, i, j, k, n;

   char data[S], codeword[2 * S];

   char r1[R], r2, r4, r8;

   printf("\n\tTHE NUMBER OF DATA BITS : ");
   while(1)
   {
      scanf(" %d", &m);
   printf("\n\t      INPUT BIT PATTERN : ", m);
      for(i = 0; i < m; i++)
      {
      	scanf(" %c", &data[i]);
      }
      for(i = 2; i < R; i++)
      {
      	if(pow(2, i) >= (m + i + 1))
         {
         	r = i;
         	break;
         }
      }

      for(i = 0; i < m + r; i++)

      codeword[i] = '1';                 //put all 1

      int p;
      for(i = 0; i < r; i++)
      {
         p = (int)pow(2, i);

		 codeword[p - 1] = '0';                      // put 0 for rd bit
      }


      for(i = (m + r) - 1, j = 0; i >= 0; i--)
      {
	if(codeword[i] == '0')
         {
         	i--;
         }
         else if(codeword[i] == '1')
         {
         	codeword[i] = data[j++];
         }
      }


     

      for(i = 1, j = 0; i <= (m + r); i+=2)
     	{
        	redun[j++] = i - 1;
     	}



      // coding for r1

      int rl = j, pk = 0;


      for(j = rl - 1; j >= 0; j--)
      {
        	if(codeword[redun[j]] == '1')
        	{

           	pk++;
        	}
      }

      if(pk % 2 == 0)
      r1[0] =  '0';
      else
      r1[0] = '1';


	  printf("\n\n\t The value for r1 = %c ", r1[0]);



     //coding for r2

	  counter=1,bits=0;
	  for(i=0;i<(m+r-1);i++)
	  {
		for(n=counter;n<counter+2;n++)
		 {if(codeword[n]=='1')
		   bits++;

		 }

		 counter+=3;
		 
	  }
	  if((bits%2)==1)
	  r2='1';
	  else r2 = '0';
	  printf("\n\n\t The value for r2 = %c ",r2);



 // coding for r4


	 if(m>=3){
	 counter=3,bits=0;
	  for(i=0;i<(m+r-1);i++)
	  { 
		for(n=counter;n<counter+4;n++)
		 {if(codeword[n]=='1')
		   bits++;
           
		 }
		 
         counter+=5;
	  }
	  if((bits%2)==1)
	  r4='1';
	  else r4 = '0';
	  printf("\n\n\t The value for r4 = %c",r4);
	 }

  //  coding for r8

	 if(m>=5){
	 counter=8,bits=0;
	  for(i=0;i<(m+r-1);i++)
	  { 
		for(n=counter;n<counter+8;n++)
		 {if(codeword[n]=='1')
		   bits++;
           
		 }
		 
		 counter+=5;
		 
	  }
	  if((bits%2)==1)
	  r8='1';
	  else r8 = '0';
	  printf("\n\n\t The value for r8 = %c",r8);
	 }


	   codeword[0]= r1[0];
   	codeword[1]= r2;
   	codeword[3]= r4;
      codeword[7]= r8;


	  printf("\n\n\t The Code Word is: ");
	  for(i=m+r-1;i>=0;i--)
	  printf(" %c",codeword[i]);      
   }
	//getche();
}
