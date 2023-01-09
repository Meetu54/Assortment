#include<stdio.h>
main(){
	int N;
	int r,c ;
    int sum=0;
    
    printf("Enter Value:");
	scanf("%d",&N);

	int a[N][N];
	
	for(r=0; r<N; r++){
		
		for(c=0; c<N; c++){
			
			printf("Enter Value [%d][%d]:",r,c);
			scanf("%d",&a[r][c]);
			
		}
	}

	for(r=0; r<N; r++){
		for(c=0; c<N; c++){
			
			printf("%d",a[r][c]);
			
			if(r==c){
				sum+=a[r][c];
				
			}
			else{
				
				printf("");
			}

		}
    
    printf("\n");
	
	}
	
		printf("%d",sum);
	
}
