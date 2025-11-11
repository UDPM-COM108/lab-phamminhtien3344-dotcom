#include <stdio.h>
#define PI 3.14
#include <math.h>
// Khai báo Mẫu hàm (Function Prototypes)
// Điều này giúp compiler biết về các hàm này trước khi gặp định nghĩa của chúng
// Điều này sửa lỗi "implicit declaration" trước đó.
double tinh_chu_vi(double r);
double tinh_dien_tich(double r);
int main(){
//Bai 1: Tinh tong hieu 2 so nguyen
    float a, b, nhan, chia;
    printf("nhap vao 2 so thuc: ");
    scanf("%f %f", &a, &b);
    printf("xuat ra 2 so thuc: %f %f",a,b);
    nhan = a * b;
    chia = a/b;
    printf("\nNhan 2 so thuc: %.2f", nhan);
    printf("\nChia 2 so thuc: %.2f", chia);

//Bai 2: Tinh chu vi va dien tich HCN
    float chieudai, chieurong;
    printf("\nNhapvso chieudai va chieurong: ");
    scanf("%f %f", &chieudai, &chieurong);

    float chuvi = (chieudai + chieurong) *2;
    float dientich = chieudai + chieurong;

    printf("Chu vi hcn la: %f.2 cm\n", chuvi);
    printf("Dien tich hcn la: %f.2 cm%c", dientich);

//Bai 3: Tinh chu vi va dien tich hinh tron
    double ban_kinh;
    double chu_vi_ket_qua, dien_tich_ket_qua;

    printf("--- May tinh Chu vi & Dien tich Hinh tron (C) ---\n");

    // Vòng lặp yêu cầu nhập bán kính hợp lệ
    do {
        printf("Nhap ban kinh hinh tron (r > 0): ");
        // Sử dụng %lf cho double
        if (scanf("%lf", &ban_kinh) != 1) {
            printf("Loi nhap du lieu. Vui long nhap mot so.\n");
            // Xóa bộ đệm đầu vào để tránh vòng lặp vô hạn
            while (getchar() != '\n');
            continue; // Quay lại đầu vòng lặp
        }

        if (ban_kinh <= 0) {
            printf("Ban kinh phai la so duong (> 0). Vui long nhap lai.\n");
        }

    } while (ban_kinh <= 0);

    // 1. Tính toán
    chu_vi_ket_qua = tinh_chu_vi(ban_kinh);
    dien_tich_ket_qua = tinh_dien_tich(ban_kinh);

    // 2. In kết quả
    printf("\n✅ KET QUA VOI BAN KINH r = %.2lf:\n", ban_kinh);
    // Sử dụng %.4lf để in ra 4 chữ số thập phân
    printf("Chu vi hinh tron (C = 2 * PI * r) la: %.4lf\n", chu_vi_ket_qua);
    printf("Dien tich hinh tron (A = PI * r^2) la: %.4lf\n", dien_tich_ket_qua);

//bai 4 : xay dung chuong trinh tinh diem trung binh 
    float diemtoan, diemly, diemhoa, diemtb;
    printf("\nnhap vao diem toan, ly, hoa: ");
    scanf("%f %f %f", &diemtoan, &diemly, &diemhoa);
    diemtoan*=3; diemly*=2; diemhoa*=1;
    diemtb = (diemtoan + diemly + diemhoa) / 3;
    printf("diem trung binh: %.2f", diemtb);
    
//bai 5 tinh chu vi va dien tich hinh tam giac vuong
    float canh1, canh2;
    printf("\nnhap vao 2 canh ke hinh tam giac vuong: ");
    scanf("%f %f", &canh1, &canh2);
    float chuvi_tamgiac = canh1 + canh2 + (float)(canh1*canh1 + canh2*canh2);
    float dientich_tamgiac = (canh1 * canh2) / 2;
    printf("chu vi hinh tam giac vuong: %.2f", chuvi_tamgiac);
    printf("\ndien tich hinh tam giac vuong: %.2f", dientich_tamgiac);

    return 0;
}