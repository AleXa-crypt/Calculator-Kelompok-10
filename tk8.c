#include <stdio.h>

int Addition(int a, int b) {
    int hasil;
    //fungsi penjumlahan
    return hasil;
}

int Subtraction(int a, int b) {
    int hasil;
    //fungsi pengurangan
    return hasil;
}

int Multiplication(int a, int b) {
    int hasil;
    //fungsi perkalian
    return hasil;
}

int Subtraction(int a, int b) {
    int hasil;
    //fungsi pembagian
    return hasil;
}

int main(void) {
    printf("=== Welcome to Calculator Kelompok-10 ===\n");
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    int n;
    printf("Masukkan pilihan anda (1-4): ");
    scanf("%d", &n);

    switch (n) {
        case 1: 
            printf("Masukkan 2 angka yang ingin dijumlahkan (addition): ");
            int a, b;
            printf("Angka ke-1: ");
            scanf("%d", &a);
            printf("Angka ke-2: ");
            scanf("%d", &b);
            int hasil = Addition(a, b);
            printf("Hasil penjumlahnnya adalah %d", hasil);
            break;
        case 2:
            printf("Masukkan 2 angka yang ingin dikurangi (subtraction): ");
            int a, b;
            printf("Angka ke-1: ");
            scanf("%d", &a);
            printf("Angka ke-2: ");
            scanf("%d", &b);
            int hasil = Subtraction(a, b);
            printf("Hasil pengurangannya adalah %d", hasil);
            break;
        case 3:
            printf("Masukkan 2 angka yang ingin dikalikan (multiplication): ");
            int a, b;
            printf("Angka ke-1: ");
            scanf("%d", &a);
            printf("Angka ke-2: ");
            scanf("%d", &b);
            int hasil = Multiplication(a, b);
            printf("Hasil perkaliannya adalah %d", hasil);
            break;
        case 4:
            printf("Masukkan 2 angka yang ingin dibagi (division): ");
            int a, b;
            printf("Angka ke-1: ");
            scanf("%d", &a);
            printf("Angka ke-2: ");
            scanf("%d", &b);
            int hasil = Division(a, b);
            printf("Hasil pembagiannya adalah %d", hasil);
            break;
        default: 
            printf("Input invalid!\n");
    }

    return 0;
}