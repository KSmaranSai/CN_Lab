#include <stdio.h>
#include <stdlib.h>

struct dob {
	int day;
	int month;
	int year;
};

struct student_info{
	int roll;
	char name[50];
	float cgpa;
	struct dob age;
};

void print_byvalue(struct student_info s1){
	printf("\nPrinting by call by value\n");
	printf("Roll No. : %d\n",s1.roll);
	printf("Name : %s\n",s1.name);
	printf("CGPA : %.2f\n",s1.cgpa);
	printf("DOB : %d/%d/%d\n",s1.age.day,s1.age.month,s1.age.year);
}


void print_byaddress(struct student_info *s1){
	printf("\nPrinting by call by address\n");
	printf("Roll No. : %d\n",s1->roll);
	printf("Name : %s\n",s1->name);
	printf("CGPA : %.2f\n",s1->cgpa);
	printf("DOB : %d/%d/%d\n",s1->age.day,s1->age.month,s1->age.year);
}

int main(){
	struct student_info s1;
	printf("Enter Roll No. : ");
	scanf("%d",&s1.roll);
	printf("Enter Name : ");
	scanf(" %[^\n]",s1.name);
	printf("Enter CGPA : ");
	scanf("%f",&s1.cgpa);
	printf("Enter DOB (dd/mm/yy) : ");
	scanf("%d%d%d",&s1.age.day,&s1.age.month,&s1.age.year);
	
	print_byvalue(s1);
	print_byaddress(&s1);
	
	return 0;
}
