/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
 * @author Tanya L. Crenshaw
 * @author Ryan Henness
 *         Hunter Garcia
 * @since August 2013
 *
 */

#include "robot.h"
#include "string.h"
#include "stdlib.h"

/**
 * robPrintMessage
 *
 * This function prints the message, "I really* love robots!"
 *
 * @param num the number of times the message should print the word
 * "really"
 *
 * @returns none 
 */
void robPrintMessage(int num)
{
  int i = 0;


  printf("Ryan and Hunter  ");



  for(i; i < num; i++)
    {
      printf("really ");
    }

  printf("loves robots!\n");

  return;
}

/**
 * robPrintAscii
 *
 */
void robPrintAscii(void)
{
   int i= 0;
   char* space = "";
  
   for(i; i < 3; i++)
    {
      if (i == 1)
	{
	  space = "     ";
	}
      else if(i == 2)
	{
	  space = "          ";
	}
  printf("%s"    "    i_i    \n"
	 "%s"    "   [*_*]   \n"
	 "%s"    "  /|___|\\  \n"
	 "%s"    "   d   b   \n", space, space, space, space);
   
      }

}
