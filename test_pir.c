
#include <stdio.h>
#include <wiringPi.h>
#include <stdlib.h>

const int pirpin = 6;
int pir_v = 0,old = 0;
static void img(void);

int main(void)
{
wiringPiSetup();
pinMode(pirpin, INPUT);
while(1){
	pir_v = digitalRead(pirpin);
	if(pir_v != old){
		printf("MOtin detected %d\n",pir_v);
		old = pir_v;
	}
	printf("sensor%d\n",pir_v);
	delay(100);
	img();
	return 0;
}

return 0;
}
void img(){
	system("raspivid -o motion_video.mp4 -t 2000");
}

	
