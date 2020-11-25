#include <stdio.h>

enum {RED, BLUE, GREEN};

int main() {
    int input_color;

    printf("색상입력: ");
    scanf("%d", &input_color);

    switch(input_color) {
        case RED : printf("RED\n"); break;
        case BLUE : printf("BLUE\n"); break;
        case GREEN : printf("GREEN\n"); break;
    }
}
