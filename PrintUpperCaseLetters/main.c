/*
 * Input
 Two characters are 2 letters, separated by 1 space

 *limit
 The first letter has no order after the second letter in the alphabet.
 2 letters are entered in lower case.
 The alphabet in question is the English alphabet.

 * Output
 Uppercase letters within the range of 2 input letters, print them out in alphabetical order and separated by 1 space (if more than 1 letter matches)
 * */
#include <stdio.h>
int a;
int b;
int main(){
    scanf("%C %C", &a,&b);
//printf("%d %d",a,b);
    if(a>b) {
        return 0;
    }
    else{
        for(int i=a-32;i<=b-32 ; i++)
            printf("%C ",i);
    }
}