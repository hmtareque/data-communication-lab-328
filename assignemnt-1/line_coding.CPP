#include<stdio.h>
#include<string.h>


int main(void)
{
  int c;

  printf("\nDETERMINE CHOICE\n");
  printf("\n\n\t PUT 1 FOR RZ");
  printf("\n\n\t PUT 2 FOR UNIPOLAR NRZ");
  printf("\n\n\t PUT 3 FOR NRZ-L");
  printf("\n\n\t PUT 4 FOR NRZ-I");
  printf("\n\n\t PUT 5 FOR MANCHESTER and DIFFERENCIAL MANCHESTER\n\n");


  printf("\n\t Choice: ");
  scanf("%d",&c);

  if(c>=6 || c<=0)
  {
  printf("\n\tInvaid Number!\n");
  }



  //code starting for RZ

  if(c==1)
  {
  char ch[50];
  int i, length;
  
  printf("\n\t Input Bitstream: ");
  while(scanf(" %s", ch )!= '\n')
  {

   for(i = 0; ch[i] != NULL; i++ );

   length = i;
   printf("\n|");

   for(i = 0; i < length; i++)
	{
	printf("    %c   |", ch[i]);
   	}

	printf("\n|");

  for(i = 0; i < length; i++)
	{
	printf("        |", ch[i]);
     	}

	printf("\n|");

  for(i = 0; i < length; i++)
	{
	if(ch[i] == '1')

		{
		printf("----|   |");
		}
        
	else if(ch[i] == '0')
		{
		printf("        |");
		}


	 }


	 printf("\n|");

         for(i = 0; i < length; i++)
		{
		if(ch[i] == '1')

		     {
	       		printf("____|___|");
		     }

		else if(ch[i] == '0')
		     {
			printf("________|");
		     }
		}


		printf("\n|");

		for(i = 0; i < length; i++)
		{
			if(ch[i] == '0')
			{
				printf("    |   |");
			}
			else if(ch[i] == '1')
			{
				printf("        |");
			}
		}

		printf("\n|");

		for(i = 0; i < length; i++)
		{
			if(ch[i] == '0')
			{
				printf("----|   |");
			}
			else if(ch[i] == '1')
			{
				printf("        |");
			}


		}

	    printf("\n\n             RZ");
  }
	return(0);
}


   //code of RZ end




   //starting code for NRZ


else if(c==2)
{

char ch[20];
  int i, length;

  printf("\n\n\t Input Bitstream: ");
  while(scanf(" %s", ch )!= '\n')
  {
	   	for(i = 0; ch[i] != NULL; i++ )
	   	{

		}
                printf("\n\n");

		length = i;


			printf("|");
			for(i = 0; i < length; i++)
			{
				printf("  %c ", ch[i]);
				if(ch[i + 1] != ch[i])
				printf("|");
			}

			printf("\b\n|");
			for(i = 0; i < length; i++)
			{
				if(ch[i] == '1')         //
				{
					if(ch[i - 1] == '0')
					printf("|");
					printf("----");
					if(ch[i + 1] == '0')
					{
						 printf("|");
					}
				}
				else printf("    ");
			}
			printf("\n|");
			for(i = 0; i < length; i++)
			{
			if(ch[i] == '0')                       //
			{
				if(ch[i - 1] == '1')printf("|");
				printf("____");
				if(ch[i + 1] == '1')printf("|");
			}
			else printf("    ");
			}
			printf("\n");
			for(i = 0; i < length * 5; i++) printf("-");

		     printf("\n\n       Unipolar NRZ");
  }



}

//code end for NRZ




//code starting for NRZ-L

else if(c==3)
{

char ch[20];
  int i, length;
  
  printf("\n\n\t Input Bitstream: ");
  while(scanf(" %s", ch )!= '\n')
  {
		for(i = 0; ch[i] != NULL; i++ );
		
		length = i;
                printf("\n");

		
			printf("\n|");
			for(i = 0; i < length; i++)
			{
				printf("  %c ", ch[i]);
				if(ch[i + 1] != ch[i])printf("|");
			}

			printf("\b\n|");
			for(i = 0; i < length; i++)
			{
				if(ch[i] == '1')       //
				{
					printf("    ");
				}
				else if(ch[i] == '0')       //
				{
					printf("____");
				}

				if(ch[i] != ch[i+1])
				{
					printf("|");
				}
			}
			printf("\b\n|");
			for(i = 0; i < length; i++)
			{
				if(ch[i] == '0')
				{
					if(ch[i - 1] == '1') printf("|");
					printf("    ");
					if(ch[i + 1] == '1')
					{
						 printf("|");
					}
				}
				else printf("    ");
			}
			printf("\n|");

			for(i = 0; i < length * 5; i++) printf("-");

			printf(">\n|");

			for(i = 0; i < length; i++)
			{
			if(ch[i] == '1')                 //
			{
				if(ch[i - 1] == '0')printf("|");
				printf("____");
				if(ch[i + 1] == '0')printf("|");
			}
			else printf("    ");
			}
			printf("\n");
			printf("\n\n\t      NRZ-L");


	   }
           }


                         //end of coding NRZ-L






			//start coding for NRZ-I

   else if(c==4)

   {
  
 char ch[50];
  int i, length;
  
  printf("\n\n\t Input Bitstream: ");
  while(scanf(" %s", ch )!= '\n')
  {
		for(i = 0; ch[i] != NULL; i++ );
		
		length = i;
		printf("\n\n\n|");
		for(i = 0; i < length; i++)
		{
			printf("  %c ", ch[i]);              
			if(ch[i + 1] != ch[i])printf("\b|"); 
																
		}

		printf("\b\n|");

		for(i = 0; i < length; i++)
		{
			printf("    ", ch[i]);              
			if(ch[i + 1] != ch[i])printf("\b|");
		}

		printf("\b\n|");
		if(ch[0] == '0')
		{
			if(ch[1] == '1')printf("---|");
			else printf("----");
		}



		for(i = 0; i < length; i++)
		{
			if(ch[i] == '1')
			{
				int count = 0;
				for(int j = 0; j <= i; j++)
				{
               if(ch[j] == '1') count++;
				}
				if(count != 0 && ((count % 2) == 0))
				{                                       
					printf("----");
					if(ch[i + 1] == '1')printf("\b|");
				}
				
				else
            {
					printf("    ");
					if(ch[i + 1] == '1')printf("\b|");
            }
				
			}
			else if(ch[i] == '0')
			{
				int count = 0;
				for(int j = 0; j <= i; j++)
            {
               if(ch[j] == '1') count++;
				}
				if(count != 0 && ((count % 2) == 0))
				{
					printf("----");                       
					if(ch[i + 1] == '1')printf("\b|");    
				}
				else if ((count % 2) != 0 && i != 0)
				{
					printf("    ");
					if(ch[i + 1] == '1') printf("\b|");
				}

			}
		}
		printf("\n|");
		for(i = 0; i < length*4 + 5; i++)
		{
			printf("-");
		}

		printf("\n|");

		if(ch[0] == '1')
		{
			printf("____");
			if(ch[1] == '1')
			{
				printf("\b|");
			}
		}


		for(i = 0; i < length; i++)
		{
			if(ch[i] == '1')
			{
				int count = 0;
				for(int j = 0; j <= i; j++)
            {
               if(ch[j] == '1') count++;
				}
				if(count != 0 && (count % 2) != 0 && i != 0)   
				{                                               
					if(ch[i - 1] == '1')printf("\b|");
					printf("____");
					if(ch[i + 1] == '1')printf("\b|");
				}
				
				else if((count % 2) == 0 && i != 0)printf("    ");
			}
			else if(ch[i] == '0')
			{
				int count = 0;
				for(int j = 0; j <= i; j++)
            {
               if(ch[j] == '1') count++;
				}
				if(count != 0 && (count % 2) != 0)  
				{                                 
					printf("____");
					if(ch[i + 1] == '1')printf("\b|");
				}
				else if ((count % 2) == 0)
				{
					printf("    ");
					if(ch[i + 1] == '1') printf("\b|");

  }
  
  }

  }
  printf("\n\n\n       NRZ-I");
  }
  
  }

    // end code for NRZ-I


    // start coding for Manchester


  else if(c==5)
  {
  char ch[50];
  int i, length;
  
  printf("\n\n\t Input Bitstream: ");
  while(scanf(" %s", ch )!= '\n')
  {
		for(i = 0; ch[i] != NULL; i++ );
		
		length = i;
		printf("\n\n|");
		for(i = 0; i < length; i++)
		{
			printf("    %c   |", ch[i]);              

		}

		printf("\n|");

		for(i = 0; i < length; i++)
		{
			printf("        |", ch[i]);              
			
		}

		printf("\n|");

		for(i = 0; i < length; i++)
		{
			if(ch[i] == '0')   //
			{
				printf("----|   |");
			}


			else if(ch[i] == '1')      //
			{
				printf("    |---|");
			}
		}
		printf("\n|");

		for(i = 0; i < length; i++)
		{
			if(ch[i] == '1')      //
			{
				printf("____|___|");
			}
			else if(ch[i] == '0')      //
			{
				printf("____|___|");
			}
		}
		printf("\n|");

		for(i = 0; i < length; i++)
		{
			if(ch[i] == '0')      //
			{
				printf("    |   |");
			}
			else if(ch[i] == '1')        //
			{
				printf("    |   |");
			}
		}

		printf("\n|");
		for(i = 0; i < length; i++)
		{
			if(ch[i] == '0')          //
			{
				printf("    |---|");
			}
			else if(ch[i] == '1')       //
			{
				printf("----|   |");
			}
		}
		printf("\n|\n|\n");
		printf("\t\tManchester\n|\n|\n|");






		 // end coding for manchester




		// start code for differential manchester


	
		for(i = 0; i < length; i++)
		{
			printf("        |", ch[i]);              

		}

		printf("\n|");

		for(i = 0; i < length; i++)
		{
			if(ch[i] == '1')          //
			{
				int count = 0;
				for(int j = 0; j <= i; j++)
				{
               if(ch[j] == '1') count++;                  //
				}
				if(count != 0 && ((count % 2) == 0))
				{                                       
					printf("    ____|");
				}
				
				else
            {
					printf("____    |");
				}
				
			}
			else if(ch[i] == '0')     //
			{
				int count = 0;
				for(int j = 0; j <= i; j++)
            {
               if(ch[j] == '1') count++;            //
				}
				if(count % 2 == 0)
				{
					printf("     ___|");                      
					    
				}
				else if ((count % 2) != 0)
				{
					printf("____    |");
					
				}

			}
		}
		printf("\n|");

		for(i = 0; i < length; i++)
		{
			printf("    |   |", ch[i]);              
			
		}

		printf("\n|");
		for(i = 0; i < length; i++)
		{
			printf("____|___|", ch[i]);              
		}
		printf("\n|");

		for(i = 0; i < length; i++)
		{
			printf("    |   |", ch[i]);              
		}
		printf("\n|");

		for(i = 0; i < length; i++)
		{
			if(ch[i] == '1')         //
			{
				int count = 0;
				for(int j = 0; j <= i; j++)
				{
               if(ch[j] == '1') count++;      //
				}
				if(count != 0 && ((count % 2) == 0))
				{                                       
					printf("____|   |");
				}
				
				else
            {
					printf("    |___|");
				}
				
			}
			else if(ch[i] == '0')         //
			{
				int count = 0;
				for(int j = 0; j <= i; j++)
            {
	       if(ch[j] == '1') count++;            //
				}
				if(count % 2 == 0)
				{
					printf("____|   |");                 
					    
				}
				else if ((count % 2) != 0)
				{
					printf("    |___|");
					
				}

			}
		}
		printf("\n|");

		for(i = 0; i < length; i++)
		{
			printf("        |", ch[i]);              
		}
		printf("\n|");

		for(i = 0; i < length; i++)
		{
			printf("        |", ch[i]);              
		}

		printf("\n|\n|\t\tDifferential Manchester");
	 
  }
  }
  }


		 // end coding for differential manchester









