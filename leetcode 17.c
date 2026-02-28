
#include <math.h>

double area(int* A, int* B, int* C) {
    return 0.5 * fabs(A[0]*(B[1]-C[1]) + B[0]*(C[1]-A[1]) + C[0]*(A[1]-B[1]));
}

double largestTriangleArea(int** points, int pointsSize, int* pointsColSize) {
    double maxArea = 0.0;
    for (int i = 0; i < pointsSize; ++i) {
        for (int j = i + 1; j < pointsSize; ++j) {
            for (int k = j + 1; k < pointsSize; ++k) {
                double a = area(points[i], points[j], points[k]);
                if (a > maxArea) {
                    maxArea = a;
                }
            }
        }
    }
    return maxArea;
}

