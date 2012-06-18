#include <iostream>
#include <conio.h>

using namespace std;

int main(void) {
    int i, j, q, kol=0;
    float a=0, b=0, R=0;
    
    FILE *f;
    if((f=fopen("array.bin", "rb"))!=NULL) {
        
        while(!feof(f)) {
            //������ �� �����
            fread(&q, sizeof(q), 1, f);
            //������� ���������� ����� � ������� ���-�� �����
            if(!feof(f)) { printf("%4d ", q); kol++; }
        }
        //���� � ����� ����� 2-� ��������, ������ ����������� ���� � ��������� ���������
        if(kol<2) {
            printf("\nIn file is less than 2 numbers. Create the new file.\n");
            system("pause");
            return 0;
        }
        fseek(f, 0, SEEK_SET);
        printf("\n\n");
        //��������� ���-�� ����� � ����� �� ��������, ���� �������, ��������� kol �� 1
        if(kol%2!=0) kol--;
        //������� ������ ����������� kol � ���������� � ���� �������� �� �����
        int M[kol];
        for(i=0; i<kol; i++) {
            fread(&M[i], sizeof(M[i]), 1, f);
        }
        
        printf("\nVvedite koordinaty centra okr-ti (a;b):");
        scanf("%f %f", &a, &b);
        printf("Vvedite radius R:");
        scanf("%f", &R);
        //���� � ����� 2 �������
        for(i=0; i<kol; i+=2) {
            //�������, ����������� i-� � ��������� �� ��� ����� ��� ���������� �����, �� ��������� � ���������� �� ������� (x-a)^2 + (y-b)^2 = R^2
            if(((M[i]-a)*(M[i]-a)+(M[i+1]-b)*(M[i+1]-b)) <= R*R)
                printf("Tochka (%d,%d)\n", M[i], M[i+1]);
        }
        
    } else printf( "Problem opening the file\n" );
    fclose(f);
    
    system("pause");
    return 0;
}
