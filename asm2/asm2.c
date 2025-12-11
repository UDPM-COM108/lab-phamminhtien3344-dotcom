#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Định nghĩa cấu trúc Sinh Viên
struct SINHVIEN{
    char HOTEN[50];
    float diem;
    char HOCLUC[20];
};

typedef struct SINHVIEN SV;

// Hàm xếp loại học lực
void xepLoai(SV *sv) {
    if (sv->diem >= 9.0) strcpy(sv->HOCLUC, "Xuat sac");
    else if (sv->diem >= 8.0) strcpy(sv->HOCLUC, "Gioi");
    else if (sv->diem >= 7.0) strcpy(sv->HOCLUC, "Kha");
    else if (sv->diem >= 5.0) strcpy(sv->HOCLUC, "Trung binh");
    else strcpy(sv->HOCLUC, "Yeu");
}

// Hàm sắp xếp theo thứ tự giảm dần
void sapxep(SV a[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i].diem < a[j].diem) {
                SV temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int luachon;
    do {
        printf("\n==================== MENU ====================\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim UCLN va BCNN\n");
        printf("3. Tinh tien Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien (Menh gia VN)\n");
        printf("6. Tinh lai suat vay tra gop\n");
        printf("0. Thoat menu\n");
        printf("===============================================\n");

        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luachon);
        
        switch (luachon) {
            
            case 1: {
                printf("\nChuc nang 1: Kiem tra so nguyen\n");
                float num;
                printf("Nhap vao mot so bat ky: ");
                scanf("%f", &num);
                if (num == (int)num) {
                    if (num > 0) printf("%.0f la so nguyen duong\n", num);
                    else if (num < 0) printf("%.0f la so nguyen am\n", num);
                    else printf("0 la so nguyen\n");
                } else {
                    printf("%.2f KHONG PHAI la so nguyen!\n", num);
                }
                break;
            }
            
            case 2: {
                printf("\nChuc nang 2: Tim UCLN va BCNN\n");
                int a, b;
                printf("Nhap so thu nhat: ");
                scanf("%d", &a);
                printf("Nhap so thu hai: ");
                scanf("%d", &b);
                int x = a, y = b;
                while (y != 0) {
                    int temp = y;
                    y = x % y;
                    x = temp;
                }
                printf("UCLN cua %d va %d la: %d\n", a, b, x);
                printf("BCNN cua %d va %d la: %d\n", a, b, (a * b) / x);
                break;
            }

            case 3: {
                printf("\nChuc nang 3: Tinh tien Karaoke\n");
                int batdau, ketthuc;
                float giagoc = 30000, tongtien = 0;
                printf("Nhap gio bat dau (0-23): ");
                scanf("%d", &batdau);
                printf("Nhap gio ket thuc (0-23): ");
                scanf("%d", &ketthuc);

                if (batdau < 0 || ketthuc > 23 || batdau >= ketthuc) {
                    printf("Thoi gian khong hop le!\n");
                    break;
                }
                int sogio = ketthuc - batdau;
                tongtien = giagoc + (sogio > 1 ? (sogio - 1) * (giagoc * 0.7) : 0);
                if (batdau >= 14 && ketthuc <= 17) {
                    tongtien *= 0.9;
                }
                printf("Tong so gio: %d\n", sogio);
                printf("Tien karaoke phai tra: %.0f VND\n", tongtien);
                break;
            }

            case 4: {
                printf("\nChuc nang 4: Tinh tien dien\n");
                int kwh;
                printf("Nhap so dien tieu thu (kWh): ");
                scanf("%d", &kwh);
                if (kwh < 0) {
                    printf("So dien khong hop le!\n");
                    break;
                }
                long tien = 0;
                if (kwh <= 50) tien = kwh * 1678;
                else if (kwh <= 100) tien = 50 * 1678 + (kwh - 50) * 1734;
                else if (kwh <= 200) tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
                else if (kwh <= 300) tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
                else if (kwh <= 400) tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
                else tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
                printf("Tien dien phai tra: %ld VND\n", tien);
                break;
            }

            case 5: {
                printf("\nChuc nang 5: Doi tien\n");
                long money;
                printf("Nhap so tien can doi (VND): ");
                scanf("%ld", &money);
                if (money <= 0) {
                    printf("So tien khong hop le!\n");
                    break;
                }
                int menhgia[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
                int count[9] = {0};
                long temp = money;
                for (int i = 0; i < 9; i++) {
                    count[i] = temp / menhgia[i];
                    temp %= menhgia[i];
                }
                printf("Ket qua doi tien:\n");
                for (int i = 0; i < 9; i++) {
                    if (count[i] > 0)
                        printf("%d to %d VND\n", count[i], menhgia[i]);
                }
                printf("So tien con lai khong doi duoc: %ld VND\n", temp);
                break;
            }

            case 6: {
                printf("\nChuc nang 6: Tinh lai suat vay tra gop\n");
                double tienVay, laiSuat;
                int soThang;
                printf("Nhap so tien vay (VND): ");
                scanf("%lf", &tienVay);
                printf("Nhap so thang vay: ");
                scanf("%d", &soThang);
                printf("Nhap lai suat hang thang (%%): ");
                scanf("%lf", &laiSuat);
                laiSuat /= 100.0;
                double gocHangThang = tienVay / soThang;
                double tienConLai = tienVay;
                printf("\n===== BANG THANH TOAN =====\n");
                for (int i = 1; i <= soThang; i++) {
                    double tienLai = tienConLai * laiSuat;
                    double tienTra = gocHangThang + tienLai;
                    printf("Thang %2d: Goc: %.0lf | Lai: %.0lf | Tong tra: %.0lf\n", i, gocHangThang, tienLai, tienTra);
                    tienConLai -= gocHangThang;
                }
                break;
            }
        }
    }while (luachon != 0);
    
    return 0;
}    