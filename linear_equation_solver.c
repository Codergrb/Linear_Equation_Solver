#include <stdio.h>

// Gaussian elimination - Method
void solve_equations(int eq1[2][2], int c[2][1]) {
    float det = (eq1[0][0] * eq1[1][1]) - (eq1[0][1] * eq1[1][0]);

    if (det == 0) {
        printf("msg: System has no unique solution.\n");
        return;
    }

    //  adjoint matrix
    int adj[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            adj[i][j] = pow(-1, i + j) * eq1[(1 - i)][(1 - j)];
        }
    }

    // Finding inverse matrix
    float arcA[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            arcA[i][j] = adj[i][j] / det;
        }
    }

    // Calculate x and y
    float x = 0, y = 0;
    for (int i = 0; i < 2; i++) {
        x += arcA[i][0] * c[i][0];
        y += arcA[i][1] * c[i][0];
    }

    printf("X = %.2f \t Y = %.2f\n", x, y);
}

int main() {
    int eq1[2][2], c[2][1];
    printf("---- Linear Equation Solver ---- \n\n\n");
    printf("Enter coefficients for two equations (ax + by = c)\n\n");

    // input for coefficients and constants
    for (int i = 0; i < 2; i++) {
        printf("Enter a%d: ",i+1);
        scanf("%d", &eq1[i][0]);
        printf("Enter b%d: ",i+1);
        scanf("%d",&eq1[i][1]);
        printf("Enter c%d: ",i+1);
        scanf("%d",&c[i][0]);

        printf("\n");
    }

    solve_equations(eq1, c);
    printf("\n\n\n\nBy -- Github: CoderGrb");
    return 0;

}
