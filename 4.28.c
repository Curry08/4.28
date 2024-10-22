#include <stdio.h>

int main(){
    float num=0;
    int x;
    for(int i;10>i;i++){
        printf("Inserisci dieci numeri: ");
        scanf("%d",&x);
        if(x>num){
            num = x;
        }
    }
    printf("Il numero più grande che hai inserito è %f",num);
    return 0;
}
