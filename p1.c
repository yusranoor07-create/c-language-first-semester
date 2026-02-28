#include<stdio.h>
int main(){
     int age;
     printf("Enter your age.\n");
     scanf("%d", &age);
     
     if(age<18){
        printf("**You can not drive.**\n");
     }
     else if(age<=18){
        printf("**You can drive.**\n");
     }
     else if(age>40){
        printf("**You can drive but drive carefully.**\n");
     }
     else{
        printf("**You have entered wrong output.**\n");
     }	
	

       return 0;
}
