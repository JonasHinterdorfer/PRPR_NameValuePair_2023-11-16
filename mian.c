#include <stdio.h>
#include <string.h>

int main() {
    char name[20], value[20], pair[128];

    printf("name: ");
    scanf("%19s", name);

    printf("value: ");
    scanf("%19s", value);

    if (sizeof(pair) < strlen(name) + strlen(value) + 2) {
        puts("Error: Vector pair is too small!");
        return 1;
    }

    strcpy(pair, name);
    strcat(pair, "=");
    strcat(pair, value);

#ifdef __STDC_WANT_LIB_EXT1__
    strcpy_s(pair, sizeof(pair), name);
    strcat_s(pair, sizeof(pair), "=");
    strcat_s(pair, sizeof(pair), value);
#endif

    printf("%s\n", pair);

    return 0;
}
