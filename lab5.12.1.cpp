#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main(void) {
    srand((unsigned) time(NULL));
    const int n=10, p=10;
    int nmaxi = 0, nmini = 0, nmaxj = 0, nminj = 0, mm, m[n][p], i, j;

	for (i=0;i<n;i++)
	{
		for (j=0;j<p;j++)
		{
			m[i][j]=(rand() %50 - 25);
			cout<<setw(5)<<m[i][j];
		}
		cout<<endl;
	}

    for (i=0;i<n;i++)
    {
		for (j=1;j<p;j++)
			if(m[i][j]>m[nmaxi][nmaxj]) { nmaxi = i; nmaxj = j; }
			else
			if(m[i][j]<m[nmini][nminj]) { nmini = i; nminj = j; }
    }
    
    cout<<endl<<"Max("<<nmaxi<<";"<<nmaxj<<") = "<<m[nmaxi][nmaxj]<<endl;
    cout<<"Min("<<nmini<<";"<<nminj<<") = "<<m[nmini][nminj]<<endl<<endl;
    
    mm = m[nmaxi][nmaxj];
    m[nmaxi][nmaxj] = m[nmini][nminj];
    m[nmini][nminj] = mm;
    
    for (i=0;i<n;i++)
    {
		for (j=0;j<p;j++)
		{
			cout<<setw(5)<<m[i][j];
        }
		cout<<endl;
    }
	
    system("pause");
}
