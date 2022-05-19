#include <stdio.h>

int findMax(int arr[],int sz){
    int max = 0;
    for (int i = 0; i < sz;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int ages[10] = {24, 25, 20, 36, 55, 18, 45, 50, 79, 59};
    int sz = sizeof(ages) / sizeof(ages[0]);
    int maxResult = findMax(ages,sz);
    printf("The Max Number is: %d\n",maxResult);
    return 0;
}