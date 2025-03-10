#include<stdio.h>
void india();
void french();
int main() {
    char ch;
    printf("Enter a i for india & f for freanch : ");
    scanf("%c",&ch);
    if(ch == 'i') {
        india();
    }
    else if (ch == 'f'){
        french();
    }
    else {
        printf("you input invalid char");
    }
    return 0;
}
void india(){
    printf("\nNamaste");
}
void french(){
    printf("Bonjor");
}