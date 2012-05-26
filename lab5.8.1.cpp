#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main(void) {
    srand((unsigned) time(NULL));
    const int n=12, m=8;
    int nst = 100, mm, kol=0, a[n][m], i, j;
    bool out;

	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			a[i][j]=(rand() %15 - 2);
			cout<<setw(5)<<a[i][j];
		}
		cout<<endl;
	}

    for (j=0; j<m; j++)
    {
        out = true;
		for (i=0;i<n;i++)
		{
			if(a[i][j]<0)
            {
                out = false;
                break;
            }
        }
		if(out)
		{
            nst = j;
            break;
        }
    }
    
    if(nst == 100)
    {
        cout<<endl<<"Vse stolbcy soderzhat otr-e elementy!"<<endl;
    } else {
        cout<<endl<<"Nomer 1-go stolbca bez otr-h el-ov: "<<nst+1<<endl;
    }
	
    system("pause");
}
