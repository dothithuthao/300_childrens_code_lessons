/*
*Request
Write a program that reads 11 integers from the keyboard and stores the first 10 in an array. Check if 11th number is in array or not?


*Input data
11 integers whose absolute value does not exceed 10^9 and are separated by 1 space.

*Output data
If the 11th number is in the array, print the positions that appear in ascending order, separated by 1 space
If the 11th number is not in the array, print -1
Note: Position is calculated starting from 1
 */
#include <stdio.h>
#include <stdint.h>
int main() {
    int num_array[10]={0};
    for( int index = 0; index < 10; index++ ){
        scanf("%d",&num_array[index]);
    }
    int n;
    int count = 0;
    scanf("%d",&n);
    for (int j = 0; j < 10; j++){
        if(num_array[j] == n){
            printf("%d ",j+1);
            count++;
        }
    }
    if (count == 0) printf("%d",-1);
}
