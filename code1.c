#include <stdio.h>

int main()
{
	int score, td, fg, safe, td1, td2, act_td, act_fg, act_safe, act_td1, act_td2;
	score = 19;
	while(score > 1)
	{
		printf("Please enter an NFL score: ");
		scanf("%d", &score);
		printf("\n"); //takes the score
		if(score > 1)
		{
			for(td2 = 0; td2 <= score; td2 += 8)
			{
				for(td1 = 0; td1 <= score; td1 += 7)
				{
					for(td = 0; td <= score; td += 6)
					{
						for(fg = 0; fg <= score; fg +=3)
						{
							for(safe = 0; safe <= score; safe+=2)
							{
								if(td2+td1+td+fg+safe == score)
								{ // the above loops go to the max of each score and then iterates through all lower score options
									act_td2 = td2/8;
									act_td1 = td1/7;
									act_td = td/6;
									act_fg = fg/3;
									act_safe = safe/2;
									printf("%d TD + 2pt, %d TD +1pt, %d TD, %d FG, %d Safety\n", act_td2,act_td1,act_td, act_fg,act_safe);
								}//converts all the point totals to the amount of them and then prints it
							}
						}
					}

				}
			}
		}
	}

}
