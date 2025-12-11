#include <stdio.h>
#include <string.h>
//#include <ctype.h>
//#include <stdlib.h>
struct sinhvien {
    int MaSV;
    char HOTEN[50];
    float diem;
    char hocluc[10];
};
void inputstructsinhvien(struct sinhvien x[], int n){
    int i;
    for (i=0; i<n; i++){
        printf("nhap MaSV[%d]: ", i);
        scanf("%d", &x[i].MaSV);
        getchar();
        printf("nhap ho ten[%d]: ", i);
        scanf("%s", &x[i].HOTEN);
        printf("nhap diem[%d]:",i);
        scanf("%f", &x[i].diem);
    }
}
void printstructsinhvien(struct sinhvien x[], int n){
    int i;
    for (i=0; i<n; i++){
        printf("nhap MaSV: %d ", x[i].MaSV);
        printf("nhap ho ten:%s ", x[i].HOTEN);
        printf("nhap diem: %f",x[i].diem);
        printf("hoc luc: %f", x[i].hocluc);
    }
}
void xeploaistructsinhvien(struct sinhvien x[], int n){
    int i;
    for(i=0; i<n;i++){
        if(x[i].diem<5)
            strcpy(x[i].hocluc, "yeu");
        else if(x[i].diem<6.5)
            strcpy(x[i].hocluc, "TB");
        else if(x[i].diem<8)
            strcpy(x[i].hocluc, "kha");
        else if(x[i].diem<9)
            strcpy(x[i].hocluc, "gioi");
        else
            strcpy(x[i].hocluc, "xuat sac");
        }
}