#include <stdio.h>
int main(){

    int st_age;
    float st_marks;

    printf("Enter Your Age: ");
    scanf("%d",&st_age);
    
    printf("\nEnter Your Marks: ");
    scanf("%f",&st_marks);

    if((st_age==18) || (st_age>18)){

        if((st_marks==50) || (st_marks>50)){
            printf("\nEligible for Admission.");
        }
        else {

            printf("\nNot Eligible for Admission.");
        }
    }
    else{

        printf("\nNot Eligible for Admission.");
    }

    return 0;
}