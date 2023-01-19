#include <stdio.h>

typedef enum {
    RED,
    GREEN,
    BLUE
} Color;

void print_color(Color c) {
    switch (c) {
        case RED:
            printf("The color is red\n");
            break;
        case GREEN:
            printf("The color is green\n");
            break;
        case BLUE:
            printf("The color is blue\n");
            break;
    }
}

int main() {
    Color c = GREEN;
    print_color(c);
    return 0;
}