


#include <stdio.h>

int main(void) {

    int rows = 5, cols = 5; 
    int matrix[rows][cols];

    for (int row = 0; row < rows; row++) {

        printf("Enter %d quiz grades: ", row + 1);
        
        for (int col = 0; col < cols; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }

    int total_student_scores[5] = {0};
    float average_student_scores[5] = {0};
    
    int quiz_totals[5] = {0};
    int high_quiz[5] = {-1, -1, -1, -1, -1};
    int low_quiz[5] = {101, 101, 101, 101, 101};

    float average_quiz_scores[cols];

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            total_student_scores[i] += matrix[i][j];
            quiz_totals[j] += matrix[i][j];

            if (matrix[i][j] > high_quiz[j]) {
                high_quiz[j] = matrix[i][j];
            }

            if (matrix[i][j] < low_quiz[j]) {
                low_quiz[j] = matrix[i][j];
            }
        }
        average_student_scores[i] = (float) total_student_scores[i] / rows;
    }

    for (int i = 0; i < cols; i++) {
        average_quiz_scores[i] = (float) quiz_totals[i] / cols;
    }

    printf("\nPer Quiz Results\n");
    for (int i = 0; i < cols; i++) {
       printf("Quiz %d\n", i + 1);
       printf("Average = %f\n", average_quiz_scores[i]);
       printf("High = %d\n", high_quiz[i]);
       printf("Low = %d\n", low_quiz[i]);
    }
    
    printf("\nPer Student Results\n");
    for (int i = 0; i < cols; i++) {
       printf("Student %d\n", i + 1);
       printf("Average = %f\n", average_student_scores[i]);
       
    }
}