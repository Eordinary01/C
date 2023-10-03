#include <stdio.h>
#include<math.h>

int main(){
    int base,exp,result;

    printf("Enter the base value\n");
    scanf("%d",&base);
    printf("Enter the power value\n");
    scanf("%d",&exp);

    result = pow(base,exp);
    printf("%d to the power of %d is = %d", base,exp,result);
    return 0;
}