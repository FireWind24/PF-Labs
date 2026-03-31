#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>

int calculate_Easter_date(int year);
int is_sunday(int month, int day, int year);
int main(void) {

  int year, calc_date, month, day;

  while (scanf("%d", & year) != EOF) {

    calc_date = calculate_Easter_date(year);

    if (calc_date == 0) {
      fprintf(stderr, "%d - Given year is Out of Range\n", year);
      continue;
    } else if (calc_date > 0) {
      month = 4;
      day = abs(calc_date);
      printf("%d - April %d\n", year, calc_date);
    } else if (calc_date < 0) {
      month = 3;
      day = abs(calc_date);
      printf("%d - March %d\n", year, abs(calc_date));
    }

  assert (is_sunday(month, day, year));
  }
  return 0;
}

int calculate_Easter_date(int year) {

  int day, epact, golden, century, leap_years, correction, full_moon;

  if (year > 39999 || year < 1582) {
    return 0;
  }
  golden = (year % 19) + 1;
  century = (year / 100) + 1;
  leap_years = (3 * century / 4) - 12;
  correction = ((8 * century + 5) / 25) - 5;
  day = (5 * year / 4) - leap_years - 10;
  epact = (11 * golden + 20 + correction - leap_years) % 30;

  if (epact < 0) epact += 30;
  if ((epact == 25 && golden > 11) || epact == 24) epact++;

  full_moon = 44 - epact;

  if (full_moon < 21) full_moon += 30;

  full_moon = (full_moon + 7) - ((day + full_moon) % 7);
  day = (full_moon > 31) ? full_moon - 31 : -full_moon;

  return day;

}

int is_sunday(int month, int day, int year) {
    // Zeller's Congruence for Bonus Marks
    int h;
    h = (day + (13 * (month + 1)) / 5 + year + (year / 4) - (year / 100) + (year / 400)) % 7;
    
    
    return (h == 1);
}
