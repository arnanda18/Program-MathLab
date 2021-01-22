#include <conio.h>
#include <stdio.h>
#include <string>


void cetak_rumus(){
    printf("Rumus Volume tabung || V = phi r x r x t ||\n");
    printf("Rumus Volume kubus || V = s x s x s ||\n");
    printf("Rumus Luas Persegi || L = sisi x sisi ||\n");
    printf("Rumus Luas Segitiga || L = 1/2 x alas x t ||\n");
    printf("Rumus Lingkaran || L = phi x r x r ||\n");
    printf("Rumus Trapesium || L = 1/2 x t x (a + b) ||\n");
    printf("Rumus Layang-layang || L = 1/2 x d1 x d2 ||\n");
    printf("Rumus Jajar Genjang || L = ALas x Tinggi ||\n");
    printf("Rumus Belahketupat || L = 1/2 x d1 x d2 ||\n");
    printf("Rumus Persegi panjang || L = panjang x lebar ||\n");
    printf("Rumus Mecari rata-rata || = jumlah nilai : banyaknya nilai ||\n");
    printf("Rumus menghitung Kecepatan || = jarak/waktu || \n");
    printf("Rumus menghitung Waktu || = jarak/kecepatan || \n");
    printf("Rumus menghitung Jarak || = kecepatan x waktu || \n");
}

void cetak_menu(){
    printf("1.Menghitung Volume tabung\n");
    printf("2.Menghitung Volume kubus\n");
    printf("3.Menghitung Luas Persegi\n");
    printf("4.Menghitung Luas Segitiga\n");
    printf("5.Menghitung Lingkaran\n");
    printf("6.Menghitung Trapesium\n");
    printf("7.Menghitung Layang-layang\n");
    printf("8.Menghitung Jajar Genjang\n");
    printf("9.Menghitung Belahketupat\n");
    printf("10.Menghitung Persegi panjang\n");
    printf("11.Mencari kelipatan suatu bilangan\n");
    printf("12. Menghitung rata-rata\n");
    printf("13. Mencari kecepatan\n");
    printf("14. Mencari Waktu\n");
    printf("15. Mencari Jarak\n");
    printf("16. Kembali ke Atas\n");
    printf("17. Exit\n");
}

void tabung(int t, int r){
    float phi=3.14, V;
    V = phi * r * r * t;
    printf("Volume tabung = %f", V);
}
int f(int s){
    return s * s * s;
}
void persegi(int s){
    int L;
    L = s * s;
    printf("Luas Persegi = %d", L);
}

void segitiga(int alas, int t){
    float L;
    L = alas * t * 1/2;
    printf("Luas segitiga = %f", L);
}
void lingkaran(int r){
    float phi=3.14, L;
    L = phi * r * r;
    printf("Luas Lingkaran = %f", L);
}
void trapesium(int a, int b, int t){
    float L;
    L = t * (a + b) * 1/2;
    printf("Luas Trapesium = %f", L);
}
void layang_layang(int d1, int d2){
    float L;
    L = d1 * d2 * 1/2;
    printf("Luas layang-layang = %f", L);
}
void jajar_genjang(int alas, int t){
    float L;
    L = alas * t;
    printf("Luas Jajar genjang = %f", L);
}
void persegi_panjang(int p, int l){
    float L;
    L = p * l;
    printf("Luas Persigi panjang = %f", L);
}
void kel_bil(int a, int n, int i){
    i = a;
    while (i < n)
    {
        printf("%d", i);
        printf(" ");
            i = i + a;
    }
}
void clrscr(){
    system("cls");
}
void kecepatan(float jar, float wak){
    float kec;
    printf("Masukkan jarak (dalam km) : "); scanf("%f", &jar);
    printf("Masukkan waktu (dalam jam) : "); scanf("%f", &wak);
    kec = jar/wak;
    printf("Kecepatan = %f km/jam", kec);
}
void waktu(float jar, float kec){
    float wak;
    printf("Masukkan jarak (dalam km) : "); scanf("%f", &jar);
    printf("Masukkan kecepatan (dalam km/jam) : "); scanf("%f", &kec);
    wak = jar/kec;
    printf("Waktunya = %f jam", wak);
}
void jarak(float wak, float kec){
    float jar;
    printf("Masukkan waktu (dalam jam) : "); scanf("%f", &wak);
    printf("Masukkan kecepatan (dalam km/jam) : "); scanf("%f", &kec);
    jar = kec * wak;
    printf("Jaraknya = %f km", jar);
}

using namespace std;

int main() {
    mulai:
    int n;
     struct rata_rata {
        int nilai;
        char mapel[20];
        int jum;
    }array1[n];
    int rumus, menu, alas, a, b, V, L, s, r, t, d1, d2, p, l, i;
    float jar, wak, kec;
    float rata2;
    printf("=======PROGRAM MATHLAB KAMUS DASAR ANAK SD======\n");
    printf("Pilihan Menu :\n");
    printf("1. Lihat Rumus Matematika Dasar\n");
    printf("2. Kerjakan Rumus\n");
    printf("3. Exit\n");
    printf("Masukkan Pilihan Menu : ");
    scanf("%d", &rumus);
    switch (rumus)
    {
    case 1:
        printf("==========================================\n");
        cetak_rumus();
        printf("==========================================\n");
        printf("Tekan Enter untuk kembali ke menu");
        getch();
        clrscr();
        goto mulai;
        break;
    
    case 2:
        menu2:
        printf("==========================================\n");
        cetak_menu();
        printf("==========================================\n");
        printf("Masukkan pilihan menu : ");
        scanf("%d", &menu);
        clrscr();
        if (menu == 1)
        {
            printf("<== Menghitung Volume tabung ==>\n");
            printf("Masukkan jari-jari: ");scanf("%d", &r);
            printf("Masukkan tinggi : ");scanf("%d", &t);
            tabung(t, r);
            printf("\nTekan Enter untuk kembali ke menu");
            getch();
            clrscr();
            goto menu2;
        }else if (menu == 2)
        {
            printf("<== Menghitung Volume Kubus ==>\n");
            printf("Masukkan sisi : ");
            scanf("%d", &s);
            V = f(s);
            printf("Volume Kubus = %d", V);
            printf("\nTekan Enter untuk kembali ke menu");
            getch();
            clrscr();
            goto menu2;
        }else if (menu == 3) {
            printf("<== Menghitung Luas Persegi ==>\n");
            printf("Masukkan sisi : ");
            scanf("%d", &s);
            persegi(s);
            printf("\nTekan Enter untuk kembali ke menu");
            getch();
            clrscr();
            goto menu2;
        }else if (menu == 4)
        {
            printf("<== Menghitung Luas Segitiga ==>\n");
            printf("Masukkan Alas :"); scanf("%d", &alas);
            printf("Masukkan tinggi : "); scanf("%d", &t);
            segitiga(alas, t);
            printf("\nTekan Enter untuk kembali ke menu");
            getch();
            clrscr();
            goto menu2;
        }else if (menu == 5)
        {
            printf("<== Menghitung Luas Lingkaran ==>\n");
            printf("Masukkan jari-jari lingkaran : ");scanf("%d", &r);
            lingkaran(r);
            printf("\nTekan Enter untuk kembali ke menu");
            getch();
            clrscr();
            goto menu2;
        }else if(menu == 6)
        {
            printf("<== Menghitung Luas Trapesium ==>\n");
            printf("Masukkan sisi a: ");scanf("%d", &a);
            printf("Masukkan sisi b : "); scanf("%d", &b);
            printf("MAsukkan tinggi trapesium : "); scanf("%d", &t);
            trapesium(a,b,t);
            printf("\nTekan Enter untuk kembali ke menu");
            getch();
            clrscr();
            goto menu2;
        }else if(menu == 7)
        {
            printf("<== Menghitung Luas Layang-Layang ==>\n");
            printf("Masukkan diagonal 1 : "); scanf("%d", &d1);
            printf("Masukkan diagonal 2 : "); scanf("%d", &d2);
            layang_layang(d1, d2);
            printf("\nTekan Enter untuk kembali ke menu");
            getch();
            clrscr();
            goto menu2;
        }else if (menu == 8)
        {
            printf("<== Menghitung Luas Jajargenjang ==>\n");
            printf("Masukkan alas : "); scanf("%d", &alas);
            printf("Masukkan tinggi : "); scanf("%d", &t);
            jajar_genjang(alas, t);
            printf("\nTekan Enter untuk kembali ke menu");
            getch();
            clrscr();
            goto menu2;
        }else if (menu == 9)
        {
            printf("<== Menghitung Luas Belahketupat ==>\n");
            printf("Masukkan diagonal 1 : "); scanf("%d", &d1);
            printf("Masukkan diagonal 2 : "); scanf("%d", &d2);
            layang_layang(d1, d2);     /* karena rumus sama dengan layangan maka kita menggunakan prosedur layangan*/
            printf("\nTekan Enter untuk kembali ke menu");
            getch();
            clrscr();
            goto menu2;
        }else if(menu == 10)
        {
            printf("<== Menghitung Luas Persegi Panjang ==>\n");
            printf("Masukan panjang sisi : "); scanf("%d", &p);
            printf("Masukkan Lebar : "); scanf("%d", &l);
            persegi_panjang(p, l);
            printf("\nTekan Enter untuk kembali ke menu");
            getch();
            clrscr();
            goto menu2;
        }else if(menu == 11)
        {
            printf("<== Mencari kelipatan suatu bilangan ==>\n");
            printf("Masukkan bilangan :");scanf("%d", &a);
            printf("Masukkan maksimal bilangan : "); scanf("%d", &n);
            kel_bil(a, n, i);
            printf("\nTekan Enter untuk kembali ke menu");
            getch();
            clrscr();
            goto menu2;
        }else if(menu == 12)
        {
            printf("<== Menghitung Rata-Rata Nilai ==>\n");
            printf("Masukkan Jumlah Mapel : ");scanf("%d", &n);
            a = 1;
            array1->jum = 0;
            for (i=0;i<n;i++)
            {
                printf("Masukkan Mapel ke-%d : ", a); scanf("%s", &array1[i].mapel);
                printf("Masukkan Nilai : "); scanf("%d", &array1[i].nilai);
                printf("\n");
                a++;
                array1->jum = array1->jum + array1[i].nilai;
            }
            rata2 = array1->jum / n;
            printf("Nilai rata-rata dari mapel adalah %f", rata2);
            printf("\nTekan Enter untuk kembali ke menu");
            getch();
            clrscr();
            goto menu2;
        }else if(menu == 13)
        {
            printf("<== Menghitung Kecepatan ==>\n");
            kecepatan(jar, wak);
            printf("\nTekan Enter untuk kembali ke menu");
            getch();
            clrscr();
            goto menu2;

        }else if(menu == 14)
        {
            printf("<== Menghitung Waktu ==>\n");
            waktu(jar, kec);
            printf("\nTekan Enter untuk kembali ke menu");
            getch();
            clrscr();
            goto menu2;

        }else if(menu == 15)
        {
            printf("<== Menghitung Jarak ==>\n");
            jarak(wak, kec);
            printf("\nTekan Enter untuk kembali ke menu");
            getch();
            clrscr();
            goto menu2;

        }else if(menu == 16)
        {
            goto mulai;
        }else if(menu == 17)
        {
            printf("Tekan Enter to Exit");
            exit;
        }
        
        else
        {
            printf("Menu tidak ada\n");
            getch();
            clrscr();
            goto menu2;
        }
        break;

    case 3:
        printf("Tekan Enter to Exit");
        exit;
        break;

    default:
        printf("==");
        printf("Menu yang anda masukan salah\n");
        printf("==");
        goto mulai;
        break;
    }
    getch();
}
