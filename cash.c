#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main (void) {
    float y;
    float x;
    int counter=0 ;

do
 {
     x = get_float ("Change owed: ") ;     
 }
while (x<0) ;


y= x*100 ;
int c = round(y) ;

while (25<=c) 
{
c= c-25 ;
counter++ ;
}

while (10<=c && c<25) 
{
c= c-10 ;
counter++ ;
}

while (5<=c && c<10) 
{
c= c-5 ;
counter++ ;
}

while (0<c && c<5) 
{
c= c-1 ;
counter++ ;
}

printf ("%i", counter) ;
}
