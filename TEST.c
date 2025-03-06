#include <stdio.h>

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    printf("HELLO WORLD!!!!");

    fclose(stdin);
    fclose(stdout);	
    return 0;
}       