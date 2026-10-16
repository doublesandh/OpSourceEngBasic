#include <stdio.h>
int main(void) {
	int x = 0;
	int y = 0;
	char cmd = 0;
	int suc = 0;
	do {
		if (x != 2 || y != 2) {

		printf("방향을 입력하세요 (WASD키로 조작): ");
		scanf("%c", &cmd);
		if (cmd == 'w')
		{
			y += 1;
			printf("현재 위치는 (%d, %d)입니다.\n", x,y);
			suc += 1;
		}
	       	if (cmd == 'a')
                {
                        x -= 1;
                        printf("현재 위치는 (%d, %d)입니다.\n", x,y);
			 suc += 1;
                }
		if (cmd == 's')
                {
                        y -= 1;
                        printf("현재 위치는 (%d, %d)입니다.\n", x,y);
			 suc += 1;
                }
	       	if (cmd == 'd')
                {
                        x += 1;
                        printf("현재 위치는 (%d, %d)입니다.\n", x,y);
			 suc += 1;
                }
		if (cmd == 'q')
		{
			break;
		}
		} 
		else {
			printf("Cannot move!\n");
			break;
		}
		continue; 
		} while (x < 3 || y < 3);
printf("성공적으로 이동한 횟수: %d\n", suc);
	return 0;
}
