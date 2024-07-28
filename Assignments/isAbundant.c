#include <stdio.h>

int main(){

	int num1;

	scanf("%d", &num1);

	int total = 0;

	for(int i = 1; i < num1; i++){
		if(num1 % i == 0){
			total += i;
		}
	}

	if(total > num1){
		printf("Abundant");
	}
	else if(num1 == total){
		printf("Perfect");
	}
	else{
		printf("Deficient");
	}

	printf("\n");
	
	return 0;
}
