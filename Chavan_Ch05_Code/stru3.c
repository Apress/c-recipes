/* This program uses a function which accepts a structure as an input argument */  
/* and returns a structure after modifying data in it. */  
										/* BL */
#include <stdio.h>								/* L1 */
										/* BL */
struct rectangle {								/* L2 */
 int height; 									/* L3 */
 int width; 									/* L4 */
}; 										/* L5 */
										/* BL */
struct rectangle doubleIt(struct rectangle ourRect); 				/* L6 */
								 		/* BL */
main()										/* L7 */
{ 										/* L8 */
 struct rectangle rect1 = {10, 15}, rect2 = {25, 35}; 				/* L9 */
										/* BL  */
 printf("Dimensions of rect1 before modification: \n");				/* L10 */
 printf("height: %d\n", rect1.height);						/* L11 */
 printf("width: %d\n\n", rect1.width);						/* L12 */
						  				/* BL  */
 rect1 = doubleIt(rect1);							/* L13 */
										/* BL  */
 printf("Dimensions of rect1 after modification: \n");				/* L14 */
 printf("height: %d\n", rect1.height);						/* L15 */
 printf("width: %d\n\n", rect1.width);						/* L16 */
										/* BL */
 printf("Dimensions of rect2 before modification: \n");				/* L17 */
 printf("height: %d\n", rect2.height);						/* L18 */
 printf("width: %d\n\n", rect2.width);						/* L19 */
										/* BL  */
 rect2 = doubleIt(rect2); 							/* L20 */
										/* BL  */
 printf("Dimensions of rect2 after modification: \n");				/* L21 */
 printf("height: %d\n", rect2.height);						/* L22 */
 printf("width: %d\n\n", rect2.width);						/* L23 */
										/* BL  */
 return(0);									/* L24 */
}										/* L25 */
										/* BL  */
struct rectangle doubleIt (struct rectangle ourRect)				/* L26 */
{										/* L27 */
  ourRect.height = 2 * ourRect.height;						/* L28 */
  ourRect.width = 2 * ourRect.width;						/* L29 */
  return ourRect; 								/* L30 */
}										/* L31 */
