#include <stdio.h>
int main() {
    int i, marks;
    for(i=1; i<=5; i++) {
        printf("Enter project marks: ");
        scanf("%d",&marks);
        if(marks >= 80) 
            printf("Excellent\n");
        else if(marks >= 50)
              printf("Satisfactory\n");
        else 
             printf("Poor\n");
    }
    return 0;
}
