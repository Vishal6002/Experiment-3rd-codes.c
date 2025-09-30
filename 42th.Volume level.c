#include <stdio.h>
int main() {
    int i,v;
    for(i=1;i<=3;i++){
        printf("Enter volume level: ");
        scanf("%d",&v);
        if(v<20)
           printf("Silent\n");
        else if(v<=60) 
             printf("Medium\n");
        else
             printf("Loud\n");
    }
    return 0;
}
