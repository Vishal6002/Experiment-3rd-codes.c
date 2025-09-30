#include <stdio.h>
int main() {
    int i,marks;
    for(i=1;i<=3;i++){
        printf("Enter marks: ");
        scanf("%d",&marks);
        if(marks>=40)
               printf("Pass\n");
        else 
             printf("Fail\n");
    }
    return 0;
}
