#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter your marks\n");
    int marks =0;
    scanf("%d",&marks);
    if(marks>94){
        printf("Your grade is A");
    }
    else if(marks>69){
        printf("Your grade is B");
    }
    else if(marks>49){
        printf("Your grade is C");
    }
    else{
        printf("Your grade is D");
    }
}
