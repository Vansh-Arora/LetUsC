/* In a town, the percentage of men is 52. The percentage of total literacy is 48. 
If total percentage of literate men is 35 of the total population, 
write a program to find the total number of illiterate men and women if the population of the town is 80,000.*/

#include<stdio.h>
int main()
{
    float total_population = 80000;
    float men = .52 * 80000;
    float women = total_population - men;
    float literate_population = .48 * 80000;
    float literate_men = .35 * 80000;
    float literate_women = literate_population - literate_men;
    float illiterate_men = men - literate_men;
    float illiterate_women = women - literate_women;
    printf("Number of illiterate men: %f\nNumber of illiterate women: %f",illiterate_men,illiterate_women);
    return 0;
}