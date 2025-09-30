#include <stdio.h>
int main() {
    int i,units;
    for(i=1;i<=3;i++){
        printf("Enter electricity units: ");
        scanf("%d",&units);
        if(units<100) 
            printf("Low Bill\n");
        else if(units<=300) 
             printf("Medium Bill\n");
        else 
               printf("High Bill\n");
    }
    return 0;
}
