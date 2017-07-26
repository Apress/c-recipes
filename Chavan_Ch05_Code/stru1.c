/* In this program pointers to structures are used to access the embedded members in */  
/* nested structures. The data in structures is then displayed on the screen. */  
										/* BL */
#include <stdio.h>								/* L1 */
										/* BL */
main()										/* L2 */
{										/* L3 */
 struct date {									/* L4 */
   int month;									/* L5 */
   int day;									/* L6 */
   int year;									/* L7 */
 }; 										/* L8 */
 struct biodata {								/* L9 */
   char name[15];								/* L10 */
   int rollno;									/* L11 */
   int age;									/* L12 */
   float weight;								/* L13 */
   struct date joiningDate; 							/* L14 */
 }; 										/* L15 */
struct biodata *ptr1, sa1 = {"Dick", 1, 21, 70.6F, 10, 18, 2006};		/* L16 */
struct biodata *ptr2, sa2 = {"Robert", 2, 22, 75.8F, 8, 24, 2007};		/* L17 */
ptr1 = &sa1; 									/* L18 */
ptr2 = &sa2;									/* L19 */
										/* BL  */
printf("Biodata of Secret Agent # 1: \n");		  			/* L20 */
printf("\tName: %s\n", (*ptr1).name);						/* L21 */
printf("\tRoll Number: %d\n", (*ptr1).rollno);					/* L22 */
printf("\tAge: %d years \n", (*ptr1).age);					/* L23 */
printf("\tWeight: %.1f kg\n", (*ptr1).weight);					/* L24 */
printf("\tJoining Date: %d/%d/%d\n\n", (*ptr1).joiningDate.month,		/* L25 */
        (*ptr1).joiningDate.day, (*ptr1).joiningDate.year); 			/* L26 */
										/* BL  */
printf("Biodata of Secret Agent # 2: \n");					/* L27 */
printf("\tName: %s\n", ptr2->name);						/* L28 */
printf("\tRoll Number: %d\n", ptr2->rollno);					/* L29 */
printf("\tAge: %d years \n", ptr2->age);					/* L30 */
printf("\tWeight: %.1f kg\n", ptr2->weight);					/* L31 */
printf("\tJoining Date: %d/%d/%d\n", ptr2->joiningDate.month,			/* L32 */
       ptr2->joiningDate.day, ptr2->joiningDate.year); 				/* L33 */
										/* BL  */
 return(0);									/* L34 */
}										/* L35 */
