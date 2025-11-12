#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
int main()
{
	unsigned char LED_8=0;//保存LED的状态
	unsigned char switchLED=128;//打开最左边灯的开关信号
	
	sleep(2);//延迟2秒
	
	while(1){
		system("cls");
		switch (LED_8 | switchLED) {
			case (unsigned char)128:printf_s("\n●○○○○○○○");break;
			case (unsigned char)64:printf_s("\n○●○○○○○○");break;
			case (unsigned char)32:printf_s("\n○○●○○○○○");break;
			case (unsigned char)16:printf_s("\n○○○●○○○○");break;
			case (unsigned char)8:printf_s("\n○○○○●○○○");break;
			case (unsigned char)4:printf_s("\n○○○○○●○○");break;
			case (unsigned char)2:printf_s("\n○○○○○○●○");break;
			case (unsigned char)1:printf_s("\n○○○○○○○●");break;
			case (unsigned char)0:printf_s("\n○○○○○○○○");break;
		}
		sleep(1);
		if(switchLED==(unsigned char)0)
			switchLED=(unsigned char)128;
		else
			switchLED=switchLED>>1;
		
		if(_kbhit()==0)
			continue;
		else
			break;
	}
	return 0;
}
//_kbhit()函数用于检测是否有按键被按下，如果有则返回非零值。（conio.h）
