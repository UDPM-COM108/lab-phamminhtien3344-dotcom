#include <stdio.h>
struct SINHVIEN{
    int MASV;
    float DIEM;
    char HOTEN[50];
};
int main(){
    struct SINHVIEN SV1;
    printf("nhap masv: ");
    scanf("%d", &SV1.MASV);
    getchar();
    printf("nhap ho ten: ");
    scanf("%s", SV1.HOTEN);
    printf("\nnhap diem: ");
    scanf("%f", &SV1.DIEM);
     
    printf("Masv: %d - Hoten: %s - Diem: %.2f", SV1.MASV,SV1.HOTEN,SV1.DIEM);
    return 0;     
}