#include <stdio.h>
int main (){

int department,section;

printf("Enter Your Department (1 = Computer Science, 2 = Information Technology, 3 = Artificial Intelligence): ");
scanf("%d",&department);

printf("\nEnter Your Section (1 = Section A, 2 = Section B): ");
scanf("%d",&section);

switch (department)
{
    case 1:
    switch (section)
    {
    case 1:
        printf("Department Entered: Computer Science.");
        printf("\nSection Entered: A");
        break;

    case 2:
    
        printf("Department Entered: Computer Science.");
        printf("\nSection Entered: B");
    break;

    default:
    printf("No such section exists. Recheck!");
            printf("\nDepartment Entered: Computer Science.");

        break;
    }
    break;

    case 2:
    switch (section)
    {
    case 1:
       
        printf("Department Entered: Information Technology.");
        printf("\nSection Entered: A");
        break;

    case 2:
    
        printf("Department Entered: Information Technology.");
        printf("\nSection Entered: B");
    break;

    default:
    printf("No such section exists. Recheck!");
            printf("\nDepartment Entered: Information Technology.");

        break;
    }

    break;

    case 3:
    switch (section)
    {
    case 1:
       
        printf("Department Entered: Artificial Intelligence.");
        printf("\nSection Entered: A");
        break;

    case 2:
    
        printf("Department Entered: Artificial Intelligence.");
        printf("\nSection Entered: B");
    break;

    default:
    printf("No such section exists. Recheck!");
            printf("\nDepartment Entered: Artificial Intelligence.");

        break;
    }
    break;

default:
printf("No such Department exists. Recheck!");
    break;
}



    return 0;
}