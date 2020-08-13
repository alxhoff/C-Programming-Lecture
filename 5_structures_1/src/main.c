#include <stdio.h>

enum am_pm_e { AM, PM };

struct time_info {
	char hours;
	char minutes;
	char seconds;
	enum am_pm_e time_of_day;
};

struct time_info european_time = { .hours = 12,
				   .minutes = 16,
				   .seconds = 40,
				   .time_of_day = PM };

void increment_hours(void)
{
    char prev_hours = european_time.hours;
	european_time.hours %= 12;
    european_time.hours++;

    if(prev_hours > european_time.hours)
        european_time.time_of_day = !european_time.time_of_day;
}

void increment_mins(void)
{
    european_time.minutes %= 59;
	european_time.minutes++;
}

void increment_seconds(void)
{
    european_time.seconds %= 59;
	european_time.seconds++;
}

void print_time(void)
{
	printf("%d:%d:%d", (int)european_time.hours,
	       (int)european_time.minutes, (int)european_time.seconds);

    if(european_time.time_of_day == AM)
        printf("AM\n");
    else 
        printf("PM\n");
}

int main()
{
    print_time();
    increment_hours();
    increment_mins();
    print_time();
}
