 #include <stdio.h>
 int main()
 {
 	int choice;
 	int subchoice,delayed;
 	printf("enter the choice (1=greeting, 2=query, 3=complaint, 4=feedback)");
 	scanf("%d",&choice);
 	switch (choice){
 		printf("enter the sub choice");
 		printf("1=morning\n");
 		printf("2=evening\n");
 		scanf("%d",&subchoice);
 		switch(subchoice){
 		case 1:
 			printf("good morning!");
 			break;
 		case 2:
		 printf("good evening!");
		 break;
		 default:
		 printf("invalid selection");		
		 }
		 break;
		 case 2:
		printf("choose sub type\n");
		printf("1=product\n");
		printf("2=billing\n");
		printf("3=technical\n");
		scanf("%d",&subchoice);
		switch (subchoice){
			case 1:
			printf("here is information about the product\n");
			break;
			case 2:
				printf("let me help you with billing");
				break;
			case 3:
			printf("let me help you solve technical issue");
			break;
			default:
			printf("invalid selection");	
		}
		case 3:
			printf("choose sub choice");
			printf("1=delivery\n");
			printf("2=quality\n");
			scanf("%d",&subchoice);
			switch(subchoice){
				printf("is your order delayed(1=yes, 2= no):");
				scanf("%d",&delayed);
				if(delayed==1)
				printf("we sincerely apologise for the late delivery\n");
				if(delayed==0)
				printf("we apologize for any inconinince in the delivery");
				else
				printf("invalid selection");
				break;
				case 2:
				printf("we apologize for the quality issue");
				break;
				default:
				printf("invalid selection\n" ); 
				}
				case 4:
					printf("choose subchoice");
					printf("1=positive\n");
					printf("2=negative\n");
					scanf("%d",&subchoice);
					switch(subchoice){
						case 1:
							printf("thank you for positive feed back");
							break;
							case 2:
								printf("thank you for the feed back we will try to look in it");
								break;
								default:
									printf("invalid selection");
									
					}
					break;
					default:
						printf("invalid selection");
						return 0;
	 }
}
	 
 	
 