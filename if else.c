#include <stdio.h>

int main(){
	
	float x;
	scanf("%f", &x);
	 
	if(x > 4){
		printf("Error");
	}else if(x >= 3.5){
		printf("Cumlaude");
	}else if (x >= 3.0){
		printf("Outstanding");
	}else if (x >= 2.5){
		printf("Very Good");
	}else if(x >= 2.0){
		printf("Good");
	}else{
		printf("Poor");
	}
}
