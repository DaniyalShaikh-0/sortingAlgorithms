/*
	Name: Merge Sort
	Copyright: none
	Author: DaniyalShaikh
	Description: a program to sort the array using Merge sort technique
*/
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
#define Asiz 25 //DEFINING THE SIZE OF ARRAY
#define range 200 // DEFINING RANGE OF VALUES
long int arr[Asiz];
void merge(long int arr[],long int Larr[],long int Rarr[],int lsiz,int rsiz)
{
	int i=0,j=0,k=0;
	while(i<lsiz && j<rsiz)
	{
		if(Larr[i]>Rarr[j])
		{
			arr[k]=Rarr[j];
			j++;k++;
		}
		else
		{
			arr[k]=Larr[i];
			i++;k++;
		}
	}
	while(i<lsiz)
	{
		arr[k]=Larr[i];
		i++;
		k++;
	}
	while(j<rsiz)
	{arr[k]=Rarr[j];
		j++;
		k++;}
}
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
void Merge_sort(long int arr[],int siz)
{
    if(siz>1)
	{
	int mid=siz/2;int i=0;
	long int left[mid];long int right[siz-mid];
	for(i=0;i<mid;i++)
	{
		left[i]=arr[i];
	}
	for(i=mid;i<siz;i++)
	{
		right[i-mid]=arr[i];
	}
    Merge_sort(left,mid);
	Merge_sort(right,siz-mid);
	merge(arr,left,right,mid,siz-mid);
	}
}
int main()
{
    fill_arr(); //fills random values in array depending on the range given from (0..range)
    Merge_sort(arr,Asiz); //sorts using Mergesort
/* *NOTE* PRINTING LARGE ARRAY MIGHT TKE MUCH TIME SO,
IF U WANT TO COMPARE SMALL VALUES THEN ONLY USE THE FOLLOWING FUNCTION*/ 
    print_arr(); //print the array

}