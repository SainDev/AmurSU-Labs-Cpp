#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main(void) {
    srand((unsigned) time(NULL));
    const int m=7, l=7;
    int nmin, A[m][l], i, j;

	for (i=0;i<m;i++)
	{
		for (j=0;j<l;j++)
		{
			A[i][j]=(rand() %10 - 5);
			cout<<setw(3)<<A[i][j];
		}
		cout<<endl;
	}

    for (j=1;j<l;j+=2)
    {   
        nmin=0;
		for (i=0;i<m;i++)
		{
			if(A[i][j]<A[nmin][j]) nmin = i;
        }
		A[nmin][j] = 0;
    }
    
    cout<<endl;
    
    for (i=0;i<m;i++)
    {
		for (j=0;j<l;j++)
		{
			cout<<setw(3)<<A[i][j];
        }
		cout<<endl;
    }
	
    system("pause");
}
