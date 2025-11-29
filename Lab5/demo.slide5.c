#include <stdio.h>
#include<math.h>
int main() {
   
    int a = -5;
    int b = 10;
    int c = 15;

  
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

   
    printf("Gia tri: a = %d, b = %d, c = %d\n", a, b, c);
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
// Bài 2
double x_abs = -5.0;
    // fabs() dùng để tính giá trị tuyệt đối của số thực (double)
    double ket_qua_abs = fabs(x_abs); 
    
    printf("\n* **Tính Giá trị Tuyệt đối:**\n");
    printf("  -> x = |-5| = %.2f\n", ket_qua_abs);
    return 0;
}