#include<stdio.h>

int main()
{
        int i,j,n;
    printf("Enter Number :- \n");
    scanf("%d",&n);
    	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++)
			printf(" ");
		for(int j=1;j<=2*i+1;j++)
			printf("%d",j);
            printf("\n");
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<=i;j++)
			printf(" ");
		for(int j=1;j<=(n-2*i)+2;j++)
			printf("%d",j);
            printf("\n");
	}
}



