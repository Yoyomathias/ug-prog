
#include <stdio.h>
int main(){
    int number = 3;
    int result = 0;
    int calc = 0;
    while (result < number){
        result += 1;
        calc += result;
    }
    printf("%d\n" , calc);
}
    