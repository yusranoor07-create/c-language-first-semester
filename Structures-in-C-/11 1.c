#include<stdio.h>
struct employee {
    int id;
    char name[50];
    float salary;
};
int main (){
    struct employee e[3];
    int i;
    for ( i=0; i<3; i++){
    printf("Enter details for employee %d \n", i+1);
    printf("ID : ");
    scanf("%d", &e[i].id);
    getchar();
    printf("Name : ");
    fgets(e[i].name,sizeof(e[i].name),stdin);
    printf("Salary : ");
    scanf("%f",&e[i].salary);
    getchar();
    }
    printf("\n Employee Records \n");
    
    for(i=0;i<3;i++){
    printf(" Employee %d\n", i+1);
    printf("ID :%d\n ", e[i].id );
    printf("Name : %s\n", e[i].name);
    printf("Salary : %f\n", e[i].salary);
    return 0;
    
    }
}
