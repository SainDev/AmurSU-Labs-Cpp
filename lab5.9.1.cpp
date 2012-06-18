#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main(void) {
    srand((unsigned) time(NULL));
    const int n=8, p=9;
    int B[n][p], i, j, pr;

	for (i=0;i<n;i++)
	{
		for (j=0;j<p;j++)
		{
			B[i][j]=(rand() %10 - 3);
			cout<<setw(4)<<B[i][j];
		}
		cout<<endl;
	}

    for (j=1;j<p;j+=2)
    {   
        pr=1;
		for (i=0;i<n;i++)
		{
		    pr *= B[i][j];
        }
		cout<<endl<<"Proizv-e "<<j+1<<" stolbca = "<<pr;
    }
	cout<<endl;
    system("pause");
}
