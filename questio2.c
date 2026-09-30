#include <stdio.h>
int main()
{
	int attendance, income, marks;
	printf("enter the marks");
	scanf("%d",&marks);
	printf("enter the attendance");
	scanf("%d",&attendance);
	printf("enter the income");
	scanf("%d",&income);
	if(marks<50){
		printf("not eligible");
	}
		else if(attendance<75){
			printf("attendance too low");
		}
			else if(income>800000){
				printf("income too high");

			}
	else{
		if(marks>=90 && attendance>=90){
			printf("fully scholarship");
		}
		else if("marks>=75 && attendance>=85"){
			printf("half scholarship");
		}
		else{
			printf("quarter scholarship");
		}
		return 0;
	}		

		
	
}