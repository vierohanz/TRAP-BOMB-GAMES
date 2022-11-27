#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>
#include <windows.h>
#define PROGRESS_BAR_SIZE 40
#define tab printf("\t\t\t\t")


struct listvariable
{
    char username[20];
    char email[20];
    int BOMB[30];
    int *a;
}fp;
struct listvariable2
{
    int tanggal_hari_ini;
    int bulan_hari_ini;
    int tahun_hari_ini;
};

// DateTIme
struct listvariable2 tanggal_sekarang(void);

struct listvariable2 tanggal_sekarang(void)
{
    time_t waktu_sekarang = time(NULL);
    struct tm *waktu_lokal = localtime(&waktu_sekarang);

    struct listvariable2 tanggal;
    tanggal.tanggal_hari_ini = waktu_lokal->tm_mday;
    tanggal.bulan_hari_ini = 1 + waktu_lokal->tm_mon;
    tanggal.tahun_hari_ini = 1900 + waktu_lokal->tm_year;

    return (tanggal);
};

// Loading
void print_n_chars(int n, int c) {
    while (n-- > 0) putchar(c);
}

void display_progress_bar(int p) {
    putchar('\r');
    putchar('[');
    print_n_chars(PROGRESS_BAR_SIZE * p / 100, '|');
    print_n_chars(PROGRESS_BAR_SIZE - PROGRESS_BAR_SIZE * p / 100,' ');
    putchar(']');
}

int loader(void) {
    printf("\nLoading ..\n");
    int p;
    for (p = 0; p <= 150; ++p) {
        display_progress_bar(p);
        Sleep(10);
    }
        return 0;
}


// Acoount User
int myUser()
{
    int lower = 1000000, upper = 9999999;


    tab;printf("=============================================\n");
    tab;printf("|\t           ACCOUNT                  |\n");
    tab;printf("=============================================\n");
            //USERNAME
    tab;printf("Username \t: ");fflush(stdin);
    gets(fp.username);
            //EMAIL
    tab;printf("Email \t\t: ");fflush(stdin);
    gets(fp.email);
            //ID
    srand(time(NULL));
    fp.a = (rand() % (upper - lower + 1)) + lower;
    tab;printf("ID \t\t: %d", fp.a);
    puts(" ");
    puts(" ");
    system("pause");
    system("cls");
}

// Main Programming
int myPercabangan()
{
    struct listvariable2 tanggal;
    tanggal = tanggal_sekarang();
    system("cls");
    while(true)
    {
        int inputUser;
        int i, j, k;

        tab;printf("=============-----------------------------=============\n");
        tab;printf("\t\t     BOMB TRAP\n");
        tab;printf("=============-----------------------------=============\n");
        tab;printf("| 1. Versus             |\n");
        tab;printf("| 2. Single Game        |\n");
        tab;printf("| 0. Exit               |\n");
        tab;printf("|_____________---------------------------______________\n");
        tab;printf("\t\t     MENU : ");
        scanf("%d", &inputUser);

        if (inputUser == 1)
        {
            int a,b,c,d,e,f;

            system("cls");
            tab;printf("         =======================================\n");
            tab;printf("         |   \tPERATURAN PERMAINAN           |\n");
            tab;printf("         =======================================\n");
            tab;printf("         |1. Tebak Angka Bom                   |\n");
            tab;printf("         |2. Hanya 3x Kesempatan               |\n");
            tab;printf("         |3. Pilihan BOMB 1 -> 20              |\n");
            tab;printf("         |4. Jika Curang BOMB akan meledak     |\n");
            tab;printf("         =======================================\n");
            puts(" ");
            tab;printf("         __PROGRAM PENJINAKAN BOMB!!!__");
            puts(" ");
            puts(" ");
            while(true)
            {
                tab;printf("Masukkan sebuah angka rahasianya");
                puts(" ");
                tab;printf("*asumsikan bukan Anda yang menentukan angka rahasia itu*\n");
                tab;printf("Angka Rahasia: ");
                scanf("%d", &d);
                if(d > 20)
                {
                    tab;printf("*ANGKA YANG ANDA MASUKKAN DILARANG\n");
                    tab;printf("Masukkan sebuah angka rahasianya\n");
                    puts(" ");
                    tab;printf("*asumsikan bukan Anda yang menentukan angka rahasia itu*\n");
                    tab;printf("Angka Rahasia: ");
                    scanf("%d", &d);
                }
                else if(d <= 20)
                {
                    puts(" ");
                    system("cls");
                    tab;printf("\n Anda memilki 3x kesempatan untuk menebak angka. HATI-HATI...'JIKA ANDA GAGAL MAKA BOM AKAN MELEDAK!!!'");
                    printf("\n");
                    tab;printf("\n ->Kesempatan pertama :");
                    printf("\n");
                    tab;printf("\n Silahkan masukkan angka pertama: ");
                    scanf("%d", &a);

                    if (a == d)
                    {
                        tab;printf("SELAMAT BOM TELAH BERHASIL ANDA JINAKKAN ^^\n");
                        break;
                    }

                    else if (a != d || a >= 20)
                    {

                        tab;printf("Maaf, Angka yang anda masukkan salah.HATI-HATI...BOM MASIH DALAM KEADAAN BERBAHAYA !!");
                        tab;printf("\n");
                        tab;printf("\n");
                        tab;printf("\n ->Kesempatan kedua :");
                        tab;printf("\n");
                        tab;printf("\n Silahkan masukkan angka  kedua: ");
                        scanf("%d", &b);
                        if (b == d)
                        {
                            tab;printf("SELAMAT BOM TELAH BERHASIL ANDA JINAKKAN ^^\n\n");
                            break;
                        }
                        else if (b != d || b >= 20)
                        {

                            tab;printf("Maaf, Angka yang anda masukkan salah.HATI-HATI...BOM MASIH DALAM KEADAAN BERBAHAYA !!");
                            tab;printf("\n");
                            tab;printf("\n");
                            tab;printf("\n ->Kesempatan ketiga(TERAKHIR):..");
                            printf("\n");
                            tab;printf("\n Silahkan masukkan angka terakhir: ");
                            scanf("%d", &c);

                            if (c == d)
                            {
                                tab;printf("SELAMAT BOM TELAH BERHASIL ANDA JINAKKAN ^^\n");
                                break;
                            }
                            else if (c != d || c >= 20)
                            {
                                system("color c");
                                tab;printf("Maaf, Angka yang anda masukkan salah.AWASSSSS BOM AKAN MELEDAK !!");
                                printf("\n");
                                f=0;
                                for (e=1;e<=500;e++)
                                {
                                    f=f+1;
                                    printf("#*&^%()$*");
                                }
                                    printf("DDDUUAARRR !!! BOM MELEDAK !!!");
                                    break;
                            }
                        }
                    }

                }

            }
        }

        if(inputUser == 2)
        {
            struct listvariable hp[20];
            int choice, y, i, rnum;
            int point = 0;
            int level = 0;
            int lowwerr = 1; int upperr = 40;

            tab;printf("========================================================\n");
            tab;printf("|              \tPERATURAN PERMAINAN                    |\n");
            tab;printf("========================================================\n");
            tab;printf("|1. Hindari Angka Yang Kemungkinan BOMB                |\n");
            tab;printf("|2. Pilih Angka 1 >= x >= 40                           |\n");
            tab;printf("|3. Terdapat Peningkatan BOMB Setiap Level             |\n");
            tab;printf("|4. Jika Bisa Menghindari Semua BOMB Nilai 100 Point   |\n");
            tab;printf("|5. Jika Curang maka BOMB meledak   |\n");
            system("pause");
            system("cls");
            for(y = 1; y <= 20; y++)
            {
                tab;printf("MASUKKAN ANGKA YANG ANDA INGINKAN : ");
                scanf("%d", &choice);
                system("cls");
                srand(time(NULL));
                int rnum1 = (rand() % (upperr - lowwerr + 1)) + lowwerr;
                int rnum2 = (rand() % (upperr - lowwerr + 1)) + lowwerr;
                int rnum3 = (rand() % (upperr - lowwerr + 1)) + lowwerr;
                int rnum4 = (rand() % (upperr - lowwerr + 1)) + lowwerr;
                int rnum5 = (rand() % (upperr - lowwerr + 1)) + lowwerr;
                int rnum6 = (rand() % (upperr - lowwerr + 1)) + lowwerr;
                int rnum7 = (rand() % (upperr - lowwerr + 1)) + lowwerr;
                int rnum8 = (rand() % (upperr - lowwerr + 1)) + lowwerr;
                int rnum9 = (rand() % (upperr - lowwerr + 1)) + lowwerr;
                int rnum10 = (rand() % (upperr - lowwerr + 1)) + lowwerr;
                int rnum11 = (rand() % (upperr - lowwerr + 1)) + lowwerr;
                int rnum12 = (rand() % (upperr - lowwerr + 1)) + lowwerr;
                int rnum13 = (rand() % (upperr - lowwerr + 1)) + lowwerr;
                int rnum14 = (rand() % (upperr - lowwerr + 1)) + lowwerr;
                int rnum15 = (rand() % (upperr - lowwerr + 1)) + lowwerr;


                if(choice != rnum1 || choice != rnum2 || choice != rnum3 || choice != rnum4||
                    choice != rnum5 || choice != rnum6 || choice != rnum7 || choice != rnum8 || choice != rnum9 ||
                    choice != rnum10 || choice != rnum11 || choice != rnum12 || choice != rnum13 || choice != rnum14 ||
                    choice != rnum15)
                {

                    level += 1;
                    point += 5;
                    tab;printf("BE CAREFUL!!!!!!\n");
                    tab;printf("Point : %d\n", point);
                    tab;printf("____==============LEVEL %d===============____\n",level);
                    tab;printf("_____________________________________________\n");
                    puts(" ");
                    tab;printf("ANGKA YANG ANDA MASUKKAN : %d\n", choice);
                    puts(" ");
                    tab;printf("_____________________________________________\n");
                    tab;printf("-----------------==========------------------\n");

                    if(point == 100)
                    {
                        system("cls");
                        tab;printf("==================BOMB TRAP==================\n");
                        tab;printf("_____________________________________________\n");
                        puts(" ");
                        tab;printf("| Username       : %s\n",fp.username);
                        tab;printf("| Email          : %s\n",fp.email);
                        tab;printf("| ID             : %d\n",fp.a);
                        tab;printf("_____________________________________________\n");
                        tab;printf("                           Point  :  %d\n", point);
                        tab;printf("                         Tanggal  : %d/%d/%d\n", tanggal.tanggal_hari_ini, tanggal.bulan_hari_ini,
                        tanggal.tahun_hari_ini);
                        tab;printf("---------------------------------------------\n");

                        tab;printf("CONGRATSS YOU ARE GOT 100 POINT!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
                    }

                }


                if(choice == rnum1 || choice == rnum2 || choice == rnum3 || choice == rnum4||
                    choice == rnum5 || choice == rnum6 || choice == rnum7 || choice == rnum8 || choice == rnum9 ||
                    choice == rnum10 || choice == rnum11 || choice == rnum12 || choice == rnum13 || choice == rnum14 ||
                    choice == rnum15 || choice >= 40)
                {
                    int f, e;

                    system("color c");
                    tab;printf("Maaf, Angka yang anda masukkan salah.AWASSSSS BOM AKAN MELEDAK !!");
                    printf("\n");
                    f = 0;
                    for (e = 1; e <= 500; e++)
                    {
                        f = f + 1;
                        printf("#*&^%()$*");
                    }
                    printf("DDDUUAARRR !!! BOM MELEDAK !!!");
                    printf("\n");
                    printf("\n");
                    system("pause");
                    system("cls");
                    tab;printf("==================BOMB TRAP==================\n");
                    tab;printf("_____________________________________________\n");
                    puts(" ");
                    tab;printf("| Username       : %s\n",fp.username);
                    tab;printf("| Email          : %s\n",fp.email);
                    tab;printf("| ID             : %d\n",fp.a);
                    tab;printf("_____________________________________________\n");
                    tab;printf("                           Point : %d\n", point);
                    tab;printf("                        Tanggal  : %d/%d/%d\n", tanggal.tanggal_hari_ini, tanggal.bulan_hari_ini,
                        tanggal.tahun_hari_ini);
                    tab;printf("---------------------------------------------\n");
                    if(point >= 80)
                    {
                        tab;printf("CONGRATSS YOU ARE GOT %d POINT!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n",point);
                        break;
                    }
                    else if(point >= 60)
                    {
                        tab;printf("NICE TRY AND KEEP SPIRIT BABY YOU GOT %d POINT!!!!!!!\n", point);
                        break;
                    }
                    else
                    {
                        tab;printf("HEII YOOO WHY ARE YOU SO FUCKING STUPID!!!!!!!!!\n");
                        break;
                    }
                }
            }
            system("pause");
            system("cls");
        }
        else if(inputUser == 0)
        {
            puts(" ");
            puts(" ");

            tab;printf("\t      <<__ SAMPAI JUMPA LAGI __>>");
            break;
        }
    }
}


int main()
{
    myUser();
    loader();
    myPercabangan();

    return 0;
}




