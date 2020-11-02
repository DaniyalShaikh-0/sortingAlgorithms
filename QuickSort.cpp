/*
	Name: Quick Sort
	Copyright: none
	Author: DaniyalShaikh
	Description: a program to sort the array using Quick sort technique
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
int PartitionStart(long int arr[],int start,int end)
{
	int pivot=arr[start];
	int index=start+1;
	int i=0;
	for(i=start+1;i<=end;i++)
	{
		if(arr[i]<=pivot)
		{
			if(i!=index)
			swap(arr[i],arr[index]);
			index++;
		}
	}
  	swap(arr[index-1], arr[start]);
	return index-1;
}
void print_arr()
{
    for(int i =0 ;i<Asiz;i++)
	{
		cout<<"  "<<arr[i]<<"  ";
	}
}
void Quick_sort(long int arr[],int start,int end)
{
    if(start<end)
	{	
	//	int index=PartitionEnd(arr,start,end);
		int index=PartitionStart(arr,start,end);
	//	int index=PartitionMed(arr,start,end);
	//	cout<<"end : "<<end<<endl;
		Quick_sort(arr,start,index-1);
		Quick_sort(arr,index+1,end);
	}
}
int main()
{
    fill_arr(); //fills random values in array depending on the range given from (0..range)
    Quick_sort(arr,0,Asiz-1); //sorts using Quicksort
/* *NOTE* PRINTING LARGE ARRAY MIGHT TKE MUCH TIME SO,
IF U WANT TO COMPARE SMALL VALUES THEN ONLY USE THE FOLLOWING FUNCTION*/ 
    print_arr(); //print the array

}
