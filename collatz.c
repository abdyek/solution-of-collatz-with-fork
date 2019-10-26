#include<stdio.h>
#include<unistd.h>

// funcs
void collatz();

// global var
int num;

int main(int argc, char * argv[]) {
    scanf("%d", &num);
    if(fork()) {
        collatz();
    }
}

void collatz() {
    printf("%d\t", num);
    if(num==1) {
        printf("\n");
        return;
    }
    if(num%2) {
        num = num*3 + 1;
    } else {
        num = num / 2;
    }
    collatz(num);
}