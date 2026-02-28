#include<stdio.h>
int main (){
     
     int marks[5];
     int sum = 0;
     int average;
      int i;
     for( i = 0;i<5;i++){
     	scanf("%d", &marks[i]);
     	sum = sum + marks[i];
     }
        average = sum / 5;
        printf("AVERAGE OF MARKS IS : %d", average);	
	
	return 0;
}
