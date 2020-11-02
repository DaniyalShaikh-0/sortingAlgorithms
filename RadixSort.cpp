/*
	Name: Radix Sort
	Copyright: none
	Author: DaniyalShaikh
	Description: a program to sort the array using Radix sort technique
*/
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
#define Asiz 25 //DEFINING THE SIZE OF ARRAY
#define range 20000 // DEFINING RANGE OF VALUES
long int arr[Asiz];
long int *output= new long int[Asiz];
void countSort(long int arr[], int n, int exp) 
{
	int i, count[10] = {0}; 
	for (i = 0; i < n; i++) 
    {
		count[ (arr[i]/exp)%10 ]++; 
    }
	for (i = 1; i < 10; i++) 
	{
        	count[i] += count[i - 1]; 
    }
	for (i = n - 1; i >= 0; i--) 
	{ 
		output[count[ (arr[i]/exp)%10 ] - 1] = arr[i]; 
		count[ (arr[i]/exp)%10 ]--; 
	}
    for (i = 0; i < n; i++) 
	{
        arr[i] = output[i]; 
    }
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
int getMax()
{
    int max = arr[0]; 
	for (int i = 1; i < Asiz; i++) 
		if (arr[i] > max) 
		{
            max = arr[i];
        }
	return max; 
}
void Radix_sort()
{
    int m = getMax();
    for (int exp =1; m/exp > 0; exp *= 10) 
		countSort(arr, Asiz, exp); 
}
int main()
{
    fill_arr(); //fills random values in array depending on the range given from (0..range)
    Radix_sort(); //sorts using Radixsort
    delete[] output;
/* *NOTE* PRINTING LARGE ARRAY MIGHT TKE MUCH TIME SO,
IF U WANT TO COMPARE SMALL VALUES THEN ONLY USE THE FOLLOWING FUNCTION*/ 
    print_arr(); //print the array

}
