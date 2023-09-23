#include <stdio.h>

int main(){
	long int d, s, t;
	scanf("%ld %ld %ld", &d, &s, &t);
	
	if(d > s && d > t){
		printf("Daging\n");
	}else if (s > d && s > t){
		printf("Sayur\n");
	}else if(t > d && t > s){
		printf("Telur\n");
	}
	
	if(d > t && d < s){
		printf("Daging\n");
	}else if(d > s && d < t){
		printf("Daging\n");
	}else if(s > d && s < t){
		printf("Sayur\n");
	}else if(s > t && s < d){
		printf("Sayur\n");
	}else if(t > d && t < s){
		printf("Telur\n");
	}else if(t > s && t < d){
		printf("Telur\n");
	}

	
	if(d < s && d < t){
		printf("Daging\n");
	}else if(s < d && s < t){
		printf("Sayur\n");
	}else if(t < d && t < s){
		printf("Telur\n");
	}
	return 0;
}
