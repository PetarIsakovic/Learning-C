#include <stdio.h>
#include <stdlib.h>

int* swap(int a, int b){
	int holder = b;
	b = a;
	a = holder;
	int *solution = (int *)malloc(2*sizeof(int));
	solution[0] = a;
	solution[1] = b;
	return solution;
}

int max(int a, int b){
	if(a > b){
		return a;
	}
	return b;
}

int main(){
	int a,b;
	a = 3;
	b = 7;

	int *solution = swap(a,b);

	a = solution[0];
	b = solution[1];

	printf("%d %d\n", a, b);
	
	printf("%d\n", max(a,b));
	
	return 0;
}
