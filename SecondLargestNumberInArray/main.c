/*
* Request
 Given an array of integers with n elements, find the second largest element in the array

* Input
 The first line is the positive integer n, the number of elements of the array, (2 < n < 10^6)
 The next line is the array's n integers, (| a[ij] | < 10^9)

 * Output
 If the 2nd largest number is found in the array, print that number
 If not found, print out NOT FOUND
 */
#include<stdio.h>
int main(){
    int n;
    int a[1000];
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    //sort array from smallest to largest
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = i+1 ; j < n; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    //the characters in the array = each other is not valid
    int gtln = a[n-1];
    int dem = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i] == gtln){
            dem++;
        }
    }
    if(dem == n-1){
        printf("NOT FOUND");
    }else{
        printf("%d",a[n-2-dem]);
    }
    return 0;
}