/* In this programs arguments are passed by reference to set the credit count. */
										/* BL */
#include <stdio.h>								/* L1 */
										/* BL */
void changeCreditCount(int *p1, int *p2);  					/* L2 */
										/* BL */
main() 										/* L3 */
{										/* L4 */
 int intCC1 = 15, intCC2 = 20; 							/* L5 */
 printf("Computer-control is in main() function\n");	 			/* L6 */ 
 printf("intCC1 = %d and intCC2 = %d\n", intCC1, intCC2);	 		/* L7 */
 changeCreditCount(&intCC1, &intCC2); 						/* L8 */
 printf("Computer-control is back in main() function\n");			/* L9 */ 
 printf("intCC1 = %d and intCC2 = %d\n", intCC1, intCC2);	 		/* L10 */
 return(0);									/* L11 */
}										/* L12 */
										/* BL  */
void changeCreditCount(int *p1, int *p2) 					/* L13 */
{										/* L14 */
  printf("Computer-control is in changeCreditCount() function\n");		/* L15 */ 
  printf("Initial values of *p1 and *p2: \n");					/* L16 */ 
  printf("*p1 = %d and *p2 = %d\n", *p1, *p2);	 				/* L17 */
  *p1 = *p1 * 4;								/* L18 */
  *p2 = *p2 * 4;								/* L19 */
  printf("Now values of *p1 and *p2 are changed\n");				/* L20 */ 
  printf("*p1 = %d and *p2 = %d\n", *p1, *p2);	 				/* L21 */
  return;									/* L22 */
}										/* L23 */
