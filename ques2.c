#include <stdio.h>
int main()
{
	int vehicle, member, hours;
	float fees;
	printf("enter the vehicle type (1=bike, 2=car, 3=truck):");
	scanf("%d",&vehicle);
	printf("enter member status(1=memmber, 0=non memeber):");
	scanf("%d",&member);
	printf("enter the hours parked");
	scanf("%d",&hours);
	if(vehicle<0 || vehicle>3){
	        printf("invalid type");
	    }
	        else if(hours <=0){
			printf("invalid duration");
		}
			
	
	else{
		if(vehicle==1){
			fees=20*hours;
		}
		else if(vehicle==2){
			if(hours<=2)
			fees=50;
			else
			fees=50+30*(hours-2);
		}
		else{
			if(hours<=3)
			fees=100;
			else
			fees=100 + 50*(hours-3);
		}
		if(member==1 && fees>200){
			fees=fees-(fees*0.15);
		}
		printf("final fee =%.2f",fees);
	}
	
	return 0;
		
}