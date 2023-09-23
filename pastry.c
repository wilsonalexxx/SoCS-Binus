#include <stdio.h>

//void pilih(){
//		printf("1. Makanan");
//		printf("2. Minuman");
//		printf(">> ");
//		scanf("%d", &choose);
//}

//void makanan(){
//	printf("1. Croissant almond (25000)");
//	printf("2. Smoke beef croissant (27500)");
//	printf("3. Croffle (27000)");
//	printf("4. Apple puff (22000)");
//	printf("5. Pie apple (25000)");
//}

//void minuman(){
//	printf("1. Espresso (18000)");
//	printf("2. Café latte (25000) ");
//	printf("3. Cappuccino (25000)");
//	
//}

int main(){
	
	int sum = 0;
	
	while(1){
		int choose;
		printf("1. Makanan\n");
		printf("2. Minuman\n");
		printf("3. Total harga\n");
		printf(">> ");
		scanf("%d", &choose);
		system("cls");
		
		int pilih;
		switch(choose){
			case 1:
				printf("1. Croissant almond Rp 25.000\n");
				printf("2. Smoke beef croissant Rp 27.500\n");
				printf("3. Croffle Rp 27.000\n");
				printf("4. Apple puff Rp 22.000\n");
				printf("5. Pie apple Rp 25.000\n");
				printf(">> ");
				scanf("%d", &pilih);
				system("cls");
				
				switch(pilih){
					case 1:
						sum = sum + 25000;
						break;
					case 2:
						sum = sum + 27500;
						break;
					case 3:
						sum = sum + 27000;
						break;
					case 4:
						sum = sum + 22000;
						break;
					case 5:
						sum = sum + 25000;
						break;
					default:
						break;
				}
					break;
					case 2:

						printf("1. Espresso Rp 18.000\n");
						printf("2. Cafe latte Rp 25.000\n");
						printf("3. Cappuccino Rp 25.000\n");
						printf(">> ");
						scanf("%d", &pilih);
						system("cls");
				
						switch(pilih){
							case 1:
								sum = sum + 18000;
								break;
							case 2:
								sum = sum + 25000;
								break;
							case 3:
								sum = sum + 25000;
								break;
							default:
								break;
						}
					break;
					case 3:
						break;

		}
		if(choose == 3){
			break;
		}
	}
	printf("Total yang harus dibayar: %d\n", sum);
	return 0;
}
