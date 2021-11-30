//21 structure of students
#include <stdio.h>
struct student{
	int roll_no;
	char name[15];
	float marks;
};
int main()
{
	int i;
	struct student s[5];
	for(i=1;i<=5;i++){
		printf("enter roll-no, Name , Marks of a student %d \n",i);
		
		scanf("%d %s %f", &s[i].roll_no , &s[i].name, &s[i].marks);
	}
		for(i=1;i<=5;i++){
	
		
		printf("%d   %s    %f  \n", s[i].roll_no , s[i].name, s[i].marks);
	}
}
