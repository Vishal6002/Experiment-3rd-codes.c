#include <stdio.h>
int main() {
    int i, wpm;
    for(i=1; i<=3; i++) {
        printf("Enter typing speed (WPM): ");
        scanf("%d",&wpm);
        if(wpm < 30) 
             printf("Slow\n");
        else if(wpm < 60) 
            printf("Average\n");
        else 
             printf("Fast\n");
    }
    return 0;
}
