#include <stdio.h>
int main() {
    int i,temp;
    for(i=1;i<=3;i++){
        printf("Enter body temp: ");
        scanf("%d",&temp);
        if(temp<97)
            printf("Low Temperature\n");
        else if(temp<=99) 
            printf("Normal\n");
        else
           printf("Fever\n");
    }
    return 0;
}
