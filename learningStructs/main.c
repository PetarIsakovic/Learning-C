#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
	char name[50];
	int age;
	int grades[4];	
};

void displayStudent(struct Student s1){
	printf("%s\n%d\n", s1.name, s1.age);
	for(int i = 0; i < 4; i++){
		printf("%d, ", s1.grades[i]);
	}
	printf("\n");
}

void displayAllStudents(struct Student * students){
	for(int i = 0; i < 3; i++){
		displayStudent(students[i]);
	}
	free(students);
}

double average(struct Student student){
	double average = 0;
	for(int i = 0; i < 4; i++){
		average += student.grades[i];
	}
	average /= 4.0;
	return average;
}

double highestAverage(struct Student * students){
	double highestAverage = average(students[0]);
	for(int i = 1; i < 3; i++){
		double newAverage = average(students[i]);
		if(highestAverage < newAverage){
			highestAverage = newAverage;
		}
	}
	free(students);
	return highestAverage;
}

int main(void){
	
	struct Student * students = (struct Student *) malloc(3 * sizeof(struct Student));
	strcpy(students[0].name, "Petar");
	students[0].age = 18;
	int grades1[] = {100,19,50,77};
	memcpy(students[0].grades, grades1, 4 * sizeof(int));

	strcpy(students[1].name, "Bob");
        students[1].age = 19;
	int grades2[] = {100,100,100,99};
        memcpy(students[1].grades, grades2, 4 * sizeof(int));

	strcpy(students[2].name, "Max");
        students[2].age = 22;
	int grades3[] = {100,99,98,97};
        memcpy(students[2].grades, grades3, 4 * sizeof(int));

	displayAllStudents(students);
	printf("THE AVERAGE IS: %lf\n", average(students[0]));
	
	printf("THE HIGHEST AVERAGE IS: %lf\n", highestAverage(students));
	free(students);
	return 0;
}
