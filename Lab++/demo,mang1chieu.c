#include <stdio.h>

int main() {
    int a[5]; 
    int s = 0;     
    printf("Nhap 5 phan tu:\n");
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]); 
        s += a[i]; 
    }
    printf("\nMang da nhap: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\nTong cua cac phan tu la: %d\n", s);
    
    return 0;
}