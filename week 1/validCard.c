#include <stdio.h>

int isValidCard(long long card){
    long long n = card;
    int total=0, sum1=0, sum2=0;
    int length =0;

    while(n){
        int d = n % 10;
        sum1 += d;
        n = n / 10;

        d = (n % 10) * 2;
        sum2 += d/10;
        sum2 += d % 10;
        n = n / 10;
    }
    total = sum1 + sum2;

    return (total % 10 == 0);
}
    

int main(){

    long long n = 79927398713;
    int res = isValidCard(n);
    printf("%i", res);

    return 0;
}