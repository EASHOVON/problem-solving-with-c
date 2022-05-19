#include <stdio.h>

//Write a function to find the area of a rectangle given its length and width
int areaOfRectangle(int widht, int length){
    return widht * length;
}

int main(){
    int a, b,sum;
    printf("Enter width and height: ");
    scanf("%d %d", &a, &b);
    sum = areaOfRectangle(a, b);
    printf("Area of Rectangle is: %d\n", sum);
    return 0;
}