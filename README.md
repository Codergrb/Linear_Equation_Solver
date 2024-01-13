# Equation Solver

**Solves systems of two linear equations in the form ax + by = c.**

## How It Works

1. **User Input:** The program prompts the user to enter the coefficients (a, b) and constants (c) for each equation.
2. **Determinant Calculation:** It calculates the determinant of the coefficient matrix to check for unique solutions.
3. **Adjoint Matrix Calculation:** If a unique solution exists, it calculates the adjoint matrix, which is crucial for finding the inverse of the coefficient matrix.
4. **Inverse Matrix Calculation:** It multiplies the adjoint matrix by the inverse of the determinant to obtain the inverse matrix.
5. **Solution Calculation:** It multiplies the inverse matrix by the constants matrix to obtain the values of x and y.
6. **Output:** It prints the calculated values of x and y, or a message if no unique solution exists.

## Usage

```
1. Compile the code using a C compiler (e.g., `gcc linear_equation_solver.c -o equation_solver`).
2. Run the executable: `./equation_solver`

```

## Example
The Equations are:
 2x - y = -1 ,
 3x + 2y = 9 
#### Output:
```---- Linear Equation Solver ---- 
Enter coefficients for two equations (ax + by = c) 

Enter a1: 2
Enter b1: -1
Enter c1: -1

Enter a2: 3
Enter b2: 2
Enter c2: 9

X = 1.00       Y = 3.00

[Process completed - press Enter]
```

## Method

- Uses Gaussian elimination, a common method for solving linear equations.
- Wikipedia: [Gauss Elimination Method](https://en.m.wikipedia.org/wiki/Gaussian_elimination)

## Author
 by [@Codergrb](https://github.com/codergrb).
 I'm beginner to Programming. If you like my this code please give me a star ☆ . It really boost my  confidence to do more projects. : ) 
HAVE A GREAT TIME 😉

## License
 This code is released under the MIT License. <br> 
Feel free to use and modify this code for your use
