#include <stdio.h>
#include <conio.h>

void crc();
void result();
void data();


int trans_bit = 8, div_bit = 4;
int bit[ 10 ];

int  divisor[ 4 ] = { 1, 0, 0, 1 };

void main() {

   data();
}

void crc() {
   int i, j, c_num, total_bit, total[ 15 ], value[ 15 ];

   total_bit = trans_bit + div_bit - 1;


   for( i = j = 0; i < trans_bit; i++, j++ )
   	total[ j ] = bit[ i ];
   for( i = 1; i < div_bit; i++, j++ )
   	total[ j ] = 0;

   for( i = 0; i < div_bit; i++ )

   value[ i ] = total[ i ];

   for( c_num = 0; c_num < trans_bit; c_num++ ) {

      if( value[ 0 ] == 1 ) {
      	for( i = 1; i < div_bit; i++ )
      		if( value[ i ] == divisor[ i ] )

            value[ i - 1 ] = 0;


         	else		value[ i - 1 ] = 1;
      }
      else {
      	for( i = 1; i < div_bit; i++ )
         	value[ i - 1 ] = value[ i ];
      }
   }

   printf("\n\n\tCode word : ");
   for( i = 0; i < trans_bit; i++ )
   	printf(" %d", bit[ i ] );

   for( i = 0; i < div_bit - 1; i++ )
   	printf(" %d", value[ i ] );

   getch();
}

void result() {
	int i;

   clrscr();

   printf("\n\n\tDivisor    : ");
   for( i = 0; i < div_bit; i++ )
   	printf(" %d", divisor[ i ] );

    printf("\n\n\tData word  : ");
	for( i = 0; i < trans_bit; i++ )
    	printf(" %d", bit[ i ] );



   printf("\n\n\tData with extra zero : ");
   for( i = 0; i < trans_bit; i++ )
      printf(" %d", bit[ i ] );

   for( i = 0; i < div_bit - 1; i++ )
   	printf(" 0" );



   crc();
}

void  data() {

   char st[ 100 ];
   int i, len;

   clrscr();
    printf("\n\n\t Data Pattren ( 8 bits ) : ");

   scanf(" %[^\n]", st );

   for( i = 0; i < trans_bit; i++ )
   	bit[ i ] = st[ i ] - 48;

   result();
}
