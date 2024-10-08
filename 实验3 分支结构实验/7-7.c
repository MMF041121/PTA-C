#include <stdio.h>

int main() {
    int amount, type;
    char service;
    double price, total;
  
    scanf("%d %d %c", &amount, &type, &service);
    
    switch(type) {
        case 90: price = 6.95; break;
        case 93: price = 7.44; break;
        case 97: price = 7.93; break;
        default: return 1;
    }
    
    total = amount * price;
    
    if (service == 'm') {
        total *= 0.95;
    } else if (service == 'e') {
        total *= 0.97;
    }
    
    printf("%.2f\n", total);
    
    return 0;
}
