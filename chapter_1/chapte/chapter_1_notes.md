# Chapter 1 - Introducing C

## 1.1 History of C

- C is a product of the UNIX operating system.

- UNIX: A multiuser, multitasking operating system originally developed in the late 1960s and early 1970s at AT&T’s Bell Labs by Ken Thompson, Dennis Ritchie, and others.
    - Programs can be combined using **pipes** and **shell** scripts to perform complex tasks.
    -  Written in **C**, makes it portable to different machines. 
    - All devices and files are represented in a single tree-like directory structure.
    - Access to files and processes is controlled through user and group permissions.

- American National Standards Institute (ANSI): A private, non-profit organization that develops and coordinates voluntary standards for products, services, and systems in the United States, including those related to computers and programming languages.

- International Organization for Standardization (ISO): A global, non-governmental organization that develops and publishes international standards across almost every industry.

- C Standardization Timeline:
    - **1983 - 1989**: The ANSI X3J11 committee worked on standardizing the C language, which at that point had many slightly different versions across systems (especially between UNIX variants).
    - **1989**: ANSI officially adopted the ANSI C standard, formally known as ANSI X3.159-1989. This version is often called C89.
    - The International Organization for Standardization (ISO) adopted that same standard with only minor editorial changes, calling it ISO/IEC 9899:1990, also known as C90.
    - **1995 - 1999**: The ISO/IEC JTC1/SC22/WG14 committee (the international working group for the C language) began updating the C90 standard to reflect newer programming practices and hardware capabilities. The result was ISO/IEC 9899:1999, commonly known as C99, which was officially published in 1999.

## 1.2 Strengths and Weaknesses of C

- Underlying Philosophy:
    - C is a low-level language
    - C is a small language
    - C is a permissive language

- Strengths:
    - Efficiency
    - Portability
    - Power
    - Flexibility
    - Standard Library
    - Integration with UNIX

- Weaknesses:
    - C programs can be error-prone
    - C programs can be difficult to understand
    - C programs can be difficult to modify

- `lint`: A tool traditionally provided in UNIX, and can subject a program to a more extensive error analysis than most C compilers. 
    - `splint`: An enhanced version of `lint` known as `splint` (Secure Programming
Lint) is included in many Linux distributions and can be downloaded for free from
*www.splint.org*.