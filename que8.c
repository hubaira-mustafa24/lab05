#include <stdio.h>
int main()
{
	int permission;
	printf("enter the permission:");
	scanf("%d",&permission);
	if(permission & 4) {
		printf("acees granted : full control");
	}
	else{
		if((permission & 1) && (permission & 2)) {
			printf("access granted:read and write");
		}
		else{
			if((permission & 1) && !(permission & 2)){
			printf("access granted:read only");
		}
		
		if((permission & 1) && !(permission & 2)){
			printf("access granted:read only");
		}
		else {
			printf("access denied");
		}
	  }
	}
	return 0;
}