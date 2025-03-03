int main() {
    int marks[5]; // Array to store marks of 5 subjects
    int total = 0;

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter mark for subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        // Add the mark to the total
        total += marks[i];
    }

    // Display the total marks
    printf("\nTotal marks: %d\n", total);

    return 0;
}