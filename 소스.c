#include <stdio.h>

int main() {
	
	long long money, janmoney;
	long long gukbab = 0, bab;
	while (1) {
		printf("���� �Է� (���� �Է½� ����): ");
		scanf("%lld", &money);

		if (money < 0) {
			printf("�����մϴ�.");
			break;
		}

		printf("���� ���� �Է�(0 �Է½� ������ �ִ� ���� ����): ");
		scanf("%lld", &bab);

		if (bab != 0)
			gukbab = bab;
		
		if (bab == 0) {
			printf("���� ���� ����\n");

			printf("1.7500��(������������)\n2.5000��(��������)\n3.8000��(�ҸӸ�����)\n4.6000��(��ⱹ��)\n");
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
			printf("�װ� ��ٿ� �߲�~�� ���� %lld�׸� ���~�ϰ� ���� ����.\n", money / gukbab);
		}

		else {
			printf("�װ� ��ٿ� %lld�� �� ���¼� �߲�~�ϰ� ���~�� ���� %lld�׸� ���� ����.\n", gukbab - janmoney, money / gukbab + 1);
		}

	}

	return 0;
}

