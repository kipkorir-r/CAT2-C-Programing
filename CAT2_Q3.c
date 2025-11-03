/*
	ROBIN KIPKORIR MUTAI
	PA106/G/28705/25
*/
#include <stdio.h>

// Function 1: Write 10 integers to input.txt
void writeToFile() {
    FILE *file = fopen("input.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return;
    }
    
    printf("Enter 10 integers:\n");
    int i ;
    for ( i = 0; i < 10; i++) {
        int num;
        printf("Number %d: ", i + 1);
        scanf("%d", &num);
        fprintf(file, "%d\n", num);
    }
    fclose(file);
}

// Function 2: Calculate sum and average, write to output.txt
void processNumbers() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    
    if (in == NULL || out == NULL) {
        printf("Error opening files!\n");
        return;
    }
    
    int num, sum = 0, count = 0;
    
    while (fscanf(in, "%d", &num) != EOF) {
        sum += num;
        count++;
    }
    
    float average = (float)sum / count;
    
    fprintf(out, "Sum: %d\n", sum);
    fprintf(out, "Average: %.2f\n", average);
    
    fclose(in);
    fclose(out);
}

// Function 3: Display both files
void displayFiles() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "r");
    
    if (in == NULL || out == NULL) {
        printf("Error opening files!\n");
        return;
    }
    
    printf("\nInput.txt contents:\n");
    int num, i = 1;
    while (fscanf(in, "%d", &num) != EOF) {
        printf("Number %d: %d\n", i, num);
        i++;
    }
    
    printf("\nOutput.txt contents:\n");
    char line[100];
    while (fgets(line, sizeof(line), out)) {
        printf("%s", line);
    }
    
    fclose(in);
    fclose(out);
}

int main() {
    writeToFile();
    processNumbers();
    displayFiles();
    return 0;
}