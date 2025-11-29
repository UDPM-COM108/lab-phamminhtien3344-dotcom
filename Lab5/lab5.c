#include <stdio.h>

// Tên hàm nên đặt rõ ràng hơn, ví dụ: findMaxOfThree, nhưng tôi dùng tenHam theo yêu cầu
// Hàm tìm giá trị lớn nhất giữa 3 số
int tenHam(int so1, int so2, int so3) {
    int max = so1; // Giả sử số đầu tiên là lớn nhất

    // So sánh số thứ hai
    if (so2 > max) {
        max = so2;
    }

    // So sánh số thứ ba
    if (so3 > max) {
        max = so3;
    }

    return max; // Trả về giá trị lớn nhất đã tìm được
}

// Hàm main
int main() {
    int a, b, c; // Khai báo 3 biến để lưu input
    int soLonNhat; // Biến để lưu kết quả

    // 1. Input: Nhập từ bàn phím 3 số bất kỳ
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &a);
    
    printf("Nhap vao so thu hai: ");
    scanf("%d", &b);
    
    printf("Nhap vao so thu ba: ");
    scanf("%d", &c);

    // 2. Gọi hàm: Gọi hàm tenHam để tìm giá trị lớn nhất
    soLonNhat = tenHam(a, b, c);

    // 3. Output: Xuất ra màn hình số lớn nhất
    printf("So lon nhat trong 3 so %d, %d, %d la: %d\n", a, b, c, soLonNhat);

    return 0; // Kết thúc chương trình
}