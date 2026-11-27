#include <math.h>
#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int delta = b*b - 4*a*c;
    int x = (-b)/2*a;
    int x1 = (-b - sqrt(delta))/2*a;
    int x2 = (-b + sqrt(delta))/2*a;
    if(delta > 0){
        printf("Delta = %d\n", delta);
        printf("Il existe 2 solutions \n");
        printf("x1 = %d\n" , x1);
        printf("x2 = %d\n" , x2);}
    if(delta == 0){
        printf("Delta = %d\n", delta);
        printf("Il existe 1 solutions \n");
        printf("x = %d\n" , x);}
    if(delta < 0){
        printf("Delta = %d\n", delta);
        printf("Il n'existe aucune solutions \n");}
}