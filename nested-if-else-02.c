#include <stdio.h>
int main(){

int cnic_status,test_status;

printf("Do You Have a CNIC (1=Yes, 0=No): ");
scanf("%d",&cnic_status);


printf("Have You Passed the Test (1=Yes, 0=No): ");
scanf("%d",&test_status);

if (cnic_status==1){

    if(test_status==1){

        printf("License can be Issued!");
    }
    else{

        printf("License cannot be Issued!");
    }
}
else{

    printf("License cannot be Issued!");
}

return 0;
}