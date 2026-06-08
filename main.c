#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sub1=0;
    int sub2=0;
    int sub3=0;
    float totalMarks=0.0;
    float averageMarks=0.0;

    printf("Enter your marks for Mathematics: ");
    scanf("%d", &sub1);
    printf("Enter your marks for Science: ");
    scanf("%d", &sub2);
    printf("Enter your marks for English: ");
    scanf("%d", &sub3);

    totalMarks=sub1+sub2+sub3;
    averageMarks=totalMarks/3.0;

    printf("Total: %f \n",totalMarks);
    printf("Average: %f \n",averageMarks);

    if (averageMarks>80){
        printf("Grade: A\n");
    }
    else if (averageMarks>70){
        printf("Grade: B\n");
    }
    else if (averageMarks>60){
        printf("Grade: C\n");
    }
    else if (averageMarks>50){
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F\n");
    }

    if (sub1>=40 && sub2>=40 && sub3>=40){
        printf("Result: PASS\n");
    }
    else {
        printf("Result: FAIL\n");

    }

    if (sub1 >= sub2 && sub1 >= sub3)
    {
        printf("Highest Subject: Mathematics (%d)\n", sub1);
    }
    else if (sub2 >= sub1 && sub2 >= sub3)
    {
        printf("Highest Subject: Science (%d)\n", sub2);
}
    else
    {
        printf("Highest Subject: English (%d)\n", sub3);
    }


    return 0;
}
