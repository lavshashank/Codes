#include <stdio.h>

void insert(int arr[], int* size)
{
    int x, pos;
    printf("\nEnter the new element to be inserted: ");
    scanf("%d", &x);
    printf("Enter the position where element is to be inserted: ");
    scanf("%d", &pos);

    
    if (pos < 0 || pos > *size) {
        printf("Invalid insertion position\n");
        return;
    }

   
    for (int i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[pos] = x;

    (*size)++;

    // Print the updated array
    printf("Updated array: ");
    for (int i = 0; i < *size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int size;
    printf("Enter Array Size : ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size\n");
        return 1;
    }

    int arr[size];
    printf("Enter Array Elements : \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array is : ");
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    int choice;
    printf("Enter case : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            insert(arr, &size);
            break;
    
        default:
            printf("Invalid Input\n");
    }

    return 0;
}