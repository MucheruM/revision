#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * students - Structure to rep a student
 * @name: Name of the student
 * @major: Major of the student
 * @age: Age of the student
 * @gpa: GPA of the student
 *
 * NB:- Struct definitions should be stored in .h files
 */
struct students
{
	char name[50];
	char major[50];
	int age;
	float gpa;
};

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	struct students stdnt1;

	stdnt1.age = 19;
	stdnt1.gpa = 3.2;
	strcpy(stdnt1.name, "Mucheru maina");
	strcpy(stdnt1.major, "Engineering");

	printf("%d\n", stdnt1.age);
	printf("%.2f\n", stdnt1.gpa);
	printf("%s\n", stdnt1.name);
	printf("%s\n", stdnt1.major);

	return (0);
}
