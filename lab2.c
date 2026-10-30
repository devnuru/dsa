#include <stdio.h>

int main() {
    int bubbleNumbers[] = {6, 4, 3, 2, 1, 5, 0};
    int insertionNumbers[] = {8, 7, 6, 5, 4, 3, 2};
    int selectionNumbers[] = {9, 8, 7, 6, 5, 4, 3};
    int size = sizeof(bubbleNumbers) / sizeof(bubbleNumbers[0]);

    // Bubble Sort
    for (int round = 0; round < size - 1; round++) {
        for (int index = 0; index < size - round - 1; index++) {
            if (bubbleNumbers[index] > bubbleNumbers[index + 1]) {
                int temporary = bubbleNumbers[index];
                bubbleNumbers[index] = bubbleNumbers[index + 1];
                bubbleNumbers[index + 1] = temporary;
            }
        }
    }

    printf("Bubble sort: ");
    for (int index = 0; index < size; index++) {
        printf("%d ", bubbleNumbers[index]);
    }
    printf("\n");

    // Insertion Sort
    for (int index = 1; index < size; index++) {
        int current = insertionNumbers[index];
        int previous = index - 1;

        while (previous >= 0 && insertionNumbers[previous] > current) {
            insertionNumbers[previous + 1] = insertionNumbers[previous];
            previous--;
        }

        insertionNumbers[previous + 1] = current;
    }

    printf("Insertion sort: ");
    for (int index = 0; index < size; index++) {
        printf("%d ", insertionNumbers[index]);
    }
    printf("\n");

    // Selection Sort
    for (int start = 0; start < size - 1; start++) {
        int smallest = start;

        for (int index = start + 1; index < size; index++) {
            if (selectionNumbers[index] < selectionNumbers[smallest]) {
                smallest = index;
            }
        }

        int temporary = selectionNumbers[start];
        selectionNumbers[start] = selectionNumbers[smallest];
        selectionNumbers[smallest] = temporary;
    }

    printf("Selection sort: ");
    for (int index = 0; index < size; index++) {
        printf("%d ", selectionNumbers[index]);
    }
    printf("\n");

    return 0;
}
