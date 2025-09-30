#include <stdio.h>
int main() {
    int i,price;
    for(i=1;i<=3;i++){
        printf("Enter petrol price: ");
        scanf("%d",&price);
        if(price<80) 
          n printf("Cheap Petrol\n");
        else if(price<=100) 
            printf("Moderate Petrol\n");
        else
              printf("Expensive Petrol\n");
    }
    return 0;
}
