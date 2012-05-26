#include <cstdlib>
#include <iostream>
#include <iomanip>

#include <stdlib.h>
#include <conio.h>
#include <time.h>

using namespace std;

int main(void) {
    srand((unsigned) time(NULL));
    const int n=5, p=10;
    int vvod=0, nmax, nmin, mm, kol=0, m[n][p], i, j;

    cout<<"kak hotite vvesti elementi matrici?"<<endl;
    cout<<"[1] - Keyboard"<<endl<<"[2] - Random"<<endl;
    cin>>vvod;

    switch(vvod)
    {
    	case 1:
    	{
            system("cls");
    		for(i=0;i<n;i++)
    			for(j=0;j<p;j++)
    			{
    				cout<<"Vvedute element ["<<i<<"]["<<j<<"]: ";
    				cin>>m[i][j];
    			}
   			system("cls");
    		for (i=0;i<n;i++)
    		{
    			for (j=0;j<p;j++)
    				cout<<setw(5)<<m[i][j];
    			cout<<endl;
    		}
    	break;
    	}
    
    	case 2:
    	{
    		system("cls");
    		for (i=0;i<n;i++)
    		{
    			for (j=0;j<p;j++)
    			{
    				m[i][j]=(rand() %50 - 25);
    				cout<<setw(5)<<m[i][j];
    			}
    			cout<<endl;
    		}
    	break;
    	}
    }
	
	cout<<endl<<"Stolbci, soderzhashie '0': ";
    for(i=0;i<n;i++)
		for(j=0;j<p;j++)
			if (m[i][j]==0)
            {
            	kol++;
            	cout<<j<<" ";
			}
	if(kol==0)
    	cout<<"NULL"<<endl;
	else
		cout<<endl;
		
    cout<<"kol-vo: "<<kol<<endl<<endl;
	
    for (i=0;i<n;i++)
    {
        nmax = 0;
	    nmin = 0;
		for (j=1;j<p;j++)
			if(m[i][j]>m[i][nmax]) nmax = j;
			else
			if(m[i][j]<m[i][nmin]) nmin = j;

		mm = m[i][nmax];
		m[i][nmax] = m[i][nmin];
		m[i][nmin] = mm;
		
		for (j=0;j<p;j++)
		{
            if(i==n-1 && m[i][j]>0) m[i][j] = 0;
			cout<<setw(5)<<m[i][j];
        }
		cout<<endl;
    }
	
    system("pause");
}
