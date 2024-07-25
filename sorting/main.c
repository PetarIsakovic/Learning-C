#include <stdio.h>


void printArray(int array[], int size){
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
}

int main(){
	int array[10] = {10, 3, 1, 44, 1, 6, 8, 9, 11, 3};
	
	for(int i = 0; i < sizeof(array)/sizeof(int); i++){
		
		for(int j = 0; j < sizeof(array)/sizeof(int); j++){
			if(array[j] > array[j+1]){
				int holder = array[j];
				array[j] = array[j+1];
				array[j+1] = holder;
			}
		}	
	}

	printArray(array, 10);

	int array2[10] = {10, 3, 1, 44, 1, 6, 8, 9, 11, 3};

	for(int i = 0; i < sizeof(array2)/sizeof(int); i++){
		int currentMin = array2[i];
		int index = i;
		for(int j = i+1; j < sizeof(array2)/sizeof(int); j++){
			if(currentMin > array2[j]){
				currentMin = array2[j];
				index = j;
			}
		}
		int holder = array2[i];
		array2[i] = currentMin;
		array2[index] = holder;
	}
	printf("\n");
	printArray(array2, 10);
	
	int array3[10] = {10, 3, 1, 44, 1, 6, 8, 9, 11, 3};
	for(int i = 0; i < sizeof(array3)/sizeof(int); i++){
	
		for(int j = i+1; j < sizeof(array3)/sizeof(int); j++){
			if(array[i] > array[j]){

				for(int k = j-1; k >= 1; k--){
					if(array[k] > array[k-1]){
					
						break;
					}
				}
	
				break;
			}
		}	
	
	}

}
