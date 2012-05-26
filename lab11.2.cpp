#include <iostream>
#include <stdio.h>
#include <conio2.h>

using namespace std;

int main(void) {
    int i, j, kol=0;
    char ch;
    FILE *f;
    
    if((f=fopen("bugaga.txt", "r"))!=NULL) {
        while((ch=getc(f))!=EOF) {
            if(ch==' ') kol++;
            textcolor(3);
            printf("%c", ch);
        }
    }
    printf("\nKol-vo slov: %d\n", kol+1);
    getch();
    kol=0; system("cls");
    if((f=fopen("bugaga.txt", "r"))!=NULL) {
        while((ch=getc(f))!=EOF) {
            if(ch==' ') kol++;
            if(kol==9)
                textcolor(4);
            else 
                textcolor(3);
            printf("%c", ch);
        }
    }
    
    printf("\nKol-vo slov: %d\n", kol+1);
    fclose(f);

    system("pause");
    return 0;
}
