#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main(void) {
    std::string ExePath="lab12.2.1.exe";
    ShellExecute(NULL,"open",ExePath.c_str(),NULL,NULL,SW_RESTORE);
    printf("Press any key...\n");
    getch();
    system("cls");
    
    int i, j, b, kol=0, sum=0, n, p=5;
    
    FILE *f;
    if((f=fopen("array.bin", "rb"))!=NULL) {
    
        while(!feof(f)) {
            fread(&b, sizeof(b), 1, f);
            if(!feof(f)) { printf("%3d ", b); kol++; }
        }
        if(kol<5) {
            printf("\nIn file is less than 5 numbers. Restart the program.\n");
            system("pause");
            return 0;
        }
        n=kol/5;
        
        fseek(f, SEEK_SET, 0);
        printf("\n\n");
        
        int M[n][p];
        for(i=0; i<n; i++) {
            for(j=0; j<p; j++) {
                fread(&M[i][j], sizeof(b), 1, f);
                if(i == (n-2)) sum+=M[i][j];
                printf("%4d ", M[i][j]);
            }
            printf("\n");
        }
        
        printf("\nSumma el-ov predposlednei stroki: %d\n", sum);
        
    } else printf( "Problem opening the file\n" );
    fclose(f);
    
    system("pause");
    return 0;
}
