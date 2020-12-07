/* In a town, the percentage of men is 52. The percentage of
total literacy is 48. If total percentage of literate men is 35 of
the total population, write a program to find the total number of
illiterate men and women if the population of the town is
80,000.
Author Majid Mujahid Hussain dated 7 December 2020  */
#include <stdio.h>
#include <stdlib.h>
int main()
{float men = 0, women = 0,total_literacy = 0, literate_men = 0, literate_women = 0, illiterate_men = 0, illiterate_women = 0, total_population = 0;
    printf("Hello world!\n");

    //calculating the number of men given the percentage is 52 out of 80,000 population of the town.
    men = (52 * 80000) / 100;
    printf(" The number of men out of 80,000 population are = %.2f \n", men);

    //calculating the number of women.
    women = 80000 - men;
    printf(" The number of women out of the 80,000 population are = %.2f \n", women);

    total_population = men + women;
    printf(" The total population of the town is %.1f\n", total_population);
    //calculating the number of literates in the town given their is 48 percent out of 80,000.
    total_literacy = (48 * 80000) / 100;
    printf("\n The number of literates in the town out of 80,000 are %.2f\n", total_literacy);

    //calculating the number of literate men given that 35 percent of men are literate out total population
    literate_men = (35 * 80000) / 100;
    printf(" The number of literate men in the town of 80,000 are %.1f\n", literate_men);

    //calculating the number of literate women.
    literate_women = total_literacy - literate_men;
    printf(" The number of literate women in the town of 80,000 are %.1f\n", literate_women);

    // calculating the number of illiterate men.
    illiterate_men = men - literate_men;
    printf("\n The number of illiterate men out of 80,000 are %.1f", illiterate_men);

    // calculating the number of illiterate women.
    illiterate_women = women - literate_women;
    printf("\n The number of illiterate women out of 80,000 are %.1f", illiterate_women);
    return 0;
}
