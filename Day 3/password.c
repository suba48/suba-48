#include <stdio.h>
#include <string.h>
int main()
{
    char username[50];
    char password[50];
    char correct_username[] = "suba";
    char correct_password[] = "12,suba,34";
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) 
    {
        printf("Login successful!\n");
    } 
    else 
    {
        printf("Invalid username or password.\n");
    }
    return 0;
}