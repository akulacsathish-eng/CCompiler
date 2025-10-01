
//Ask the user to enter HW grade , Quiz grade & Exam Grade, pass these values to gradeCalc which should calculate the total grade
//and classify it into A- 90 to 100 B-80 - 89 c - 70 to 79 D- 60 to 69 E- 50 to 59 F < 50 
#include<stdio.h>

int gradeCalc(int hw,int quiz,int exam)
{

  return (25*hw + 25*quiz + 50*exam)/100;
}

int main()
{

    int hw, quiz, exam;

    printf("Enter Homework Grade");
    scanf("%d",&hw);

    printf("Enter Quiz Grade");
    scanf("%d",&quiz);

    printf("Enter exam Grade");
    scanf("%d",&exam);

    int result = gradeCalc(hw,quiz,exam);
    
    if(result>89 && result <101)
    {
        printf("A");
    }
    else if(result>79 && result <90)
    {
        printf("B");
    }
    else if(result>69 && result <80)
    {
        printf("C");
    }
    else if(result>59 && result <70)
    {
        printf("D");
    }
    else if(result>49 && result <60)
    {
        printf("E");
    }
    else if(result<50)
    {
        printf("F");
    }
    else
        printf("Invalid");


}