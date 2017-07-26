/* In this program an array of structures is used. */ 
										/* BL */
#include <stdio.h>								/* L1 */
										/* BL */
main()										/* L2 */
{										/* L3 */
  struct biodata {								/* L4 */
    char name[15];								/* L5 */
    int rollno;									/* L6 */
    int age;									/* L7 */
    float weight;								/* L8 */
  } ;										/* L9 */
										/* BL */
  struct biodata agents[2]; 							/* L10 */
										/* Bl  */
  strcpy(agents[0].name, "Dick");						/* L11 */
  agents[0].rollno = 1;								/* L12 */
  agents[0].age = 21;								/* L13 */
  agents[0].weight = 70.6F;							/* L14 */
										/* BL  */
  strcpy(agents[1].name, "Robert");						/* L15 */
  agents[1].rollno = 2;								/* L16 */
  agents[1].age = 22;								/* L17 */
  agents[1].weight = 75.8F;							/* L18 */
										/* BL  */
  printf("Biodata of Secret Agent # 1: \n");					/* L19 */
  printf("\tName: %s\n", agents[0].name);					/* L20 */
  printf("\tRoll Number: %d\n", agents[0].rollno);				/* L21 */
  printf("\tAge: %d years \n", agents[0].age);					/* L22 */
  printf("\tWeight: %.1f kg\n\n", agents[0].weight);				/* L23 */
										/* BL  */
  printf("Biodata of Secret Agent # 2: \n");					/* L24 */
  printf("\tName: %s\n", agents[1].name);					/* L25 */
  printf("\tRoll Number: %d\n", agents[1].rollno);				/* L26 */
  printf("\tAge: %d years \n", agents[1].age);					/* L27 */
  printf("\tWeight: %.1f kg\n", agents[1].weight);				/* L28 */
										/* BL  */
  return(0);									/* L29 */
}										/* L30 */
