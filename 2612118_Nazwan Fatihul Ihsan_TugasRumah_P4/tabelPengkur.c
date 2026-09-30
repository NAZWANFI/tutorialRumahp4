#include <stdio.h>
int main(void) {
    float pengukuran1[3] = {220.3, 2.5, 19.2};
    float pengukuran2[3] = {218.2, 3.3, 42.1};
    float pengukuran3[3] = {221.1, 1.7, 14.0};
    float pengukuran4[3] = {219.8, 3.0, 30.2};
    printf("nilai resistansi pada pengukuran3: %.2f Ohm\n", pengukuran3[2]);
    return 0;
}