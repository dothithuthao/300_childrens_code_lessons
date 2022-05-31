/*
 * Request
 Given an array of integers A with n elements, find the index of the largest element in the array.

 Note: The index is calculated starting from 0

* Input data
 The first line is a positive integer nn, the number of elements of the array
 The next line is the nn integer of the array

 * limit
 1 < n < 10^6
 | aij | < 10^9

 * Output
 The index of the largest element in the array. If there are more than one valid index, print the largest one

*/
#include <stdio.h>
#include <stdint.h>
int main() {
    uint64_t n;
    scanf("%lld",&n);
    int num_array[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&num_array[i]);
    }
    uint64_t count =0;
    int max_num = num_array[0];
    for (int j = 0; j < n; j++){
        if(max_num <= num_array[j]){
            max_num = num_array[j];
            count = j;
        }
    }
    printf("%d",count);
}
