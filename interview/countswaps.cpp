#include<iostream>

using namespace std;

void bubbleSort(int arr[], int n)

{

 int count=0;

    for(int i=0;i<n-1;i++)

       for(int j=0;j<n-1;j++)

            if(arr[j]>arr[j+1])

            {

                  swap(arr[j], arr[j+1]);

                      count++;

             }

 cout<<"Array is sorted in "<<count<<" swaps."<<endl;

 cout<<"First Element: "<<arr[0]<<endl;

 cout<<"Last Element: "<<arr[n-1];                

}

int main()

{

    int n;

    cin>>n;

    int arr[n];

    int i=0;

    for(i=0;i<n;i++)

    {

      cin>>arr[i];

    }

    bubbleSort(arr,n);

    return 0;

}

