#include <stdio.h>
#include <time.h>

int main(){

    long int t1 = clock() / CLOCKS_PER_SEC;
    printf("%ld\n", t1);
    
    for (int i = 0; i <= 150000; i++){
        printf("\n%d", i);
    }

    long int t2 = clock() / CLOCKS_PER_SEC;
    printf("\n%ld", t2);

    return 0;
}