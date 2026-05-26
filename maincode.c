#include <stdio.h>

int search(int arr[], int n, int data) {
    int l = 0, r = n - 1, mid;

    while (l <= r) {
        mid = (l + r) / 2;

        if (data == arr[mid])
            return mid;

        else if (data > arr[mid])
            l = mid + 1;

        else
            r = mid - 1;
    }

    return -1;
}

int main() {
    int arr[100], n, data, result;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter data to search: ");
    scanf("%d", &data);

    result = search(arr, n, data);

    if (result == -1)
        printf("Data not found");
    else
        printf("Data found at index %d", result);

    return 0;
}
