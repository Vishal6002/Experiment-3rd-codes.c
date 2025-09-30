#include <stdio.h>
int main() {
    int i,score;
    for(i=1;i<=3;i++){
        printf("Enter team score: ");
        scanf("%d",&score);
        if(score<100) 
            printf("Low Score\n");
        else if(score<=250) 
            printf("Average Score\n");
        else
           printf("High Score\n");
    }
    return 0;
}
