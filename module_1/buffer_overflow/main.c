#include <stdio.h>
#include <stdlib.h>

char *gets(char *s);

__attribute__((force_align_arg_pointer))
void hacked() {
    long long secret = 0x000a2144454e5750; 
    printf("\n[***] SECRET MESSAGE : %s", (char*)&secret);
    exit(0);
}

void vuln() {
    char buffer[32];
    printf("Please type your input: ");
    gets(buffer); 
}

int main() {
    vuln();
    printf("Bye.\n");
    return 0;
}
