#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>

using namespace std;

int main(void) {
    srand((unsigned) time(NULL));
    const int n=12, m=8;
    int P, a[n][m], i, j;

	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			a[i][j]=(rand() %15 - 7);
			cout<<setw(5)<<a[i][j];
		}
		cout<<endl;
	}
    
    for (i=0;i<n;i++)
    {
		for (j=0;j<m;j++)
			if(fabs(a[i][j])<=5) P*=a[i][j];
    }
    
    //Тут всегда 0 получается потому, что в матрице встречается 0.
    //Над у галаган спросить, исключать его или нет.
    cout<<endl<<"Proizv-e el-ov matricy po modulyu <=5: "<<P<<endl;
    
    system("pause");
}
