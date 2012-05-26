#include <iostream>
#include <time.h>

using namespace std;

int main(void) {
    srand((unsigned) time(NULL));
    
    int b, a, k = rand()%30+1;
    
    FILE *f;
    if((f=fopen("array.bin", "wb"))!=NULL) {
        while(k!=0) {
            a = rand()%50-25;
            fwrite(&a, sizeof(a), 1, f);
            k = rand()%50;
        }
    } else {
        printf( "Problem opening the file\n" );
        system("pause");
    }
    fclose(f);
}
