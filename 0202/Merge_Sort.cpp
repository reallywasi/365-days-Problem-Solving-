#include <iostream>

using namespace std;

// Merge function to merge two sorted halves of an array
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;  // Size of the left subarray
    int n2 = right - mid;     // Size of the right subarray

    // Create temporary arrays to store the two halves
    int leftHalf[n1];
    int rightHalf[n2];

    // Copy data to temporary arrays leftHalf[] and rightHalf[]
    for (int i = 0; i < n1; i++)
        leftHalf[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightHalf[j] = arr[mid + 1 + j];

    // Merge the two halves back into the original array
    int i = 0;  // Initial index of the first subarray
    int j = 0;  // Initial index of the second subarray
    int k = left;  // Initial index of the merged subarray

    while (i < n1 && j < n2) {
        if (leftHalf[i] <= rightHalf[j]) {
            arr[k] = leftHalf[i];
            i++;
        } else {
            arr[k] = rightHalf[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftHalf[], if any
    while (i < n1) {
        arr[k] = leftHalf[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightHalf[], if any
    while (j < n2) {
        arr[k] = rightHalf[j];
        j++;
        k++;
    }
}

// MergeSort function to recursively divide and sort the array
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Calculate mid point of the array
        int mid = left + (right - left) / 2;

        // Recursively sort the first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int main() {
    // Example usage
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < arrSize; i++)
        cout << arr[i] << " ";

    // Perform merge sort
    mergeSort(arr, 0, arrSize - 1);

    cout << "\nSorted array: ";
    for (int i = 0; i < arrSize; i++)
        cout << arr[i] << " ";

    return 0;
}
