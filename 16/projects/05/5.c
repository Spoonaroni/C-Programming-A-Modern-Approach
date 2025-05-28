#include <stdio.h>

#define MAX 8

struct flight {
	int depart;
	int arrive;
} flights[MAX] = {
	{480, 616},
	{583, 712},
	{679, 811},
	{767, 900},
	{840, 968},
	{945, 1075},
	{1140, 1280},
	{1305, 1438}
};

void print_times(struct flight t);

int main(void)
{
    int time, hour, min;

    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hour, &min);
    time = hour * 60 + min;

    printf("Closest departure time is ");

	for (int i = 0; i < MAX - 1; i++) {
		if (time <= flights[i].depart + (flights[i + 1].depart - flights[i].depart)) {
			print_times(flights[i]);
			return 0;
		}
	}

    return 0;
}

void print_times(struct flight t)
{
	printf("%d:%.2d %c.m., arriving at %d:%.2d %c.m.\n",
			t.depart / 60 > 12 ? t.depart / 60 - 12 : t.depart / 60,
			t.depart % 60, t.depart > 719 ? 'p' : 'a',
			t.arrive / 60 > 12 ? t.arrive / 60 - 12 : t.arrive / 60,
			t.arrive % 60, t.arrive > 719 ? 'p' : 'a');
}
