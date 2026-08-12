#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct {
    int arr[MAX_SIZE];
    int size; // number of elements currently in list
} ArrayList;

// Create a new list
void CreateList(ArrayList *list) {
    printf("Enter number of elements: ");
    scanf("%d", &list->size);
    if (list->size < 0 || list->size > MAX_SIZE) {
        printf("Invalid size, resetting to 0\n");
        list->size = 0;
        return;
    }
    printf("Enter elements:\n");
    for (int i = 0; i < list->size; i++)
        scanf("%d", &list->arr[i]);
}

bool IsListEmpty(ArrayList *list) {
    return list->size == 0;
}

bool Insert(ArrayList *list) {
    if (list->size >= MAX_SIZE) {
        printf("List is full\n");
        return false;
    }
    int data, pos;
    printf("Enter value: ");
    scanf("%d", &data);
    printf("Enter position (1-%d): ", list->size + 1);
    scanf("%d", &pos);
    if (pos < 1 || pos > list->size + 1) {
        printf("Invalid position\n");
        return false;
    }
    for (int i = list->size; i >= pos; i--)
        list->arr[i] = list->arr[i - 1];
    list->arr[pos - 1] = data;
    list->size++;
    return true;
}

bool Delete(ArrayList *list) {
    if (IsListEmpty(list)) {
        printf("List is empty\n");
        return false;
    }
    int pos;
    printf("Enter position (1-%d) to delete: ", list->size);
    scanf("%d", &pos);
    if (pos < 1 || pos > list->size) {
        printf("Invalid position\n");
        return false;
    }
    printf("Deleted: %d\n", list->arr[pos - 1]);
    for (int i = pos - 1; i < list->size - 1; i++)
        list->arr[i] = list->arr[i + 1];
    list->size--;
    return true;
}

bool Modify(ArrayList *list) {
    if (IsListEmpty(list)) {
        printf("List is empty\n");
        return false;
    }
    int pos, newVal;
    printf("Enter position (1-%d) to modify: ", list->size);
    scanf("%d", &pos);
    if (pos < 1 || pos > list->size) {
        printf("Invalid position\n");
        return false;
    }
    printf("Enter new value: ");
    scanf("%d", &newVal);
    list->arr[pos - 1] = newVal;
    return true;
}

void Display(ArrayList *list) {
    if (IsListEmpty(list)) {
        printf("List is empty\n");
        return;
    }
    printf("List elements: ");
    for (int i = 0; i < list->size; i++)
        printf("%d ", list->arr[i]);
    printf("\n");
}

void Search(ArrayList *list) {
    if (IsListEmpty(list)) {
        printf("List is empty\n");
        return;
    }
    int value;
    bool found = false;
    printf("Enter value to search: ");
    scanf("%d", &value);
    for (int i = 0; i < list->size; i++) {
        if (list->arr[i] == value) {
            found = true;
            break;
        }
    }
    printf(found ? "Found\n" : "Not found\n");
}

// ================= MAIN =================
int main() {
    ArrayList myList = { .size = 0 };
    int choice;
    do {
        printf("\n--- Array List Menu ---\n");
        printf("1. Create list\n");
        printf("2. Insert element\n");
        printf("3. Delete element\n");
        printf("4. Modify element\n");
        printf("5. Display list\n");
        printf("6. Search element\n");
        printf("0. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: CreateList(&myList); break;
            case 2: Insert(&myList); break;
            case 3: Delete(&myList); break;
            case 4: Modify(&myList); break;
            case 5: Display(&myList); break;
            case 6: Search(&myList); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 0);
    return 0;
}
