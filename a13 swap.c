#include <stdio.h>
void swap(int *a, int *b);
int main(void){
int c = 3 , d =4;
swap(&c,&d);	
	
printf("\n%d and %d ", c , d);	
	
	
	
	
}
void swap(int *a, int *b){
int t;
t = *a;
*a = *b;
*b = t;
printf("%d and %d ", *a , *b);
printf("\nLets See");	
}
