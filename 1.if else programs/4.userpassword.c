#include <stdio.h>
#include <string.h>
int main()
{
    char username[10], password[10];
    int m1 = 87, m2 = 84, m3 = 84, m4 = 86, total;
    float per;
    char a1[10] = "anamika", a2[10] = "rathod";

    printf("Enter the username = ");
    scanf("%s", username);
    printf("Enter the password = ");
    scanf("%s", password);

    if (strcmp(username, a1) == 0 && strcmp(password, a2) == 0)
    {
        printf("\n\nLog in successfully\n");
        printf("\n=======================");
        printf("\nm1 marks are = %d", m1);
        printf("\nm2 marks are = %d", m2);
        printf("\nm3 marks are = %d", m3);
        printf("\nm4 marks are = %d", m4);
        total = m1 + m2 + m3 + m4;
        printf("\nThe total marks are = %d", total);
        per = total / 4.0;
        printf("\nPercentage = %.2f%%", per);
    }
    else
    {
        printf("INVALID username or password");
    }

    return 0;
}
