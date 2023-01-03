#include <stdio.h>  

main(){
	int i,n;
    int a[i];

    printf("Enter size :- ");
    scanf("%i", &n);

    printf("Enter number : \n");

	for(i=0; i<n; i++){

        scanf("%i", &a[i]);

	}

    printf("\neven number\n");

	for(i=0; i<n; i++){

        if(a[i]%2 == 0){

            printf("%i\n", a[i]);

		}

    }   

}  
