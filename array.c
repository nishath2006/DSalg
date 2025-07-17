#include <stdio.h>
#define size 100

int a[size], n = 0;
void insert() {
    int p, val;
    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &p);

    if (p < 0 || p > n) {
        printf("Invalid position!\n");
        return;
    }

    printf("Enter value to insert: ");
    scanf("%d", &val);

    for (int i = n; i > p; i--) {
        a[i] = a[i - 1];
    }

    a[p] = val;
    n++;
}


void del() {
    int p;
    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &p);

    if (p < 0 || p >= n) {
        printf("Invalid position!\n");
        return;
    }

    for (int i = p; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n--;
}

void display() {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void search() {
    int key, found = 0;
    printf("Enter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("%d found at position %d\n", key, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found\n");
    }
}

int main() {
    int opt;

    while (1) {
        printf("\nChoose an option:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Your choice: ");
        scanf("%d", &opt);

        switch (opt) {
            case 1:
                insert();
                display();
                break;
            case 2:
                del();
                display();
                break;
            case 3:
                search();
                break;
            case 4:
                display();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid option! Try again.\n");
        }
    }
}
