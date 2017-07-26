/* An interactive program that uses of array of structures to store and retrieve the data. */ 
										/* BL */ 
#include <stdio.h>								/* L1 */ 
										/* BL */ 
main()										/* L2 */ 
{										/* L3 */ 
  int i; 									/* L4 */ 
  struct biodata {								/* L5 */ 
    char name[15];								/* L6 */ 
    int rollno;									/* L7 */ 
    int age;									/* L8 */ 
    float weight;								/* L9 */ 
  } ;										/* L10 */ 
										/* BL  */ 
 struct biodata agents[5]; 							/* L11 */
										/* BL  */
 for(i = 0; i < 5; i++) {							/* L12 */
   printf("\nEnter Biodata of Secret Agent # %d: \n", i+1);			/* L13 */
   printf("Name: ");								/* L14 */
   scanf("%s", &agents[i].name);						/* L15 */
   printf("Roll Number: ");							/* L16 */
   scanf("%d", &agents[i].rollno);						/* L17 */
   printf("Age: ");								/* L18 */
   scanf("%d", &agents[i].age);							/* L19 */
   printf("Weight: ");								/* L20 */
   scanf("%f", &agents[i].weight);						/* L21 */
 }										/* L22 */
										/* BL  */
 printf("\nNow data entered by you will ");					/* L23 */
 printf("be displayed on the screen.\n\n"); 					/* L24 */
 for(i = 0; i < 5; i++) {							/* L25 */ 
   printf("Biodata of Secret Agent # %d: \n", i+1);				/* L26 */
   printf("\tName: %s\n", agents[i].name);					/* L27 */
   printf("\tRoll Number: %d\n", agents[i].rollno);				/* L28 */
   printf("\tAge: %d years \n", agents[i].age);					/* L29 */
   printf("\tWeight: %.1f kg\n\n", agents[i].weight);				/* L30 */
 }										/* L31 */
										/* BL  */
  return(0);									/* L32 */
}										/* L33 */
										/* BL  */
linkfloat() 									/* L34 */
{										/* L35 */
  float number = 10, *pointer;							/* L36 */
  pointer = &number; 								/* L37 */
  number = *pointer; 								/* L38 */
  return(0); 									/* L39 */
}										/* L40 */
