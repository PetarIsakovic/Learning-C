#include <stdio.h>


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

void displayAllStudents(struct Student students[]){
	for(int i = 0; i < 3; i++){
		displayStudent(students[i]);
	}
}

double average(struct Student student){
	double average = 0;
	for(int i = 0; i < 4; i++){
		average += student.grades[i];
	}
	average /= 4.0;
	return average;
}

double highestAverage(struct Student students[]){ //WHY DID I NOT NEED TO SPECIFY THE SIZE OF THE ARRAY HERE?
	double highestAverage = average(students[0]);
	for(int i = 1; i < 3; i++){
		double newAverage = average(students[i]);
		if(highestAverage < newAverage){
			highestAverage = newAverage;
		}
	}
	return highestAverage;
}

int main(void){
	struct Student students[] = {
		{
                	"Petar",
               		18,
                	{100, 19, 50, 77}
        	},
		{                       
                        "Petar2",
                        20,
                        {100, 23, 100, 99}
                },
		{                       
                        "Petar3",
                        22,
                        {31, 33, 30, 99}
                }
		
	};

	displayAllStudents(students);
	printf("THE AVERAGE IS: %lf\n", average(students[0]));
	
	printf("THE HIGHEST AVERAGE IS: %lf\n", highestAverage(students));
	return 0;
}
