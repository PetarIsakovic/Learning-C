#include <stdio.h>

int main(){
	_Bool woosh = 0;

	
	if(!woosh){
		printf("We Ball\n");
	}

	int num1,num2;
	num1=num2=10;

	printf("%d and %d\n", num1++, ++num2);

	int a = 1, b = 2, c = 3;
	a = b += c;
	printf("a is %d\n", a);
	printf("b is %d\n", b);
	
	return 0;
}
