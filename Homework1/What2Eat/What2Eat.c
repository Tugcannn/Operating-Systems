
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
	printf("-----------------------------------\n");
	printf("Welcome to What to Eat Today? \n");
        printf("-----------------------------------\n");

	int number;
	printf("Enter the number of People: ");
	scanf("%d", &number);

	int threshold;
	printf("Enter the Threshold value: ");
	scanf("%d", &threshold);
	printf("-----------------------------------\n");
	printf("               MENU                \n");
	printf("-----------------------------------\n");
	printf("1- Kebab \n");
	printf("2- Burger \n");
	printf("3- Pasta \n");
	printf("4- Lahmacun \n");
	printf("5- Salad \n");
	printf("-----------------------------------\n");

	printf("FIRST ROUND\n");
        printf("-----------------------------------\n");
	printf("When making selections, Enter numbers between 1 and 5 \n");
	int voting1[] = {0, 0, 0, 0, 0};
	int value;
	int temp;
	for(int i = 0; i < number; i++ ) {
	temp = 5;
		for(int y = 0 ; y < 5 ; y++) {
	        printf("%d. person %d. meal choice: ", i+1, y+1);
		scanf("%d", &value);
		voting1[value-1] += temp;
		temp--;  
		}
	printf("-----------------------------------\n");
	}
	
	int x = 0;
	char menu[5][10] = {"Kebab", "Burger", "Pasta", "Lahmacun", "Salad"};
	char selected[5][10];
	for(int i = 0 ; i < 5 ; i++) {
	if(voting1[i] >= threshold) {	
	  strcpy(selected[x], menu[i]);
	  x++;
	}
	}
	
	if(x == 0) {
	printf("You are eating at home/dorm today!\n");
	}
	else if(x == 1) {
	printf("You are eating %s\n", selected[0]);
	}
	else {
        printf("************************************************************\n\n\n");
        printf("-----------------------------------\n");

        printf("SECOND ROUND\n");
        printf("-----------------------------------\n");
	printf("When making selections, Enter numbers between 1 and %d \n", x);
	
	printf("-----------------------------------\n");
        printf("               MENU                \n");
        printf("-----------------------------------\n");
	for(int i = 0 ; i < x ; i++ ) {
          printf("%d- %s\n", i+1, selected[i]);
	}
        printf("-----------------------------------\n");
	int voting2[x];
	for(int i = 0 ; i < x ; i++) {
	 voting2[i] = 0;
	}
	for(int i = 0; i < number; i++ ) {
        temp = x;
                for(int y = 0 ; y < x ; y++) {
                printf("%d. person %d. meal choice: ", i+1, y+1);
                scanf("%d", &value);
                voting2[value-1] += temp;
                temp--;  
                }
        printf("-----------------------------------\n");
	}
	int maks_value = 0;
	int maks_index = 0;
	for(int i = 0 ; i < x ; i++) {
	   if(maks_value < voting2[i]) {
	   maks_value = voting2[i];
	   maks_index = i ;
	   }
        }
	printf("You are eating %s\n", selected[maks_index]);
        
	}
	return 0;
}


