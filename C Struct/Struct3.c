#include <stdio.h>
#include <string.h>

struct date {
    int day;
    int month;
    int year;
};

int main() {
    struct date birth;
    struct date now;

    printf("Enter your date of birth: Day/Month/Year\n");
    scanf("%d %d %d", &birth.day, &birth.month, &birth.year);

    printf("Enter today's date: Day/Month/Year\n");
    scanf("%d %d %d", &now.day, &now.month, &now.year);
//We must do these if conditions due to dates. For example birth date: 28.05.2022 and now date: 21.03.2025 as you can see in here we cant substract 21-28 and 03-05 so we must do these conditions.
    if (birth.day > now.day) {
        now.month--;
        now.day += 30; // Assuming each month has 30 days
    }

    if (birth.month > now.month) { 
        now.year--;
        now.month += 12; // 12 months in a year
    }

    printf("You have lived %d year(s), %d month(s), %d day(s) until now.\n", now.year - birth.year, now.month - birth.month, now.day - birth.day);

    return 0;
}
