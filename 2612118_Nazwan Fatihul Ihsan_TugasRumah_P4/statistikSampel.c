
#include <stdio.h>

int main() {

    float sampelAmpere[7] = {1.2, 1.5, 1.1, 1.8, 1.3, 1.6, 1.4};
    float max = sampelAmpere[0];
    float min = sampelAmpere[0];
    float jumlah, rataRata, range;

    // Mencari nilai maksimum
    if (sampelAmpere[0] > max) max = sampelAmpere[0];
    if (sampelAmpere[1] > max) max = sampelAmpere[1];
    if (sampelAmpere[2] > max) max = sampelAmpere[2];
    if (sampelAmpere[3] > max) max = sampelAmpere[3];
    if (sampelAmpere[4] > max) max = sampelAmpere[4];
    if (sampelAmpere[5] > max) max = sampelAmpere[5];
    if (sampelAmpere[6] > max) max = sampelAmpere[6];

    // Mencari nilai minimum
    if (sampelAmpere[0] < min) min = sampelAmpere[0];
    if (sampelAmpere[1] < min) min = sampelAmpere[1];
    if (sampelAmpere[2] < min) min = sampelAmpere[2];
    if (sampelAmpere[3] < min) min = sampelAmpere[3];
    if (sampelAmpere[4] < min) min = sampelAmpere[4];
    if (sampelAmpere[5] < min) min = sampelAmpere[5];
    if (sampelAmpere[6] < min) min = sampelAmpere[6];

    // Menghitung jumlah seluruh sampel
    jumlah = sampelAmpere[0] + sampelAmpere[1]
           + sampelAmpere[2] + sampelAmpere[3]
           + sampelAmpere[4] + sampelAmpere[5]
           + sampelAmpere[6];

    // Menghitung rata-rata
    rataRata = jumlah / 7;

    // Menghitung range
    range = max - min;

    // Menampilkan hasil
    printf("=======================\n");
    printf("%.2f A\n", sampelAmpere[0]);
    printf("%.2f A\n", sampelAmpere[1]);
    printf("%.2f A\n", sampelAmpere[2]);
    printf("%.2f A\n", sampelAmpere[3]);
    printf("%.2f A\n", sampelAmpere[4]);
    printf("%.2f A\n", sampelAmpere[5]);
    printf("%.2f A\n", sampelAmpere[6]);
    printf("=======================\n");
    printf("Nilai Maksimum : %.2f A\n", max);
    printf("Nilai Minimum  : %.2f A\n", min);
    printf("Nilai Rata-rata: %.2f A\n", rataRata);
    printf("Nilai Range    : %.2f A\n", range);
    printf("=======================\n");

    return 0;
}