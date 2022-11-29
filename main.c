#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct student {
	int 	ID;
	char 	name[10];
	float 	grade;
};


int main(int argc, char *argv[]) {
	struct student student1 = {100000, "ren", 4.0};
	
	student1.ID = 123456;
	strcpy(student1.name, "Yeojin");
	student1.grade = 4.3;
	
	printf("ID : %d\n", student1.ID);
	printf("name : %s\n", student1.name);
	printf("grade : %f\n", student1.grade);

	
	return 0;
}
