#include<stdio.h>
#include<time.h>
#include<unistd.h>

int main(){
	int i = 0;
	char cmd1[] = "echo \"600000000\" > /sys/devices/platform/11800000.mali/devfreq/devfreq0/max_freq";
	char cmd2[] = "echo \"177000000\" > /sys/devices/platform/11800000.mali/devfreq/devfreq0/max_freq";
	
	while(1){
		sleep(1);
		if(i % 2 == 0){
			system(cmd1);
			system("cat /sys/devices/platform/11800000.mali/devfreq/devfreq0/cur_freq");
		}else{
			system(cmd2);
			system("cat /sys/devices/platform/11800000.mali/devfreq/devfreq0/cur_freq");
		}
	i++;
	}





}
