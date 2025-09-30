#include <stdio.h>
int main() {
    int i,age;
    for(i=1;i<=3;i++){
        printf("Enter age: ");
        scanf("%d",&age);
        if(age<18)
                printf("Minor\n");
        else if(age<=59) 
              printf("Adult\n");
        else
                printf("Senior Citizen\n");
    }
    return 0;
}
