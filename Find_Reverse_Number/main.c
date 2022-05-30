/*
 *Input:
 Positive integer number

 *Limit
 0 < n <= 10^1000

 *Output
 The reversed positive integer of n
*/
#include <stdio.h>
#include <stdint.h>
int lenght = 0;
int main() {
    uint8_t input_number[256]={0};
    scanf("%s",input_number);
    if(input_number[0] == '0') return 0;
    for(int i =0; i<256; i++){
        if(input_number[i] != '\0'){
            lenght++;
        }
    }
    //printf("%d",lenght);
    for (int index = 0;  index < lenght; index ++){
        if(input_number[index] > '9' || input_number[index] < '0') return 0;
    }
    while(input_number[lenght - 1] == '0') lenght--;
    for(int j = lenght -1; j >= 0; j-- ){
        printf("%c",input_number[j]);
    }
}
