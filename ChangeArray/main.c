/*
* Request
Given array A consisting of n integers entered from the keyboard. Write a program that converts an array according to the following rules:
At odd indices of the array, increment the value of that element by 1 equal to the difference between its 2 neighbors.
In case there is no left or right neighbor, the missing neighbor is assumed to have a value of 0.
Array index is calculated starting from 0

* Input data
The first line is a positive integer n
The next line is n integers corresponding to the elements of the array A

* Output data
After the array has been transformed according to the rules, the elements are separated by 1 space.
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
int main() {
    uint32_t n;
    scanf("%d",&n);
    int32_t num_array[n];
    for (uint32_t index = 0; index < n; index++){
        scanf("%d",&num_array[index]);
    }
    num_array[n]=0;
    for(int j = 0; j < n; j++){
        if(j%2 !=0){
            num_array[j] += abs(num_array[j-1]-num_array[j+1]);
        }
    }
    for(int k = 0; k< n; k++)
        printf("%d", num_array[k]);
}
