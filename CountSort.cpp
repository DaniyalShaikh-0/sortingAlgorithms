/*
	Name: count Sort
	Copyright: none
	Author: DaniyalShaikh
	Description: a program to sort the array using count sort technique
*/
#include <bits/stdc++.h>
using namespace std;
#define Asiz 25 //DEFINING THE SIZE OF ARRAY
#define range 20 // DEFINING RANGE OF VALUES
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
void count_sort()
{
    int max=range-1;
	int i;
	int count[max+1]={0};
	int *newarr= new int[Asiz];
	for(i=0;i<Asiz;i++)
	{
		count[arr[i]]++;
	}
	for(i=1;i<=max;i++)
	{count[i]+=count[i-1];}
	for(i=Asiz-1;i>=0;i--)
	{
		count[arr[i]]--;
		newarr[count[arr[i]]]=arr[i];
	}
	for(i=0;i<Asiz;i++)
	arr[i]=newarr[i];

    delete[] newarr;
}
int main()
{
    fill_arr(); //fills random values in array depending on the range given from (0..range)
    count_sort(); //sorts using countsort
/* *NOTE* PRINTING LARGE ARRAY MIGHT TKE MUCH TIME SO,
IF U WANT TO COMPARE SMALL VALUES THEN ONLY USE THE FOLLOWING FUNCTION*/ 
    print_arr(); //print the array

}
