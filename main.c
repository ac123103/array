#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
   char msg [] = "Hello world!\n\n";

   //if first letter is lowercase.
   if ( islower(msg[0]) )
   {
       msg[0] = toupper(msg[0]);
       printf("Auto-correct: \n %s", msg);
   }
   else
   {
       printf("No auto-correct needed.");
   }
   printf("%s", msg);

    return 0;
}
