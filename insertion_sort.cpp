#include <iostream>
using namespace std;

void inSort(int *arr, int n)
{
    int key,j;
    for (int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;

    }

    for(int i=0;i<n;i++)
    cout<<arr[i];
}



int main() {
	// your code goes here

	int arr[100];
	int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

	inSort(arr,n);


	return 0;
}