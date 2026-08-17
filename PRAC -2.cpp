//Linear Search

#include <iostream>
using namespace std;

int main()
{
    int n, arr[100], key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

  
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            cout << "Element found at position " << i + 1;
            return 0;
        }
    }

    cout << "Element not found";

    return 0;
}

/*Time Analysis
Best Case: O(1)
Average Case: O(n)
Worst Case: O(n)
Space Complexity: O(1)*/

//Binary search 
#include <iostream>
using namespace std;

int main()
{
    int n, arr[100], key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements in sorted order: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0;
    int high = n - 1;
    int mid;

    // Binary Search
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            cout << "Element found at position " << mid + 1;
            return 0;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "Element not found";

    return 0;
}

/*Time Analysis
Best Case: O(1)
Average Case: O(log n)
Worst Case: O(log n)
Space Complexity: O(1)*/
