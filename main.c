#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <time.h>
#include "screen.h"
#include "sound.h"
             // for user-defined header, use double quotes

int main(){
        FILE *f;
	short sd[RATE]; // for all samples in one second
	while(1){
		int ret = system(CMD);
		if(ret == SIGINT) break;
        	f = fopen("test.wav", "r");
/*
        int arr[80];            // just for making a bar chart
        srand(time(NULL));      // randomize the rand function
        for(int i=0; i<80; i++)
                arr[i] = rand()%70 + 30;
*/
        	clearScreen();
        	setColors(YELLOW, bg(BLUE));
//      printf("Printed from main.\n");
//      barChart(arr);
        	if (f == NULL){
                	printf("Cannot open the wav file\n");
                	return 1;
        }
        	struct WAVHDR h;        //instance of wav header
        	fread(&h, sizeof(h), 1, f);     //read wav header to h
        	displayWAVHDR(h);       //show wav header information
		fread(&sd, sizeof(sd), 1, f);
		displayWAVDATA(sd);
		fclose(f);	//close the opened file
	}
        resetColors();
        //printf("Another message\n");
        getchar();
}


