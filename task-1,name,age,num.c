#include<stdio.h>
main()
{
//	WRITE A C PROGRAM TO READ THE NAME, AGE AND PHONE NUMBER FROM THE USER, STORE THEM IN VARIABLES AND DISPLAY THEM BACK.
    printf("Enter u r Name: ");
    char Name[10];
    scanf("%s", &Name);
  //  printf("you entered your name: %s\n", Name);
    
 	printf("Enter your age: ");
 	int age=0;
 	scanf("%d", &age);
 //	printf("you entered your age: %d\n", age);
 	
 	
	printf("Enter your Number: ");
    int Number=0;
    scanf("%d", &Number);
    printf("you entered your name: %s\n", Name);
    printf("you entered your age: %d\n", age);
    printf("you entered your Number: %d", Number);
    
}
