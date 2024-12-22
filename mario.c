#include <cs50.h>
#include <stdio.h>

int dots;


int main(void) 
{
int x ;
int row=0 ;
    do
    {
     x= get_int (" Height: ") ;
    }
    while (x<1||x>8 ) ;
        

    for ( row=0 ; row<x; row++ )
   {        
       
       for ( dots=6; dots>x || dots>=row ;dots--)
    {
        printf (" ") ;
    }
      for (int j=0; j<=row; j++)
      {
      printf ("#") ;
    }
    
      

    printf ("\n") ; 
      
   }
}

