#include <stdio.h>
#include <stdlib.h>
#include <typecast.h>


int main(void) {
    const char* version = typecast_version();
    printf("Typecast SDK version: %s\n", version);
    return EXIT_SUCCESS;
}
