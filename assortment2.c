#include<stdio.h>

main(){

	int n, large1 = 0, large2 = 0, t = 0;

	printf("Enter Size:- ");
	scanf("%i",&n);

	int a[n];

	int i;

	for(i=0; i<n; i++){


		scanf("%i",&a[i]);
	}

    large1 = a[0];
    large2 = a[1];

    if (large1 < large2)
    {
        t = large1;
        large1 = large2;
        large2 = t;
    }

    for (i = 2; i < n; i++){

        if (a[i] > large1){

            large2 = large1;
            large1 = a[i];
        }

		else if (a[i] > large2 && a[i] != large1){

            large2 = a[i];
        }
    }

    printf ("The Second large = %i\n", large2);

}
