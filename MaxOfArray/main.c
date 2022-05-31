#include <stdio.h>
#include <stdint.h>
int main() {
    int32_t n;
    scanf("%d",&n);
    int num_array[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&num_array[i]);
        //printf("phan tu thu %d la %d",i, num_array[i]);
    }
    int max = num_array[0];
    for (int j = 0; j < n; j++){
        if(max < num_array[j]){
            max = num_array[j];
        }
    }
    printf("%d", max);
}
