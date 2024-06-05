#include <stdio.h>

int main(){

    int n = 0;
    scanf("%d", &n);

    double sum = 0;

    for(int i=1; i<=n;i++){
        double term = (1.0/(i*i));

        if(i%2==0){
            sum-=term;  // sum = sum - term;
        }
        else
            sum+=term;
    }

    printf("%lf", sum);

    return 0;
}
