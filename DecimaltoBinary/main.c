/*
 * Input data
 The first line records a positive integer T is the number of test sets;
 T the next line, each line contains a positive integer n in the decimal system.

 * Limit
  1 <= T<= 10^5
  1 <= n <= 10^18

 * Output
 For each positive integer n in the decimal system, print out on one line the binary
 string representation of the number in binary (not starting with a 0).
*/
#include <stdio.h>
#include <stdint.h>
#include <math.h>
int main() {
    uint64_t t;
    uint64_t i;
    int64_t p = 0;
    scanf("%lld", &t);
    uint64_t DecNumber[t];
    for(int j = 0; j < t; j++){
        scanf("%lld", &DecNumber[j]);
    }
    for(i = 0; i < t; i++) {
        p = 0;
        uint64_t Bin_string[256]={0};
        while(DecNumber[i]>0) {
            Bin_string[p]+= (DecNumber[i] % 2) + 48;
            p++;
            DecNumber[i] /= 2;
        }
        for (int8_t index = p-1; index >= 0; index-- ){
            printf("%c",Bin_string[index]);
        }
        printf("\n");
    }
}