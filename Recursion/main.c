#include <stdio.h>

int factorial(int n){
	if(n == 0 || n == 1)
		return 1;
	return n*factorial(n-1);
}

//takes a long time to run (time complexity is 2^n we can reduce to nlog(n))
int fib(int n){
	if(n <= 1){
		return 1;
	}
	return fib(n-1) + fib(n-2);
}

int main(void){
	printf("%d ", fib(100));
}
