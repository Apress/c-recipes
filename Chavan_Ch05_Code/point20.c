/* This program uses a pointer-to-function to invoke a function.  */	
										/* BL */
#include <stdio.h>								/* L1 */
										/* BL */
void welcome(void); 								/* L2 */
										/* BL */
main() 										/* L3 */
{										/* L4 */
  void (*ptrFunc)();  								/* L5 */
  ptrFunc = welcome;								/* L6 */
  (*ptrFunc)();  								/* L7 */
  return(0);									/* L8 */
}										/* L9 */
										/* BL */
void welcome(void) 								/* L10 */
{										/* L11 */
 printf("Welcome boys and girls.\n");						/* L12 */
 return;									/* L13 */
}										/* L14 */
