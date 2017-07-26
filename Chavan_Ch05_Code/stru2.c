/* This program uses a function which accepts values of individual mmembers of structure, */  
/* builds a structure, and returns it. */  
										/* BL */
#include <stdio.h>								/* L1 */
										/* BL */
struct rectangle {								/* L2 */
 int height; 									/* L3 */
 int width; 									/* L4 */
}; 										/* L5 */
										/* BL */
struct rectangle makeIt(int height, int width); 				/* L6 */
										/* BL */
main()										/* L7 */
{ 										/* L8 */
 struct rectangle rect1, rect2; 						/* L9 */
 rect1 = makeIt(20, 30);							/* L10 */
 rect2 = makeIt(40, 80); 							/* L11 */
										/* BL  */
 printf("Dimensions of rect1: \n");						/* L12 */
 printf("height: %d\n", rect1.height);						/* L13 */
 printf("width: %d\n\n", rect1.width);						/* L14 */
										/* BL */
 printf("Dimensions of rect2: \n");						/* L15 */
 printf("height: %d\n", rect2.height);						/* L16 */
 printf("width: %d\n\n", rect2.width);						/* L17 */
										/* BL  */
 return(0);									/* L18 */
}										/* L19 */
										/* BL  */
struct rectangle makeIt(int height, int width) 					/* L20 */
{										/* L21 */
  struct rectangle myRectangle;							/* L22 */ 
  myRectangle.height = height;							/* L23 */ 
  myRectangle.width = width;							/* L24 */ 
  return myRectangle; 								/* L25 */ 
}										/* L26 */ 
