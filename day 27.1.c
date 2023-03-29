#include<stdio.h>

void swap (int *a , int *b){
	int c;
	
c = *a;
*a = *b;
*b = c;

    printf("After swap A : %d\n",*a);
	printf("After swap B : %d\n",*b);	
}

int main (){
	
	int a = 10;
	int b = 90;
	
	swap (&a , &b);
	
	return 0;
}
