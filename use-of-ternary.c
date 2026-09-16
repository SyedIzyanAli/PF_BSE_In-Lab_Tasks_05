#include<stdio.h>
int main(){

    float marks;
   printf("Enter Your Marks: ");
   scanf("%f",&marks);
   int result = ((marks==50)||(marks>50))? printf("\nYour Result Based Upon Your Marks is: Pass!"):printf("\nYour Result Based Upon Your Marks is: Fail!");
    
    return 0;
}