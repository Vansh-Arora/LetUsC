/*If the marks obtained by a student in five different subjects are input through the keyboard,
 find out the aggregate marks and percentage marks obtained by the student.
  Assume that the maximum marks that can be obtained by a student in each subject is 100. */


#include<stdio.h>
int main()
{
    float mark_list[5];
    int i;
    float aggregate = 0;
    printf("Enter marks out of 100 for 5 subjects: ");
    for(i=0;i<5;i++)
    {
        scanf("%f",&mark_list[i]);
        aggregate += mark_list[i];
    }
    printf("Aggreagate marks: %.2f\n",aggregate);
    printf("Percentage Marks: %.2f\n",aggregate/5);
    return 0;
}