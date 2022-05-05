#include <stdio.h>
#include <string.h>

int check_authentication(char *password)
{
    int auth_flag = 0;
    char password_buffer[16];

    strcpy(password_buffer, password);

    if ((strcmp(password_buffer, "perejil7") == 0) || strcmp(password_buffer, "perejil9") == 0)
        auth_flag = 1;

    return auth_flag;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Utilizar: %s <password>\n", argv[0]);
        return 1;
    }

    if (check_authentication(argv[1]))
        printf("Acceso permitido\n");
    else
        printf("Acceso denegado\n");

    return 0;
}