#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
 int i = 0;
 
 int x;
  
 int n = 0;
 
 int j = 0;
 
 char lmao;
 
 int xoxo;
 
 int lmao2;
 
 char lmao3;
 
 int xoxo2;
 
 int lmao4;
 
string plaintext;

 if (argc != 2)
 {
    printf ("Usage: ./caesar key \n");
   
    return 1;
 }
 
  for (i = 0, n = strlen (argv [1]); i<n; i++)
  {
    if (!isdigit(argv[1][i]))
   {
     printf ("Usage: ./caesar key \n");
     
     return 1;
   }
   
 }
  
  x = atoi (argv [1]) ;
  
  plaintext = get_string("Plaintext: ");
  
  int y = strlen (plaintext);
  
  // int ciphertext[y];
  
  
  //for (j = 0; j<y; j++)
  //{
  // if (isalpha (plaintext[j]) && islower (plaintext[j]))
   //{
   //ciphertext[j] = plaintext[j] - 'a' ; 
   //}
 // }
   printf ("ciphertext: ");
    
    for (j=0; j<y; j++)
  {
   if (isalpha (plaintext[j]) && isupper (plaintext[j]))
   {
  lmao = plaintext[j] - 'A'  ; 
  
  lmao2 = lmao;
  
  xoxo = (lmao2+x) % 26;
  
  xoxo = xoxo + 65 ;
  
   printf ("%c",(char) xoxo);
   }
  }
  
    for (j=0; j<y; j++)
 {
   if (isalpha (plaintext[j]) && islower (plaintext[j]))
   {
   lmao3 = plaintext[j] - 'a' ;
   
   lmao4 = lmao3;
   
   xoxo2 = (lmao4+x) % 26;
   
   xoxo2 = xoxo2 + 97;
   
   printf ("%c", (char) xoxo2);
   }
 }
   

     

     
}