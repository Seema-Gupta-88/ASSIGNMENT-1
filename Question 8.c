//WAP in C that takes as minutes as input,and display the total numbers of hours and minutes in(HH:MM)formate.
#include<stdio.h>
int main (){
	
	int minutes;
	printf("Enter total number of minutes:");
	scanf("%d",&minutes);
	
	int hours,remaining_minutes;
	hours=minutes / 60;
	remaining_minutes=minutes % 60;
	
	printf("Total time:%d:%d\n",hours,remaining_minutes);
	
	
	return 0;
}
