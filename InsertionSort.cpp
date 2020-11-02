/*
	Name: Insertion Sort
	Copyright: none
	Author: DaniyalShaikh
	Description: a program to sort the array using Insertion sort technique
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
void Insertion_sort()
{
    int i, key, j;int count=0;
    for (i = 1; i<Asiz; i++) 
    { 
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > key) 
        { 
            arr[j+1] = arr[j]; 
            j--; 
        }
        arr[j+1]=key;
    } 
}
int main()
{
    fill_arr(); //fills random values in array depending on the range given from (0..range)
    Insertion_sort(); //sorts using Insertionsort
/* *NOTE* PRINTING LARGE ARRAY MIGHT TKE MUCH TIME SO,
IF U WANT TO COMPARE SMALL VALUES THEN ONLY USE THE FOLLOWING FUNCTION*/ 
    print_arr(); //print the array

}
