#include <stdio.h>
int main() {
    int i,price;
    for(i=1;i<=3;i++){
        printf("Enter laptop price: ");
        scanf("%d",&price);
        if(price<30000) 
          printf("Budget Laptop\n");
        else if(price<=60000)
            printf("Mid-Range Laptop\n");
        else 
             printf("Premium Laptop\n");
    }
    return 0;
}
