/*
	Name: Bubble Sort
	Copyright: none
	Author: DaniyalShaikh
	Description: a program to sort the array using bubble sort technique
*/
#include <bits/stdc++.h>
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
void bubble_sort()
{

	int i,j,temp;
	for(int i=0;i<Asiz;i++)
	{
		for(j=0;j<Asiz-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
                swap(arr[j],arr[j+1]);
			}
		}
	}	
}
int main()
{
    fill_arr(); //fills random values in array depending on the range given from (0..range)
    bubble_sort(); //sorts using bubbleSort
/* *NOTE* PRINTING LARGE ARRAY MIGHT TKE MUCH TIME SO,
IF U WANT TO COMPARE SMALL VALUES THEN ONLY USE THE FOLLOWING FUNCTION*/ 
    print_arr(); //print the array

}
