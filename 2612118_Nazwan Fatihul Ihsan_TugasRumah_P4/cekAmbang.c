#include <stdio.h>
int main(void) {
 float tegangan[5] = {219.8, 235.2, 220.5, 205.0, 220.2};
 float rangeMin = 210.0;
 float rangeMax = 230.0;

    if (tegangan[0] >= rangeMin && tegangan[0] <= rangeMax) {
    printf("Sampel ke-1: Aman\n");
    } else {
    printf("Sampel ke-1: PERINGATAN\n");
    }

    if (tegangan[1] >= rangeMin && tegangan[1] <= rangeMax) {
    printf("Sampel ke-2: Aman\n");
    } else {
    printf("Sampel ke-2: PERINGATAN\n");
    }

    if (tegangan[2] >= rangeMin && tegangan[2] <= rangeMax) {
    printf("Sampel ke-3: Aman\n");
    } else {
    printf("Sampel ke-3: PERINGATAN\n");
    }

    if (tegangan[3] >= rangeMin && tegangan[3] <= rangeMax) {
    printf("Sampel ke-4: Aman\n");
    } else {
    printf("Sampel ke-4: PERINGATAN\n");
    }

    if (tegangan[4] >= rangeMin && tegangan[4] <= rangeMax) {
    printf("Sampel ke-5: Aman\n");
    } else {
    printf("Sampel ke-5: PERINGATAN\n");
    }

 return 0;
}