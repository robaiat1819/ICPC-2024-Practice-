#include <stdio.h>

int main() {
    int T;
    printf("test cases: ");
    scanf("%d",&T);

    for (int i=1; i<=T; i++) {
        int PA,PB,PC;
        scanf("%d%d%d",&PA,&PB,&PC); 
        if (PA == 6) {
            if (PB>3||PC>3) {
                printf("invalidum\n");
            } else {
                printf("perfectus\n");
            }
        } 
        else if (PB == 6) {
            if (PA>3 ||PC>3) {
                printf("invalidum\n");
            } else {
                printf("perfectus\n");
            }
        } 
        else if (PC == 6) {
            if (PA>3||PB>3) {
                printf("invalidum\n");
            } else {
                printf("perfectus\n");
            }
        } 
        else if (PA == 3 && PB == 3 && PC == 3) {
            printf("perfectus\n");
        } 
        else {
            printf("invalidum\n");
        }
    }

    return 0;