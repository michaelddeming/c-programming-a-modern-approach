
#include <stdio.h>
#include <ctype.h>

float compute_GPA(char grades[], int n);

int main(void) {

    char grades[] = {'A', 'A', 'A', 'A', 'B'};
    int n = sizeof(grades) / sizeof(grades[0]);

    
    float grade = compute_GPA(grades, n);
    printf("Grade Average = %.2f\n", grade);
}

float compute_GPA(char grades[], int n) {

    float res;

    for (int i = 0; i < n; i++) {

        char grade_upper = toupper(grades[i]);

        switch (grade_upper) {

            case 'A': res += 4; break;
            case 'B': res += 3; break;
            case 'C': res += 2; break;
            case 'D': res += 1; break;
            case 'F': res += 0; break;
        }
    }

    return (res / n);
}