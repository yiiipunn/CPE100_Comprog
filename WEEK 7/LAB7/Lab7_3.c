//67070503437 Phurithip Paisanworajit
#include<stdio.h>

float UserInput(int n, float grades[]) {
    for (int i = 0; i < n; i++) {
        scanf("%f", &grades[i]);
    }
    return 0;
}

float CalculateAverage(int n, float grades[]) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += grades[i];
    }
    return sum / n;
}

void DisplayAverageAndGradeClassification(float average) {
    printf("%.2f\n", average);
    
    if (average >= 90) {printf("A");}
    else if (average >= 80){printf("B");}
    else if (average >= 70) {printf("C");}
    else if (average >= 60) {printf("D");}
    else {printf ("F");}
}

int main() {
    int n;
    scanf("%d", &n);

    float grades[n]; 

    UserInput(n, grades);
    float average = CalculateAverage(n, grades);
    DisplayAverageAndGradeClassification(average);

    return 0;
}