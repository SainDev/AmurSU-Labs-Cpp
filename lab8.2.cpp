#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

float sr1(float*, int);
float sr2(float*, int);

int main(void) {
    srand((unsigned) time(NULL));
    const int n=4, p=8;
    int i, j;
    float A[n][p];
    
    for (i=0;i<n;i++)
	{
		for (j=0;j<p;j++)
		{
			A[i][j] = (rand() %25 - 15);
			cout<<setw(4)<<A[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(i=0;i<n;i++)
	    cout<<"Sr. ar. "<<i+1<<" stroki = "<<setw(5)<<setprecision(3)<<sr1(A[i], p)<<" || "<<sr2(A[i], p)<<endl;
	    
    system("pause");
}

float sr1(float* M, int r) {
    int kol=0, i;
    float sum=0;
    
    for(i=0; i<r; i++)
        if(M[i]<0)
        {
            sum += M[i];
            kol++;
        }
    return sum/kol;
}

float sr2(float M[], int r) {
    int kol=0, i;
    float sum=0;
    
    for(i=0; i<r; i++)
        if(*(M+i)<0)
        {
            sum += *(M+i);
            kol++;
        }
    return sum/kol;
}
