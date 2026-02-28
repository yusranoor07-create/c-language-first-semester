#include<stdio.h>
int main (){
     
     int salary[5];
     int totalSum = 0;
      int i;
     for( i = 0;i<5;i++){
     	scanf("%d", &salary[i]);
     	totalSum +=  salary[i];
     }
        
        printf("TOTAL SALARY OF EMPLOYEES ARE : %d ",totalSum );	
	
	return 0;
}

