#include <stdlib.h>
#include <ctype.h>

int main() {
    char yn = 'y';
    while (toupper(yn) != 'N') {
        sound(1000);
        deplay(10 * 1000);
        nosound();
        scanf("%c", &yn);
    }
}