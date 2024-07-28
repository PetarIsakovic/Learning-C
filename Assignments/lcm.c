#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1,num2, largest, smallest;
	
	scanf("%d %d", &num1, &num2);

	if(abs(num1) > abs(num2)){
		largest = abs(num1);
		smallest = abs(num2);
	}
	else{
		largest = abs(num2);
		smallest = abs(num1);
	}

	if(num1 == 0 || num2 == 0){
		printf("0\n");
	}
	else{
		int holder = largest;
		while(largest % smallest != 0){
			largest += holder;
		}
		printf("%d\n", largest);
	}

	return 0;
}
