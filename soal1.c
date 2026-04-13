/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 1 - Overview of C Language
 *   Hari dan Tanggal    : Senin, 13 April 2026
 *   Nama (NIM)          : 13224087
 *   Nama File           : [].c
 *   Deskripsi           : Kode ini merupakan solusi dari Praktikum EL2008, Modul 1, Soal 1, yaitu Gerbang Koloni Bertingkat. Permasalahan berupa sebuah gerbang keamanan untuk memproses data satu peneliti. Tujuan utama dari program ini adalah menentukan status akhir peneliti berdasarkan level izin, suhu tubuh, kadar radiasi, dan jam kedatangan.
 */

 #include <stdio.h>
 #include <string.h>
  
 int main(void) {
    int izin, suhu, radiasi, jam; // memberikan deklarasi variabel yang akan digunakan

    scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam); // menerima input dari user

    // validasi kondisi berdasarkan permintaan problem
    if(radiasi >= 6){
        printf("TOLAK");
    }
    else if (suhu >= 390){
        printf("KARANTINA");
    } 
    else if (izin == 1 && (jam < 6 || jam > 20)){
        printf("TOLAK");
    }
    else if (izin == 1){
        printf("MASUK");
    }
    else if (izin == 2 && (radiasi <= 2 && (jam >= 8 && jam <= 18))){
        printf("MASUK");
    }
    else if (izin == 2){
        printf("PEMERIKSAAN");
    }
    else if (izin == 3 && radiasi == 0 && suhu < 380){
        printf("MASUK");
    }
    else {
        printf("TOLAK");
    }

    return 0;
 }
 