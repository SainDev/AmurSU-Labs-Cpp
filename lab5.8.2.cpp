#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main(void) {
    srand((unsigned) time(NULL));
    const int n=12, m=8;
    int nmax=0, nmin=0, a[n][m], i, j;

	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			a[i][j]=(rand() %15 - 5);
			cout<<setw(5)<<a[i][j];
		}
		cout<<endl;
	}
    
    for (i=2;i<n;i+=3)
    {
        nmax = 0;
	    nmin = 0;
		for (j=1;j<m;j++)
			if(a[i][j]>a[i][nmax]) nmax = j;
			else
			if(a[i][j]<a[i][nmin]) nmin = j;

		a[i][nmax] = 100;
		a[i][nmin] = 0;
    }
    
    cout<<endl;
    
    for (i=0;i<n;i++)
    {
		for (j=0;j<m;j++)
		{
			cout<<setw(5)<<a[i][j];
        }
		cout<<endl;
    }
    
    system("pause");
}
