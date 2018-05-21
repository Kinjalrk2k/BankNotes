/*	Author:	Kinjal Raykarmakar
		GitHub Repository: BankNotes	*/

/*	This program has been made, keeping on mind the indain currency system(INR),
		For currencies of different countires, the bellow program may be modified as:

		Change the following variables:
		size: no. of denominations
		dem: the denominations

		Change the statement:
		"INR" to "respective currency unit"	*/

/*	including all essential header files */
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <process.h>

#define size 6	//	number of denominations

using namespace std;

int main()
{
	system("cls");

	unsigned int m, A;	//	both are amounts, taken as int
	/*	double is avoided, as decimal amounts are ignored. int will take clear the decimal part
			unsigned has been used, to ignore negative amounts
			if decimal amount needs to be introduced, then change to introduced*/
	int dem[size] = {2000, 500, 100, 50, 20, 10};	//	denominations
	int numNo[size] = {0};	//	this array stores the number of notes of each denominations
	/*	Note: the numNo and dem coinsides in their respective indices */

	cout<<"Enter the amount in multiples of 10: ";
	/*	multiples of 10 are nessesary, as INR 1 notes are not in used.
			if INR 1 needs to be introduced, then this statement can be modified	*/
	cin>>m;

/*	checking whether the entered amount is not a multiple of 10
		if INR 1 needs to be introduced, then the follwing block may be omitted	*/
		if(m%10!=0)
    {
        cout<<m<<" is not a multiple of 10";	//returning the error message
        cout<<endl<<"Exiting...";
        getch();
        exit(0);	//	directly exciting upon pressing any key (Needs Improvement)
    }

    else
        A=m;	//	copying the amount to another variable

	int i=0;
	while(A!=0)	//	looped till amount becomes 0(zero)
  {
	    if(dem[i]>A)	//	finding the highest known denomination from the amount
      {
          i++;
          continue;
      }

      else	//	found the highest one
      {
          A-=dem[i];	//	taking the denomination from amount and,
          numNo[i]++;	//	incrementing the number of respective denominations
      }
  }

  cout<<endl;
  for(int i=0; i<size; i++)	//	loop to print the respective denomination
  	cout<<numNo[i]<<"x INR "<<dem[i]<<endl;

  getch();

	return 0;	//	returns 0(zero) to the OS
}
