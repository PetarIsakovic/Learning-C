#include <stdio.h>
#include <stdlib.h>

//problem #1
void doubling(int n){
	n*=2;
}

//problem #2
void doublingByAdress(int *n){
	*n *= 2;
}

//problem #3
void swap(int *p1, int *p2){
	int holder = *p1;
	*p1 = *p2;
	*p2 = holder;
}

//problem #4
void increaseArray(int arr[], int size){
	for(int i = 0; i < size; i++){
		arr[i]++;
	}
}

//problem #5
void pointerToPointer(int **pointer){
	**pointer = 1000;
}

//problem 6 (NOT SURE IF I DID THIS CORRECTLY SINCE I USED A POINTER AS THE ARRAY INSTEAD OF AN ACTUAL ARRAY LIKE int array[])
int* arrayAllocate(int *array, int size){
	array = (int *)malloc(size * sizeof(int));
	for(int i = 0; i < size; i++){
		array[i] = i+1;
	}
	return array;
}

typedef struct Node{
	int value;
	struct Node *next;
} Node;

//problem 7
void insertAtBeginning(Node **head, int value){
	Node *tmp = NULL;
	tmp = (Node *)malloc(sizeof(Node));
	tmp->value = value;
	tmp->next = *head;
	*head = tmp;
}

//problem 8
void matrix(int*** pointerToArray, int length, int width){
	int** array = *pointerToArray;
	for(int i = 0; i < length; i++){
		for(int j = 0; j < width; j++){
			array[i][j] = 0;
		}
	}
}

int main(){
	//problem 1
	printf("Problem 1:\n");
	int value = 5;
	printf("Value before passing by value is: %d\n", value);
	doubling(value);
	printf("Value after passing by value is : %d\n", value);
	
	//problem 2
	printf("\nProblem 2:\n");
	int value2 = 5;
	int *pointer = (int *)malloc(sizeof(int));
	pointer = &value2;
	printf("Value before passing by value is: %d\n", value2);
        doublingByAdress(pointer);
        printf("Value after passing by value is : %d\n", value2);
	
	//problem 3
	printf("\nProblem 3:\n");
	int value3 = 1;
	int value4 = 10;
	int *p1,*p2;
	p1=p2=NULL;
	
	p1 = (int *)malloc(sizeof(int));
	p2 = (int *)malloc(sizeof(int));
	
	p1 = &value3;
	p2 = &value4;

	printf("The values are %d and %d\n", value3, value4);
	swap(p1, p2);
	printf("The values are %d and %d\n", value3, value4);
	
	//problem 4
	printf("\nProblem 4:\n");
	int array[5] = {1, 2, 3, 4, 5};
	increaseArray(array, 5);
	printf("The values of the array are: ");
	for(int i = 0; i < sizeof(array)/sizeof(int); i++){
		printf("%d ", array[i]);
	}
	increaseArray(array, 5);
	printf("\nThe values of the array are: ");
        for(int i = 0; i < sizeof(array)/sizeof(int); i++){ 
                printf("%d ", array[i]);
        }
	printf("\n");
	
	//problem 5
	printf("\nProblem 5:\n");
	int value5 = 11;
	
	int* pointer2 = &value5;

	int **doublePointer = &pointer2;

	printf("The value is %d\n", value5);
	pointerToPointer(doublePointer);
	printf("The value is %d\n", value5);

	//problem 6
	printf("\nProblem 6:\n");
	int *array2 = NULL;
	int size = 10;
	array2 = arrayAllocate(array2, size);
	printf("The array is: ");
	for(int i = 0; i < 10; i++){
		printf("%d ", array2[i]);
	}
	printf("\n");
	
	
	//problem 7
	printf("\nProblem 7:\n");
	Node **head = NULL;
	head = (Node **)malloc(sizeof(Node *));
	insertAtBeginning(head, 10);
	insertAtBeginning(head, 20);

	Node *tmp = (Node *)malloc(sizeof(Node));
	tmp = *head;

	printf("The linked list is: ");
	while(tmp != NULL){
		printf("%d ", tmp->value);
		tmp = tmp->next;
	}

	printf("\n");

	//problem 8
	printf("\nProblem 8:\n");
	int length = 10;
        int width = 10;
	int** array3 = (int **)malloc(length * sizeof(int *));
        for(int i = 0; i < length; i++){
                array3[i] = (int *)malloc(sizeof(int));
        }


	int*** pointerToArray = &array3;
	
	for(int i = 0; i < length; i++){
		for(int j = 0; j < width; j++){
			array3[i][j] = i;
		}
	}

	printf("The array is the following:\n");
	for(int i = 0; i < length; i++){
		for(int j = 0; j < width; j++){
			printf("%d ", array3[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	matrix(pointerToArray, length, width);
	printf("The array is the following:\n");
        for(int i = 0; i < length; i++){
                for(int j = 0; j < width; j++){
                        printf("%d ", array3[i][j]);
                }
                printf("\n");
        }
	

	return 0;
}
