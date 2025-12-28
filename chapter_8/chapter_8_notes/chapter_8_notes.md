
# Chapter 8 - Arrays 

- Variables:
    - Scalar: Capable of holding a single data item.
    - Aggregate: Can store collections of values.

## 8.1 One-Dimensional Arrays

- Array: A data structure containing a number of data values, all of which have the same type.
    - Elements: The values within the array, and can be individually selected by their position.

- Declare an array: Specify the type and the number of the elements in the array.
    - `type array_name[#];`

- Array Subscripting: To access a particular element of an array, we write the array name followed by an integer value in square brackets (this is referred to as **subscripting** or **indexing** the array).
    - Array elements are always numbered starting from 0, so the elements of an array of length n are indexed from 0 to n - 1.
    ![alt text](image.png)
    - `a[i]`: **lvalues** and can be used like ordinary variable.
    ![alt text](image-1.png)
    - In general, if an array contains elements of type *T*, then each element of the array is treated as if it were a variable of type *T*. 
    - C doesn't require that subscript bounds be checked; if a subscript goes out of range, the program's behavior is undefined.

- Arrays and `for` loops:
![alt text](image-2.png)

- Array Initialization:
    - ![alt text](image-3.png)
    - If the initializer is shorter than the array length defined, the blanks are filled with 0.
        - ![alt text](image-4.png)
        - ![alt text](image-5.png)
    - If an initializer is present the length of the array may be omitted.
        - ![alt text](image-6.png)

- Designated Initializers (C99): Initialize specific index locations during array initialization, index locations not mentions are filled by 0. Order does not matter.
    - ![alt text](image-7.png)
        - Each number in the brackets (not braces) is said to be a designator. Must be integer constant expressions, between 0 and n-1, where n is the length of the array. If the size of the array is omitted, the largest designator defines the last position of the array, array length = largest designator + 1.
            - ![alt text](image-8.png)

- Using the `sizeof` Operator with Arrays: The `sizeof` operator can determine the size of an array (in bytes).
    - We can also use `sizeof` to measure the size of an array element, such as `a[0]`.
    - Dividing the array size by the element size gives the length of the array:
        - ![alt text](image-9.png)
        - ![alt text](image-10.png)
            - May produce a warning message when comparing `i` of type `int` (signed type) with `(sizeof(a) / sizeof(a[0]))` of `size_t` type. Cast `(int) (sizeof(a) / sizeof(a[0]))` to promote this value.


## 8.2 Multidimensional Arrays

- Multidimensional Arrays: An array that has more than one index (or dimension), allowing data to be organized in rows, columns, and higher-dimensional grids rather than a single linear list, aka *matrix*. 

- Two-dimensional Array: A table of rows and columns.
    - ![alt text](image-11.png)
        - Array `m` has 5 rows and 9 columns, both rows and columns are indexed from 0.  
        - ![alt text](image-12.png)
        - To access the element of `m` in row `i`, column `j`, we must write `m[i][j]`.

- Row-major Order: A way in which two-dimensional arrays are actually stored in computer memory. Row 0 is frist, then row 1, and so forth... 
    - ![alt text](image-13.png)

- Initializing a Multidimensional Array: 
    - Nesting One-dimensional initializers: By nesting one-dimensional initializers, where each nested set of braces represents one row of the array.
        - ![alt text](image-14.png)
            - Each inner braces corresponds to a row in the array.
            - Rows that are not explicitly initialized are automatically filled with 0s.
            - Rows that are partially initialized have their remaining elements automatically filled with 0s.
            - The inner braces separating each row can be omitted, but this could cause errors if not careful.
    - C99 allows for the use of **designated initializers**. 
        - ![alt text](image-15.png)
    
- Constant Arrays: An array that's been declared `const` should not be modified by the program; the compiler will detect direct attempts to modify an element. Not only limited to arrays.
    - ![alt text](image-16.png)

- `time()`: A function from the `time.h` header file that returns the current time encoded in a single number. 
- `srand(seed)`: A function from the `stdlib.h` header file that initializes C's random number generator given a seed value.
    - You can pass the return of `time(NULL)` as a unique seed. 
- `rand()`: A function from the `stdlib.h` header file that generates a pseudo-random integer each time it's called.
    - The `%` (modulus) operator can be used to limit the range of values, for example: `rand() % len` which produces a value suitable for indexing into an array of length `len`.


## 8.3 Variable-Length Arrays (C99)

- Variable-length Array: The use of an expression that is not constant to declare the length of an array when initialized. Also works for multi-dimensional arrays.
    - ![alt text](image-17.png)
    - Restrictions:
        - VLAs can't have static storage duration (have not seen yet with arrays).
        - VLAs may not have an initializer.


