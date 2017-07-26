/* This program uses a function which accepts a pointer to structure as an input argument */  
/* and modifies data in that structure. */  
										/* BL */
#include <stdio.h>								/* L1 */
										/* BL */
struct rectangle {								/* L2 */
 int height; 									/* L3 */
 int width; 									/* L4 */
}; 										/* L5 */
										/* BL */
void doubleIt(struct rectangle *ptr); 						/* L6 */
										/* BL */
main()										/* L7 */
{ 										/* L8 */
 struct rectangle rect1 = {10, 15}, rect2 = {25, 35}; 				/* L9 */
										/* BL  */
 printf("Dimensions of rect1 before modification: \n");				/* L10 */
 printf("height: %d\n", rect1.height);						/* L11 */
 printf("width: %d\n\n", rect1.width);						/* L12 */
										/* BL  */
doubleIt(&rect1);								/* L13 */
										/* BL  */
 printf("Dimensions of rect1 after modification: \n");				/* L14 */
 printf("height: %d\n", rect1.height);						/* L15 */
 printf("width: %d\n\n", rect1.width);						/* L16 */
										/* BL  */
 printf("Dimensions of rect2 before modification: \n");				/* L17 */
 printf("height: %d\n", rect2.height);						/* L18 */
 printf("width: %d\n\n", rect2.width);						/* L19 */
										/* BL  */
doubleIt(&rect2); 								/* L20 */
										/* BL  */
 printf("Dimensions of rect2 after modification: \n");				/* L21 */
 printf("height: %d\n", rect2.height);						/* L22 */
 printf("width: %d\n\n", rect2.width);						/* L23 */
										/* BL  */
 return(0);									/* L24 */
}										/* L25 */
										/* BL  */
void doubleIt (struct rectangle *ptr)						/* L26 */
{										/* L27 */
  ptr->height = 2 * ptr->height;						/* L28 */
  ptr->width = 2 * ptr->width;							/* L29 */
  return; 									/* L30 */
}										/* L31 */
