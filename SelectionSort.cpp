/*
	Name: Selection Sort
	Copyright: none
	Author: DaniyalShaikh
	Description: a program to sort the array using Selection sort technique
*/
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
#define Asiz 25 //DEFINING THE SIZE OF ARRAY
#define range 200 // DEFINING RANGE OF VALUES
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
void Selection_sort()
{
    int min1=0,i,j;
	for (i=0; i<Asiz-1; i++)
	{
    for (j=i+1,min1=i; j<Asiz; j++)
	{
		if(arr[min1] > arr[j])
		{
            min1=j;
        }
	}
	if(min1!=i)
    {swap(arr[i],arr[min1]);}
	}
}
int main()
{
    fill_arr(); //fills random values in array depending on the range given from (0..range)
    Selection_sort(); //sorts using Selectionsort
/* *NOTE* PRINTING LARGE ARRAY MIGHT TKE MUCH TIME SO,
IF U WANT TO COMPARE SMALL VALUES THEN ONLY USE THE FOLLOWING FUNCTION*/ 
    print_arr(); //print the array

}
