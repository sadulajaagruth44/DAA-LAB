\\---Bubble Sort---
#include <iostream>
using namespace std;

int main()
{
    int n, arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sort
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

\\---Selection sort---
#include <iostream>
using namespace std;

int main()
{
    int n, arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Selection Sort
    for(int i = 0; i < n - 1; i++)
    {
        int min = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    cout << "Sorted array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


\\---insertion sort---
#include <iostream>
using namespace std;

int main()
{
    int n, arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Insertion Sort
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    cout << "Sorted array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

\\---merge sort---
#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int temp[100];

    int i = low;
    int j = mid + 1;
    int k = low;

    while(i <= mid && j <= high)
    {
        if(arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }

        k++;
    }

    while(i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j <= high)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(i = low; i <= high; i++)
    {
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{
    int n, arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

\\---quick sort---
#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];

    int i = low;
    int j = high;

    while(i < j)
    {
        while(arr[i] <= pivot && i < high)
        {
            i++;
        }

        while(arr[j] > pivot)
        {
            j--;
        }

        if(i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int p = partition(arr, low, high);

        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

int main()
{
    int n, arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
