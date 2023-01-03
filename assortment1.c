#include<stdio.h>
main(){
	
	int n;
	
	printf("Enter Number: ");
	scanf("%d",&n);
	
	int i;
	int a[n] ;
	for(i=0; i<n; i++){
		
		
		scanf("%d",&a[i]);
	}
	  
	
	for(i=0; i<n; i++){
		if(i<0){
			
				printf("%d\n",a[i]<0);
		}
		
		else{
			printf("");
		}
	
	}
	
	
	
}
