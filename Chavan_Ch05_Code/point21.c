/* This program uses a pointer-to-function to implement text based menu system.  */	
										/* BL */
#include <stdio.h>								/* L1 */
										/* BL */
void cut (int intCut); 								/* L2 */
void copy (int intCopy);							/* L3 */
void paste (int intPaste); 							/* L4 */
void delete (int intDelete) ; 							/* L5 */
										/* BL */
main() 										/* L6 */
{										/* L7 */
  void (*funcPtr[4])(int) = {cut, copy, paste, delete}; 			/* L8 */
  int intChoice; 								/* L9 */
  printf("\nEdit Menu: Enter your choices (0, 1, 2, or 3).\n");			/* L10 */
  printf("Please do not enter any other number except 0, 1, 2, or 3 to \n");	/* L11 */
  printf("avoid abnormal termination of program.\n");				/* L12 */
  printf("Enter 0 to activate menu-item Cut.\n");				/* L13 */
  printf("Enter 1 to activate menu-item Copy.\n");				/* L14 */
  printf("Enter 2 to activate menu-item Paste.\n");				/* L15 */
  printf("Enter 3 to activate menu-item Delete.\n");				/* L16 */
  scanf("%d", &intChoice); 							/* L17 */
  (*funcPtr[intChoice])(intChoice); 						/* L18 */
  printf("Thank you.\n");							/* L19 */
  return(0); 									/* L20 */
}										/* L21 */
										/* BL  */
void cut (int intCut)								/* L22 */
{										/* L23 */
  printf("You entered %d.\n", intCut);						/* L24 */
  printf("Menu-item Cut is activated.\n");					/* L25 */
}										/* L26 */
										/* BL  */
void copy (int intCopy)								/* L27 */
{										/* L28 */
  printf("You entered %d.\n", intCopy);						/* L29 */
  printf("Menu-item Copy is activated.\n");					/* L30 */
}										/* L31 */
										/* BL  */
void paste (int intPaste)							/* L32 */
{										/* L33 */
  printf("You entered %d.\n", intPaste);					/* L34 */
  printf("Menu-item Paste is activated.\n");					/* L35 */
}										/* L36 */
										/* BL  */ 
void delete (int intDelete)							/* L37 */ 
{										/* L38 */ 
  printf("You entered %d.\n", intDelete); 					/* L39 */ 
  printf("Menu-item Delete is activated.\n");					/* L40 */ 
}										/* L41 */  
