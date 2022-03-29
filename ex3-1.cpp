#include <stdio.h>

int
main ()
{
  int a, b, product;
  a = 20;
  b = 7;

/*
++a
a++
--a
a--

a = 16
a >> 1
a >> 2
a << 1
*/

// Calculating product
    product = a +b ;

 
    printf("a +b = %d \n ", product);
   
     // Calculating product
    product =a - b;

 
    printf("a - b = %d \n ", product);
   
   
     // Calculating product
    product = a * b;

 
    printf("a * b = %d \n", product);
   
     // Calculating product
    product = a / b;

 
    printf(" a / b = %d \n", product);
   
     // Calculating product
    product = a % b;

 
    printf("x mod y = %d \n", product);
 
 
    printf ("a = %d \n ", product);
    // Calculating product
    ++a;


    printf ("++a = %d \n ", product);


    printf ("a= %d \n ", product);
    // Calculating product
    a++;


    printf ("a++= %d \n ", product);


    printf ("a= %d \n ", product);
    // Calculating product
    --a;


    printf ("--a = %d \n", product);


    printf ("a= %d \n ", product);
    // Calculating product
    a--;


    printf (" a-- = %d \n", product);


    printf ("a= %d \n ", product);
    // Calculating product
    a = 16;


    printf ("a = 16  = %d \n", product);


    printf ("a= %d \n ", product);
    // Calculating product
    a >> 1;
    printf ("a >> 1 = %d \n", product);


    printf ("a= %d \n ", product);
   // Calculating product
    a >> 2;
   
   
    printf (" a >> 2 = %d \n", product);


    printf ("a= %d \n ", product);
    // Calculating product
    a << 1 ;
 
 
    printf (" a << 1  = %d \n", product);



  return 0;
}
