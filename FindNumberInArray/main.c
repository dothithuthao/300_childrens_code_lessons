/*
* Request
 Given an integer array A with n elements, find if there is an element x in the array?

* Input data
Line 1 is a positive integer n (number of elements of array  n <= 10^6) and integer x (|x| <= 10^9) is the value to look for
The next line is n integers that are the elements of the array (|Aij| <= 10^9)
* Output
If x occurs at least once in the array, print YES
If x is not in the array, print out NO
 */
#include <stdio.h>
#include <stdint.h>
int main() {
    uint64_t n;
    int64_t x;
    uint64_t count = 0;
    scanf("%lld %lld", &n, &x);
    int64_t num_array[n];
    for (uint64_t index = 0; index < n; index ++){
        scanf("%lld",&num_array[index]);
    }
    for(uint64_t j= 0; j < n; j++){
        if(num_array[j] == x) count++;
    }
    if(count >=1){
        printf("YES");
    }else{
        printf("NO");
    }


}
