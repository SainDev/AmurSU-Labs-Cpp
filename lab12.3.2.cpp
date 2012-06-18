#include <iostream>
#include <conio.h>

using namespace std;

int main(void) {
    int i, j, b, kol=0, sum=0, n=5, p=5, M[n][p];
    
    FILE *f;
    if((f=fopen("array.bin", "rb"))!=NULL) {
    
        while(!feof(f)) {
            fread(&b, sizeof(b), 1, f);
            if(!feof(f)) { printf("%3d ", b); kol++; }
        }
        if(kol<25) {
            printf("\nIn file is less than 25 numbers. Restart the program.\n");
            system("pause");
            return 0;
        }
        fseek(f, sizeof(int)*(-25), SEEK_END);
        printf("\n\n");
        
        for(i=0; i<n; i++) {
            for(j=0; j<p; j++) {
                fread(&M[i][j], sizeof(int), 1, f);
                printf("%4d ", M[i][j]);
            }
            printf("\n");
        }
        
        for(i=0; i<n; i++) {
            for(j=i+1; j<p; j++) {
                sum+=M[i][j];
            }
        }
        
        printf("\nSumma el-ov nad gl-i diag-yu: %d\n", sum);
        
    } else printf( "Problem opening the file\n" );
    fclose(f);
    
    system("pause");
    return 0;
}
