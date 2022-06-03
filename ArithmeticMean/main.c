/*
 * Request
Write a program that calculates the average of all the odd elements in a 1-dimensional array of integers A with n elements.

 *Input data
Line 1, a positive integer n is the number of elements of the array A
Line 2, n integers are respectively the elements of the array A

 *limit
 1 <= n <= 10^3
 |Aij| < 10^6

 *Output data
Average of odd elements of array A rounded to 4th decimal place
 */
#include <stdio.h>
#include <stdint.h>
int main() {
    uint32_t n;
    uint32_t count=0;
    scanf("%d",&n);
    float total = 0;
    int64_t num_array[n];
    for(uint32_t index = 0; index < n; index++){
        scanf("%lld",&num_array[index]);
    }
    for(uint32_t j = 0; j < n; j++){
        if(num_array[j]%2 != 0){
            total+=num_array[j];
            count++;
        }
    }
    printf("%0.4f",total/count);

}
