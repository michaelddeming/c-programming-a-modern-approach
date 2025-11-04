
#include <stdio.h>

int main(void) {
    int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15;
    printf("Enter the number from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &i0, &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12, &i13, &i14, &i15);

    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n",i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15);
    
    int row0_sum = i0 + i1 + i2 + i3;
    int row1_sum = i4 + i5 + i6 + i7;
    int row2_sum = i8 + i9 + i10 + i11;
    int row3_sum = i12 + i13 + i14 + i15;
    
    int col0_sum = i0 + i4 + i8 + i12;
    int col1_sum = i1+ i5 + i9 + i13;
    int col2_sum = i2+ i6 + i10 + i14;
    int col3_sum = i3+ i7 + i11 + i15;

    int dia_neg = i0 + i5 + i10 +i15;
    int dia_pos = i12 + i9 + i6 + i3;

    printf("Row sums: %d, %d, %d, %d\n", row0_sum, row1_sum, row2_sum, row3_sum);
    printf("Column sums: %d, %d, %d, %d\n", col0_sum, col1_sum, col2_sum, col3_sum);
    printf("Diagonal sums: %d, %d\n", dia_neg, dia_pos);
    return 0;

}