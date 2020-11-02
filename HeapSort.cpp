/*
	Name: Heap Sort
	Copyright: none
	Author: DaniyalShaikh
	Description: a program to sort the array using Heap sort technique
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
void Heap_sort()
{
    int max=range-1;
	int i;
	int Heap[max+1]={0};
	int *newarr= new int[Asiz];
	for(i=0;i<Asiz;i++)
	{
		Heap[arr[i]]++;
	}
	for(i=1;i<=max;i++)
	{Heap[i]+=Heap[i-1];}
	for(i=Asiz-1;i>=0;i--)
	{
		Heap[arr[i]]--;
		newarr[Heap[arr[i]]]=arr[i];
	}
	for(i=0;i<Asiz;i++)
	arr[i]=newarr[i];

    delete[] newarr;
}
int main()
{
    fill_arr(); //fills random values in array depending on the range given from (0..range)
    Heap_sort(); //sorts using Heapsort
/* *NOTE* PRINTING LARGE ARRAY MIGHT TKE MUCH TIME SO,
IF U WANT TO COMPARE SMALL VALUES THEN ONLY USE THE FOLLOWING FUNCTION*/ 
    print_arr(); //print the array
}
