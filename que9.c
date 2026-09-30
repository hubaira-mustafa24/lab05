#include <stdio.h>
int main()
{
	int permission;
	printf("enter the permission");
	scanf("%d",&permission);
	if(permission & 1)
	printf("Read\n");
	if(permission & 2)
	printf("Write\n");
	if(permission & 4)
	printf("Execute\n");
	if(permission & 8)
	printf("Delete\n");
	if(permission & 16)
	printf("Admin\n");
	printf("\nAccess decision\n");
	if (permission & 16) {
		printf("Full access:admin");
	}
	else{
		if((permission & 2) && (permission & 8)) {
			printf("Accees:delete and write");
		}
		else{
			if((permission & 2) && !(permission & 2)){
				printf("Access : executive only");
			}
			if((permission & 1) && !(permission & 2) && !(permission & 4)){
				printf("Access:read only");
			}
			else{
				if(!(permission & 1) && !(permission & 2) && !(permission & 4) && !(permission & 8) && !(permission & 16)){
				printf("Access denied");
				}
				
				
			
			else{
				printf("ACCESS : CUSTOM EDITION");
		      } 
			}
		}
	}
	return 0;
}