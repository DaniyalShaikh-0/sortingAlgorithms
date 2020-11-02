/*
	Name: Comb Sort
	Copyright: none
	Author: DaniyalShaikh
	Description: a program to sort the array using Comb sort technique
*/
#include <bits/stdc++.h>
using namespace std;
#define Asiz 25 //DEFINING THE SIZE OF ARRAY
#define range 20000 // DEFINING RANGE OF VALUES
long int arr[Asiz];
void fill_arr()
{
    srand(time(0));
    for(int i =0 ;i<Asiz;i++)
	{
		arr[i]=rand()%range ;
	}
}
void print_arr()
{
    for(int i =0 ;i<Asiz;i++)
	{
		cout<<"  "<<arr[i]<<"  ";
	}
}
void comb_sort()
{

		int step = Asiz/1.3, j, k;//k
	while (step > 1) 
	{
		for (j = Asiz-1; j >= step; j--) {
			k = j-step;
			if (arr[j] < arr[k])
			{swap(arr[j],arr[k]);}
		}
		step=step/1.3;
	}
	int flg=0;
	for(int i=0;i<Asiz && flg==0 ;i++)
	{
		flg=1;
		for(int j=Asiz-1;j>i;j--)
		{
			if(arr[j]<arr[j-1])
			{
				swap(arr[j],arr[j-1]);
				flg=0;
			}
		}
	}
}
int main()
{
    fill_arr(); //fills random values in array depending on the range given from (0..range)
    comb_sort(); //sorts using combsort
/* *NOTE* PRINTING LARGE ARRAY MIGHT TKE MUCH TIME SO,
IF U WANT TO COMPARE SMALL VALUES THEN ONLY USE THE FOLLOWING FUNCTION*/ 
    print_arr(); //print the array

}