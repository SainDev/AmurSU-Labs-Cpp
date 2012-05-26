#include <iostream>
#include <string.h>

using namespace std;

int main(void) {

    int i, j, kol1=0, kol2=0;
    char str1[20], str2[20], glas[]={'a', 'e', 'i', 'o', 'u', 'y'};

    cout<<"vvedite 1 stroku: "<<endl;
    cin>>str1;
    cout<<"vvedite 2 stroku: "<<endl;
    cin>>str2;
    
    for(i=0; i<strlen(str1); i++)
        for(j=0; j<strlen(glas); j++)
            if(str1[i]==glas[j])
                kol1++;
    
    for(i=0; i<strlen(str2); i++)
        for(j=0; j<strlen(glas); j++)
            if(str2[i]==glas[j])
                kol2++;
            
    if(kol1>kol2)
        for(i=0; i<strlen(str1); i++)
            for(j=0; j<strlen(glas); j++)
                if(str1[i]==glas[j])
                    str1[i] = '*';
    else
    if(kol1<kol2)
        for(i=0; i<strlen(str2); i++)
            for(j=0; j<strlen(glas); j++)
                if(str2[i]==glas[j])
                    str2[i] = '*';

    cout<<str1<<endl<<str2;
    system("pause");
}
