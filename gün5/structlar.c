#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef char string[100];

typedef struct{
	char name[50];
	int age;
	float gpa;
	bool aktif;
}ogrenci;

int main()
{
	ogrenci student1 = {"sungerbob", 30, 2.5, true};
	ogrenci student2 = {"ezio", 15, 3.5, false};
	ogrenci student3 = {0};

	printf("%s\n", student1.name);
	printf("%d\n", student1.age);
	printf("%.2f\n", student1.gpa);
	printf("%s\n", (student1.aktif) ? "evet":"hayır");

	strcpy(student2.name, "eren");
	student2.age = 31;

	printf("\n%s\n", student2.name);
	printf("%d\n", student2.age);
	printf("%.2f\n", student2.gpa);
	printf("%s\n", (student2.aktif) ? "evet":"hayır");

	printf("\n%s\n", student3.name);
	printf("%d\n", student3.age);
	printf("%.2f\n", student3.gpa);
	printf("%s\n", (student3.aktif) ? "evet":"hayır");

	return 0;
}