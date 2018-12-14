/* Emits a 440-Hz tone for 500 milliseconds */
#include <dos.h>
#include<stdio.h>
#include<conio.h>

int main(void)
{
   sound(440);
   delay(500);
   nosound();

   return 0;
}