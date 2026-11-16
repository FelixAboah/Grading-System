#include <stdio.h>
#define ASSIGNMENT_WEIGHT 0.15
#define QUIZ_WEIGHT 0.10
#define MIDSEM_WEIGHT 0.15
#define FINALEXAM_WEIGHT 0.60

int main() {
    float assignmentScore, quizScore, midsemScore, finalExamScore, totalScore, markslost;
    char indexNumber[11]; // Assuming index number is a string of max 10 characters



    printf("The Grading System\n");
    printf("================================\n");
    printf("                              \n");
    printf("Hello, Welcome To The Grading System!\n");
    printf("                              \n");

    // index number is not used in calculations, just for identification
    printf("Enter your index number: ");
    scanf("%10s", indexNumber);

    printf("Enter assignment score: ");
    scanf("%f", &assignmentScore);
    assignmentScore *= ASSIGNMENT_WEIGHT;

    printf("Enter quiz score: ");
    scanf("%f", &quizScore);
    quizScore *= QUIZ_WEIGHT;

    printf("Enter midsem score: ");
    scanf("%f", &midsemScore);
    midsemScore *= MIDSEM_WEIGHT;

    printf("Enter final exam score: ");
    scanf("%f", &finalExamScore);
    finalExamScore *= FINALEXAM_WEIGHT;

    totalScore = assignmentScore + quizScore + midsemScore + finalExamScore;
    printf("--------------------------------\n");
    printf("Total score: %.2f\n", totalScore);
    printf("--------------------------------\n");
    markslost = 100 - totalScore;
    printf("Marks lost: %.2f\n", markslost);


    printf("                              \n");
    printf("Thank you for using the Grading System!\n");
    printf("Have a great day!\n");
    
    return 0;
}