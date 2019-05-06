#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printarr(int arr[], unsigned int size)
{
    for (int i=0; i<size; i++)
    {
	printf("arr[%d]=%d\n", i, arr[i]);
    }
	printf("\n");
}

void bubble(int arr[], unsigned int size)
{
    for (int i=0; i < size-1; i++)
    {
	for (int j=0; j < size-i-1; j++)
	{
	    if (arr[j] > arr[j+1])
	    {
		int t = arr[j+1];
		arr[j+1] = arr[j];
		arr[j] = t;
	    }
	}
    }
}


void count(int arr[], unsigned int size)
{
    int max = arr[0];
    
    for (int i=0; i<size; i++)
    {
	if (arr[i] > max)
	{
	    max = arr[i];
	}
    }
    
    max++;
    
    
    int add[max];
    
    for(int i=0; i<=max; i++)
    {
	add[i] = 0;
    }
    
    for(int i=0; i<size; i++)
    {
	add[arr[i]]++;
    }
    
    for(int i=0; i<=max; i++)
    {
	for(int j=0; j<add[i]; j++)
	{
	    *(arr++) = i;
	}
    }
}

void heap(int arr[], unsigned int size)
{
	

int main()
{
    unsigned int size=10;
    
    int arrraz[size], arrdva[size];
    srand(time(NULL));
    
    for(int i=0; i<size; i++)
    {
	arrraz[i]=rand()%100;
	arrdva[i]=arrraz[i];
    }
    
    printarr(arrraz, size);
    
    bubble(arrraz, size);
    printarr(arrraz, size);
    
    count(arrdva, size);
    printarr(arrdva, size);
    
return 0;
}
