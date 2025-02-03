#include <stdio.h>


int		d1 = 480,
        d2 = 583,
        d3 = 679,
        d4 = 767,
        d5 = 840,
        d6 = 945,
        d7 = 1140,
        d8 = 1305;

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
	int time, hour, min, departT, arriveT;

	printf("Enter a 24-hour time: ");
	scanf("%d : %d", &hour, &min);
	time = hour * 60 + min;

	find_closest_flight(time, &departT, &arriveT);
	min = departT % 60;
	hour = (departT - min) / 60;
	
	printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d\n",
           departT / 60, departT % 60,
           arriveT / 60, arriveT % 60);

	return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    if (desired_time <= d1 + (d2 - d1) / 2) {
		*departure_time = 480;
		*arrival_time = 616;
	}
    else if (desired_time < d2 + (d3 - d2) / 2) {
		*departure_time = 583;
		*arrival_time = 712;
	}
    else if (desired_time < d3 + (d4 - d3) / 2) {
		*departure_time = 679;
		*arrival_time = 811;
	}
    else if (desired_time < d4 + (d5 - d4) / 2) {
		*departure_time = 767;
		*arrival_time = 900;
	}
    else if (desired_time < d5 + (d6 - d5) / 2) {
		*departure_time = 840;
		*arrival_time = 968;
	}
    else if (desired_time < d6 + (d7 - d6) / 2) {
		*departure_time = 945;
		*arrival_time = 1075;
	}
    else if (desired_time < d7 + (d8 - d7) / 2) {
		*departure_time = 1140;
		*arrival_time = 1260;
	}
    else {
		*departure_time = 1305;
		*arrival_time = 1438;
	}
}
