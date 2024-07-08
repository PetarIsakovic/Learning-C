#include<stdio.h>

int main(void){
	int array[10] = {1, 3, 3, 4, 5, 1, 5, 8, 9, 9};
	int totalEven = 0;
	int totalOdd = 0;
	for(int i = 0; i < 10; i++){
		if(array[i] % 2 == 0){
			totalEven += array[i];
		}
		else{
			totalOdd += array[i];
		}
	}

	int largestElement, smallestElement;
	largestElement = smallestElement = array[0];
	for(int i = 1; i < 10; i++){
		if(largestElement < array[i]){
			largestElement = array[i];
		}
		if(smallestElement > array[i]){
			smallestElement = array[i];
		}
	}

	int secondLargestElement, largestElm;
	largestElm = array[0];
	secondLargestElement = -1;
	for(int i = 0; i < 10; i++){
		if(largestElm < array[i]){
			secondLargestElement = largestElm;
			largestElm = array[i];
		}
		else if(array[i] > secondLargestElement && array[i] != largestElement){
			secondLargestElement = array[i];
		}
	}

	printf("%d is total Even\n", totalEven);
	printf("%d is total odd\n", totalOdd);
	printf("%d is the largest element in the array\n", largestElement);
	printf("%d is the smallest element in the array\n", smallestElement);
	printf("%d is the second largest element in the array\n", secondLargestElement);
	
	int count = 0;
	
	for(int i = 0; i < 10; i++){
		int isUnique = 1;
		for(int j = 0; j < 10; j++){
			if(array[i] == array[j] && i != j){
				isUnique = 0;
				break;
			}
		}
		if(isUnique == 1){
			count++;
		}
	}
	
	printf("The total unique numbers in the array is %d\n", count);
	
}
