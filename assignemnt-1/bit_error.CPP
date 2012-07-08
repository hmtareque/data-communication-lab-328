#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define LENGTH 10

int main()
{
 int c;

  printf("\nDETERMINE CHOICE\n");
  printf("\n\n\t PUT 1 FOR USER INPUT BITSTREAM");
  printf("\n\n\t PUT 2 FOR RANDOM BITSTREAM\n\n");
  

  printf("\n\t Choice: ");
  scanf("%d",&c);

  if(c>2 || c<1)
  {
  printf("\n\t Invaid Number!\n");
  }


  if(c==1)

  {


  char st1[ 100 ],st2[ 100 ], bit1[25],  bit2[25];
   int i,j,k,p=0, len, length;

   clrscr();
    printf("\n\n\t Original Bitstream : ");

   scanf("%s", &st1 );

   for(len=1; st1[len]!=NULL; len++)
   length=len+1;
   

   for( i = 0; i < length; i++ )
   {
	bit1[ i ] = st1[ i ];
	}

	

     printf("\n\n\t  Changed Bitstream : ");
	 scanf("%s", &st2 );

   for( i = 0; i < length; i++ )
   {
	bit2[ i ] = st2[ i ];
	}
	


	for(k=0; k<length; k++)
	{
	if(bit1[k]!=bit2[k])
	{
	p++;
	
        }
	}

        
    

        	printf("\n\n\t   Error Rate = %d / %d\n", p, length);
	    	printf("\t       Result = %2.0f\% ", ((float)(p)/length) * 100);
       

        getche();

       }













	    


	                 


             //  for( i = 0; i < length; i++)
            //    {
	     //		if(data[i] != cdata[i])
            //            k++;
	    //	}

	  
          //       }

	       

	
	



		

  
  
 


  if(c==2)
          {

	int num,i,k= 0;
	char data[LENGTH + 1], cdata[LENGTH + 1];
		for( i = 0; i < LENGTH; i++)
               {
			num = random(LENGTH);
			if(num <= 3)

			data[i] = '0';

			else

			data[i] = '1';
		}

				
		printf("\n\n\        Original Bitstream : ");

		for( i = 0; i < LENGTH; i++)
		 printf(" %c", data[i]);


	for( i = 0; i < LENGTH; i++)
                {
			num = random(LENGTH);
			if(num <= 4)

			cdata[i] = '0';

			else

			cdata[i] = '1';
		}

		printf("\n\n        Changed Bitstream : ");

		for(  i = 0; i < LENGTH; i++) printf(" %c", cdata[i]);


		for( i = 0; i < LENGTH; i++)
                {
			if(data[i] != cdata[i])
                        k++;
		}



		printf("\n\n\tError Rate = %d / %d\n", k, LENGTH);
		printf("\tResult = %2.0f\% ", ((float)(k)/LENGTH) * 100);


      getche();
      }
 return 0;
}