#include <stdio.h>
#include <string.h>

int main() {
    char user[] = "admin";
    char pass[] = "1234";

    if (strcmp(user, "admin") == 0 && strcmp(pass, "1234") == 0)
        printf("Login successful");
    else
        printf("Invalid login");

    return 0;
}
