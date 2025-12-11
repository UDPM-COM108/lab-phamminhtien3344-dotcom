#include <stdio.h>

int tenHam(int so1, int so2, int so3) {
    int max = so1; 
    if (so2 > max) {
        max = so2;
    }
    if (so3 > max) {
        max = so3;
    }
    return max; 
}
int main() {
    int a, b, c; 
    int soLonNhat; 
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &a);  
    printf("Nhap vao so thu hai: ");
    scanf("%d", &b);  
    printf("Nhap vao so thu ba: ");
    scanf("%d", &c);
    soLonNhat = tenHam(a, b, c);
    printf("So lon nhat trong 3 so %d, %d, %d la: %d\n", a, b, c, soLonNhat);
    return 0; 
}