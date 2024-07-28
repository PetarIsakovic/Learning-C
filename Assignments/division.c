#include <stdio.h>

int main(){

	FILE *file;
	file = fopen("input.txt", "r");

	int numerator,denominator;

	while(fscanf(file, "%d %d", &numerator, &denominator) == 2){

	printf("THE NUMBERS ARE %d %d\n", numerator, denominator);
	
	int total = numerator/denominator;
	double total2 = (numerator)/((double)denominator);

	double dif = total2-total;

	if(dif == 0){
		printf("Total is %d\n", total);
	}
	else{
		printf("Total is %d\n", (total+1));
	}
	}
	fclose(file);
	return 0;
}
