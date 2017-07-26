/* This program uses a pointer-to-function to invoke functions.  */	
										/* BL */
#include <stdio.h>								/* L1 */
										/* BL */
int sum (double n1, double n2); 						/* L2 */
int add(int m1, int m2);							/* L3 */
										/* BL */
main() 										/* L4 */
{										/* L5 */
  int r; 									/* L6 */
  int (*ptrFunc)();  								/* L7 */
										/* BL */
  ptrFunc = sum;								/* L8 */
  r = (*ptrFunc)(2.3, 4.5);  							/* L9 */
  printf("(int)(2.3 + 4.5) = %d\n", r);						/* L10 */
										/* BL  */
  ptrFunc = add;								/* L11 */
  r = (*ptrFunc)(10, 15);							/* L12 */
  printf("10 + 15 = %d\n", r); 							/* L13 */
										/* BL  */
  return(0);									/* L14 */
}										/* L15 */
										/* BL */
int sum(double j1, double j2) 							/* L16 */
{										/* L17 */
 int result; 									/* L18 */
 result = (int)(j1 + j2); 							/* L19 */
 return(result); 								/* L20 */
}										/* L21 */
										/* BL  */
int add(int k1, int k2) 							/* L22 */
{										/* L23 */
 return(k1 + k2);								/* L24 */
}										/* L25 */
