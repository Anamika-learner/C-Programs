#include <stdio.h>
#include <string.h>

int main(){
    int i = 3;
    char day[20];

    printf("\n=================================");
    printf("\nCollege TIME-TABLE");
    printf("\n=================================");
    printf("\nEnter the Day (lowercase letters)=");
    scanf("%s", day);

    if (strcmp(day, "monday") == 0) {
        printf("\nMONDAY\n");
        printf("\nTime=8:00 to 8:50      SUB NAME=CS,TH   SIR NAME=Mmrsir");
        printf("\n     8:50 to 9:40               Fundamental      Vksir");
        printf("\n     9:40 to 10:30              Office auto      Purvateacher");
        printf("\n");
        printf("\n      10:30 to 11:00_ _ _ _ _ _ _ _ _BREAK_ _ _ _ _ _ _ _ _ _ _");
        printf("\n");
        printf("\n    11:30 to 11:50              C lan(lab)        Mssir ");
        printf("\n    11:50 to 12:40              Web Dev(th)       Kkvsir");
    } else if (strcmp(day, "tuesday") == 0) {
        printf("\nTUESDAY\n");
        printf("\nTime=8:00 to 8:50      SUB NAME=CS,TH   SIR NAME=Mmrsir");
        printf("\n     8:50 to 9:40               Fundamental      Vksir");
        printf("\n     9:40 to 10:30              Office auto      Purvateacher");
        printf("\n");
        printf("\n     10:30 to 11:00_ _ _ _ _ _ _ _ _BREAK_ _ _ _ _ _ _ _ _ _ _");
        printf("\n");
        printf("\n     11:30 to 11:50             C lan(lab)        Mssir ");
        printf("\n     11:50 to 12:40             Web Dev(th)       Kevalsir");
    } else if (strcmp(day, "wednesday") == 0) {
        printf("\nWEDNESDAY\n");
        printf("\nTime=8:00 to 8:50      SUB NAME=CS,TH   SIR NAME=Mmrsir");
        printf("\n     8:50 to 9:40               Fundamental      Vksir");
        printf("\n     9:40 to 10:30              Office auto      Purvateacher");
        printf("\n");
        printf("\n     10:30 to 11:00_ _ _ _ _ _ _ _ _BREAK_ _ _ _ _ _ _ _ _ _ _");
        printf("\n");
        printf("\n     11:30 to 11:50             C lan(lab)        Mssir ");
        printf("\n     11:50 to 12:40             Web Dev(th)       Kkvsir");
    } else if (strcmp(day, "thursday") == 0) {
        printf("\nTHURSDAY\n");
        printf("\nTime=8:00 to 8:50      SUB NAME=CS,TH   SIR NAME=Mmrsir");
        printf("\n     8:50 to 9:40               Fundamental      Vksir");
        printf("\n     9:40 to 10:30              Office auto      Purvateacher");
        printf("\n");
        printf("\n     10:30 to 11:00_ _ _ _ _ _ _ _ _BREAK_ _ _ _ _ _ _ _ _ _ _");
        printf("\n");
        printf("\n    11:30 to 11:50              C lan(th)        Mssir ");
        printf("\n    11:50 to 12:40              Web Dev(lab)       Kkvsir");
    } else if (strcmp(day, "friday") == 0) {
        printf("\nFRIDAY\n");
        printf("\nTime=8:00 to 8:50      SUB NAME=CS,TH   SIR NAME=Mmrsir");
        printf("\n     8:50 to 9:40               Fundamental      Vksir");
        printf("\n     9:40 to 10:30              Office auto      Purvateacher");
        printf("\n");
        printf("\n     10:30 to 11:00_ _ _ _ _ _ _ _ _BREAK_ _ _ _ _ _ _ _ _ _ _");
        printf("\n");
        printf("\n     11:30 to 11:50             C lan(th)        Mssir ");
        printf("\n     11:50 to 12:40             Web Dev(lab)       Kkvsir");
    } else if (strcmp(day, "saturday") == 0) {
        printf("\nSATURDAY\n");
        printf("\nTime=8:00 to 8:50      SUB NAME=CS,TH   SIR NAME=Mmrsir");
        printf("\n     8:50 to 9:40               Fundamental      Vksir");
        printf("\n     9:40 to 10:30              Office auto      Purvateacher");
        printf("\n");
        printf("\n     10:30 to 11:00_ _ _ _ _ _ _ _ _BREAK_ _ _ _ _ _ _ _ _ _ _");
        printf("\n");
        printf("\n    11:30 to 11:50              C lan(th)        Mssir ");
        printf("\n    11:50 to 12:40              Web Dev(lab)       Kkvsir");
    } else {
        printf("WRONG DAY INPUT");
    }

    return 0;
}
