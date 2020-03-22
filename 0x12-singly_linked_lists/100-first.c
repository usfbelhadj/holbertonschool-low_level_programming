#include <stdio.h>
void beFore (void) __attribute__ ((constructor)); 
void beFore (void) 
{ 
    printf ("You're beat! and yet, you must allow,\nI bore my house upon my back!\n"); 
} 
  