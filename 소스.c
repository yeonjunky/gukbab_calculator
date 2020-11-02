#include <stdio.h>

int main() {
	
	long long money, janmoney;
	long long gukbab = 0, bab;
	while (1) {
		printf("가격 입력 (음수 입력시 종료): ");
		scanf("%lld", &money);

		if (money < 0) {
			printf("종료합니다.");
			break;
		}

		printf("국밥 가격 입력(0 입력시 정해져 있는 가격 선택): ");
		scanf("%lld", &bab);

		if (bab != 0)
			gukbab = bab;
		
		if (bab == 0) {
			printf("국밥 가격 선택\n");

			printf("1.7500원(수영돼지국밥)\n2.5000원(돼지국밥)\n3.8000원(소머리국밥)\n4.6000원(백년국밥)\n");
			scanf("%lld", &bab);

			if (bab == 1)
				gukbab = 7500;

			else if (bab == 2)
				gukbab = 5000;

			else if (bab == 3)
				gukbab = 8000;

			else if (bab == 4)
				gukbab = 6000;
		}

		janmoney = money % gukbab;

		if (money % gukbab == 0) {
			printf("그거 살바엔 뜨끈~한 국밥 %lld그릇 든든~하게 묵고 만다.\n", money / gukbab);
		}

		else {
			printf("그거 살바엔 %lld원 더 보태서 뜨끈~하고 든든~한 국밥 %lld그릇 묵고 만다.\n", gukbab - janmoney, money / gukbab + 1);
		}

	}

	return 0;
}

