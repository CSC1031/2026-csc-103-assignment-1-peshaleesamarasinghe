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


    return 0;
}
