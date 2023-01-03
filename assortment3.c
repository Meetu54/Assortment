#include<stdio.h>
main(){
	

	int N;
	int r,c ;
    int sum1=0;
   
   
	printf("Enter Value :");
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
			
         sum1+=a[r][c];
		
		}	
		
		
    	printf("\n");
		
	}
	{
	
	printf("sum1: %d",sum1);
	printf("\n");
}
	int M;
    
	int i,j ;
    int sum2=0;
   

	printf("Enter Value of N: ");
	scanf("%d",&M);

		int b[M][M];
	
	for(i=0; i<M; i++){
		for(j=0; j<M; j++){
			
			printf("Enter Value of [%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
			
		}
	}

	
	
	for(i=0; i<M; i++){
		
		for(j=0; j<M; j++){
			
	    printf("%d",b[i][j]);
			
         sum2+=b[i][j];
		
		}	
		
		
    	printf("\n");
		
	}
	{
	
	printf("sum2: %d",sum2);
	printf("\n");
}
 int sum=0;
 
 
  {
  	sum = sum1+sum2;
  	printf("Total Sum: %d",sum);
  	
  }
 
 	
	
}
