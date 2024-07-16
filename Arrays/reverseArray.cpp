// #include<iostream>
// using namespace std;

// void reverseArray(int *arr, int n)
// {
    
//     int copyArr[n];
//     for(int i=0;i<n;i++)
//     {
//         int j=n-i-1;
//         copyArr[i] = arr[j];
//     }
//     for(int i=0;i<n;i++)
//     {
//         arr[i] = copyArr[i];
//     }
// }

// int main()
// {
//     int n;
//     cout<<"Enter the length of the array: ";
//     cin>>n;
//     int array[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>array[i];
//     }
//     reverseArray(array, n);
//     cout<<reverseArray;

//     return 0;
// }

//Chatgpt

#include<iostream>
using namespace std;

void reverseArray(int *arr, int n)
{
    int copyArr[n];
    for(int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        copyArr[i] = arr[j];
    }
    for(int i = 0; i < n; i++)
    {
        arr[i] = copyArr[i];
    }
}

int main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    // Use dynamic memory allocation for the array
    int *array = new int[n];
    
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    reverseArray(array, n);
    
    cout << "Reversed array: ";
    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // Free the dynamically allocated memory
    delete[] array;

    return 0;
}
