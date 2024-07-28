#include <stdio.h>

int main(){
	int num_people, slices_per_pizza, slices_each;

	scanf("%d %d %d", &num_people, &slices_per_pizza, &slices_each);

	int total = num_people*slices_each/slices_per_pizza;
	double total2 = ((double)num_people)*slices_each/slices_per_pizza; 

	if((total-total2) == 0){
		printf("%d\n", total);
	}
	else{
		printf("%d\n", (total+1));
	}

}
