#include <stdio.h>

int main(void)
{
    int time, hour, min, depHour, arrHour, depMin, arrMin,
		departT[8] = {480, 583, 679, 767, 840, 1140, 1305},
		arriveT[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
	char depAP = 'a', arrAP = 'a';

    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hour, &min);
    time = hour * 60 + min;

    printf("Closest departure time is ");

	for (int i = 0; i < 8; i++)
	{
		if (i == 7)
		{
			printf("9:45 p.m., arriving at 11:58 p.m.");
			break;
		}
	    if (time <= departT[i] + (departT[i + 1] - departT[i]) / 2)
		{
			depHour = departT[i] / 60;
			if (depHour > 12)
				depHour -= 12;
			if ((departT[i] / 60) > 11)
				depAP = 'p';
			depMin = departT[i] % 60;
			arrHour = arriveT[i] / 60;
			if (arrHour > 12)
				arrHour -= 12;
			if ((arriveT[i] / 60) > 11)
				arrAP = 'p';
			arrMin = arriveT[i] % 60;

		    printf("%d:%.2d %c.m., arriving at %d:%.2d %c.m.\n", depHour, depMin, depAP, arrHour, arrMin, arrAP);
			break;
		}
	}

    return 0;
}
