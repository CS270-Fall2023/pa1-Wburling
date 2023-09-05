#include "functions.h"

int main() {
    char * product[3]={"Milk", "Eggs", "Bread"};
    double price[3]={2.75, 3.0, 1.69};
    printf("Product     Price\n");
    for (int i = 0; i<3; i++){
        printf("%s   %.2f\n", product[i], price[i]);
    }

}
