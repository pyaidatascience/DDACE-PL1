#include <stdio.h>

int main() {
    // \n (Newline) and \t (Horizontal Tab)
    printf("Name\tAge\tCity\n");
    printf("Amit\t20\tPune\n\n");

    // \b (Backspace) deletes 'e' before printing '!'
    printf("Helloo\b!\n");

    // \r (Carriage Return) moves cursor to start of line and overwrites "World"
    printf("World\rHello\n");

    // \a (Alert) makes a beep sound on supported consoles
    printf("Alert sound triggered!\a\n");

    return 0;
}
