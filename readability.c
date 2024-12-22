#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
float grade; 
int letters=0;
int i;
int n;
int word=0;
int sentences=0;
float x=0.0;
float l;
float s;
int realgrade;
int main (void)
{
string text= get_string ("Text: ");
 
 for (i=0, n=strlen (text); i<n; i++)
 {
 if (isalpha (text [i]))
 {
     letters++;
 }
  else if (isspace (text [i]))
  {
  word++; 
  }
  
 }
word++; 
 
  
 

 for (i=0, n=strlen (text); i<n; i++)
 {
  if ('.'== (text [i]))
  {
   sentences++;
  }
  else if ('!'== (text [i]))
  {
   sentences++;
   }
   else if ('?'== (text [i]))
   {
    sentences++;
   }

  
 }

 //Finding the L value
 x= 100/(float)word;
 l= letters*x;
//finding the S value
s= x*(float)sentences;


grade= 0.0588*(float)l-0.296*(float)s-15.8;

realgrade= round(grade ) ;

if (realgrade>1 && realgrade<16)
{
printf ("Grade %i\n", realgrade);
}
if (realgrade>=16)
{
printf ("Grade 16+\n");
}
if (realgrade<1)
{
 printf (" Before Grade 1\n");
}
}
