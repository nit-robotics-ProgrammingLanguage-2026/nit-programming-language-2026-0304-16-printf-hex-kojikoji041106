#include <stdio.h>

int main(void) {
    /* 課題0304: 入力されたintのデータを16進数として表示するプログラムを書け． */
    int i;
    scanf("%d", &i);
    printf("%x\n", (unsigned int)i);
    return 0;
}
