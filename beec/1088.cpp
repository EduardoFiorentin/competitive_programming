#include <bits/stdc++.h>
// Num inversões dos 3 primeiros casos beec
// 5, 6, 0

using namespace std;
int cont = 0;

int i = 0; 
#define for_i(s,k) for (i = s; i < k; i++)

#define MAX 100000+1


void increment(int inc) {
    cont = cont + inc;
    // cout << "contador: " << cont << endl;
}


// Method to merge two halves
void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* Left = new int[n1];
    int* Right = new int[n2];

    // Fill the left and right arrays
    for (int i = 0; i < n1; i++)
        Left[i] = arr[left + i];
    for (int j = 0; j < n2; j++) {
        Right[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0;
    int k = left;
    while (i < n1 && j < n2)
    {
        if (Left[i] <= Right[j])
        {
            arr[k++] = Left[i++];
        }
        else
        {
            increment(n1 - i);
            arr[k++] = Right[j++];
        }
    }

    // Copy remaining elements of Left[] if any
    while (i < n1)
    {
        arr[k++] = Left[i++];
    }

    // Copy remaining elements of Right[] if any
    while (j < n2)
    {
        arr[k++] = Right[j++];
    }

    delete[] Left;
    delete[] Right;
}

// Method to divide and sort the array
void sort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        // Recursively sorting the first and second halves
        sort(arr, left, mid);
        sort(arr, mid + 1, right);

        // Merging the sorted halves
        merge(arr, left, mid, right);
    }
}

int n, aux;
int arr[MAX];
// int arr_size = sizeof(arr)/sizeof(arr[0]);

int main() 
{

    while (cin >> n) {

        if (n == 0) break;
        cont = 0;

        for_i(0, n) {
            cin >> arr[i];
        }

        sort(arr, 0, n - 1);

        if (cont % 2 == 0) cout << "Carlos" << endl;
        else cout << "Marcelo" << endl;
    }

    return 0;
}