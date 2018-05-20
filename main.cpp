#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <process.h>

#define size 6

using namespace std;

int main()
{
	system("cls");

	int m, A;
	int dem[size] = {2000, 500, 100, 50, 20, 10};
	int numNo[size] = {0};

	cout<<"Enter the amount in multiples of 10: ";
	cin>>m;

	if(m%10!=0)
    {
        cout<<m<<" is not a multiple of 10";
        cout<<endl<<"Exiting...";
        getch();
        exit(0);
    }

    else
        A=m;

	int i=0;
	while(A!=0)
    {
        if(dem[i]>A)
        {
            i++;
            continue;
        }

        else
        {
            A-=dem[i];
            numNo[i]++;
        }
    }

    cout<<endl;
    for(int i=0; i<size; i++)
        cout<<numNo[i]<<"x INR "<<dem[i]<<endl;

    getch();

	return 0;
}
