#include <stdio.h>
int main() {
    int i, moist;
    for(i=1; i<=3; i++) {
        printf("Enter soil moisture (%%): ");
        scanf("%d",&moist);
        if(moist < 30)
              printf("Dry Soil\n");
        else if(moist < 70)
              printf("Moist Soil\n");
        else
              printf("Wet Soil\n");
    }
    return 0;
}
