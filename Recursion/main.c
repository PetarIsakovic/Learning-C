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

int greatestCommonDivisor(int n1, int n2, int gcd){
	printf("WORK??\n");
	if(n1 == 1 || n2 == 1){
		return gcd;
	}
	else if(n1 % 2 == 0 && n2 % 2 == 0){
		printf("WREEE\n");
		gcd *= 2;
		gcd = greatestCommonDivisor(n1/2, n2/2, gcd);
	}
	else if(n1 % 3 == 0 && n2 % 3 == 0){
		printf("WOOSH\n");
		gcd *= 3;
		gcd = greatestCommonDivisor(n1/3, n2/3, gcd);
	}
	else if(n1 % n2 == 0){
		gcd *= n2;
		gcd = greatestCommonDivisor(n1/n2, n2/n2, gcd);
	}
	else if(n2 % n1 == 0){
		gcd *= n1;
                gcd = greatestCommonDivisor(n1/n1, n2/n1, gcd);
	}
	return gcd;

}

int main(void){
	int num1 = 8;
	int num2 = 12;
	printf("The greatest common divisor of %d and %d is %d\n", num1, num2, greatestCommonDivisor(num1, num2, 1));
}
