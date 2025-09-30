#include <stdio.h>
int main() {
    int i,m;
    for(i=1;i<=3;i++){
        printf("Enter mileage (km/l): ");
        scanf("%d",&m);
        if(m<10)
             printf("Poor Mileage\n");
        else if(m<=20) 
            printf("Average Mileage\n");
        else 
            printf("Good Mileage\n");
    }
    return 0;
}
