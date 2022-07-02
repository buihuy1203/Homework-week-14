#include <stdio.h>
#include <string.h>

void Bai1(){
	struct SinhNhat{
            int day;
            int month;
            int year;
    };
    struct Diem{
            double math;
            double phy;
            double chem;
    };
    struct Student {
        char Name[1000];
        int MSSV;
        SinhNhat DOB;
        Diem Grade;
    };
    
    int n;
    printf("\nNhap so luong sinh vien: ");
    scanf("%d", &n);
    Student s[100];
    for(int i = 0; i < n;i++){
        printf("\nSinh vien %d: \n", i+1);
        printf("Nhap ten sinh vien: ");
        fflush(stdin);
        gets(s[i].Name);
        printf("Nhap MSSV: ");
        scanf("%d", &s[i].MSSV);
        do{
        printf("Nhap Ngay Thang Nam Sinh (dd/mm/y): ");
        scanf("%d%d%d", &s[i].DOB.day, &s[i].DOB.month, &s[i].DOB.year);
        }while(s[i].DOB.day < 1 || s[i].DOB.day >31|| s[i].DOB.month < 1|| s[i].DOB.month > 12|| s[i].DOB.year < 0);
        do{
        printf("Nhap Diem Toan Ly Hoa: ");
        scanf("%lf%lf%lf", &s[i].Grade.math, &s[i].Grade.phy, &s[i].Grade.chem);
        }while(s[i].Grade.math < 0 ||s[i].Grade.math > 10||s[i].Grade.phy < 0 ||s[i].Grade.phy > 10||s[i].Grade.chem < 0 ||s[i].Grade.chem > 10);
        printf("\n");
    }
    printf("Sinh vien co diem >=23: \n");
    for(int i = 0; i < n;i++){
        if(s[i].Grade.math+s[i].Grade.phy+s[i].Grade.chem >= 23){
            printf("Sinh vien %s\n", s[i].Name);
            printf("MSSV: %d\n",s[i].MSSV);
            printf("Ngay Thang Nam Sinh: %d/%d/%d \n", s[i].DOB.day, s[i].DOB.month, s[i].DOB.year);
            printf("Diem Toan Ly Hoa: %lf %lf %lf \n",s[i].Grade.math,s[i].Grade.phy,s[i].Grade.chem );
            printf("\n");
        }
    }
    printf("Sinh vien khong co diem liet (>3): \n");
    for(int i = 0; i < n;i++){
        if(s[i].Grade.math> 3&&s[i].Grade.phy>3&&s[i].Grade.chem > 3){
            printf("Sinh vien %s\n", s[i].Name);
            printf("MSSV: %d\n",s[i].MSSV);
            printf("Ngay Thang Nam Sinh: %d/%d/%d \n", s[i].DOB.day, s[i].DOB.month, s[i].DOB.year);
            printf("Diem Toan Ly Hoa: %lf %lf %lf \n",s[i].Grade.math,s[i].Grade.phy,s[i].Grade.chem );
            printf("\n");
        }
    }
}
int main(){
    printf("Bai 1: ");
    Bai1();
}

