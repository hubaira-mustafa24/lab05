#include <stdio.h>
int main()
{
	int balance, withdraw, status, pin;
	int notes2000, notes500, notes100; 
	printf("enter the card status(1=accepted, 0=blocked):");
	scanf("%d",&status);
	printf("enter the pin (1=correct, 0=wrong):");
	scanf("%d",&pin);
	printf("enter the balance");
	scanf("%d",&balance);
    printf("enter the balance to withdraw");
    scanf("%d",&withdraw);
    
	if(status==0){
		printf("blocked,contact the bank ");
		}
		else if(pin==0){
			printf("incorrect pin\n");
		}
		else if(withdraw<=0){
			printf("invalid amount\n");
		}
		else if(withdraw>balance){
			printf("insufficent balance\n");
		}
		else if(withdraw>25000){
			printf("limit exceeds\n");
		}
		else if(withdraw-balance<1000){
			printf("minium balance must be maintained");
		}
		else{
			balance=balance-withdraw;
			notes2000=withdraw/2000;
			withdraw=withdraw%2000;
			notes500=withdraw/500;
			withdraw=withdraw%500;
			notes100=withdraw/100;
			printf("newbalance=%d\n",balance);
			printf("notes2000=%d\n",notes2000);
			printf("notes500=%d\n",notes500);
			printf("notes100=%d\n",notes100);
			printf("collect your cash");
		}
		return 0;
	
}