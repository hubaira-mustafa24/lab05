#include <stdio.h>
int main()
{
	int age, oxygenlevel, heartrate;
	printf("enter the age");
	scanf("%d",&age);
	printf("enter the oxygenlevel");
	scanf("%d",&oxygenlevel);
	printf("enter the heartrate");
	scanf("%d",&heartrate);
	if(oxygenlevel<90){
		printf("crictal:immediate action");
	}
	else if(heartrate>130 || heartrate<40){
		printf("critcal:cardiac alert");
	}
	else if(age>=65 && oxygenlevel<95){
		printf("high priorty");
	}
	else if("age<=5 && heartrate>110"){
		printf("high priorty");
	}
	else if("oxygenlevel<97"){
		printf("medium priorty");
	}
	else{
		printf("low priority");
	}
	return 0;
}