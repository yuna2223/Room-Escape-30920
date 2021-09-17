/*
������: �̼���, ������, �̽¹�
������: 2021.09.17.
���� : yunano326@gmail.com
*/ 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void intro();
void room();
void bag();		//1. ����  
void computer();//2. ��ǻ��  
void safebox();	//3. �ݰ� 
void fridge();	//4. ����� 
void trashcan();   //5. �������� 
void closet();	//6. ���� 
void door();	//7. ���Թ� 
void door_password();

int isBrokencom = FALSE;	//��ǻ�� �ļտ��� 
int isFindere = FALSE;	//���찳 ���濩��
int isFind$Key = FALSE;		//& ���� ȹ�� ���� 
int isOpenSafebox = FALSE;		//�ݰ� ���� ���� 

int main() {
	int menu;
	
	while(1) {
		printf("��Ż�� ������ �����ϰڽ��ϱ�?\n\n");
		printf("1. ��!\n");
		printf("0. �ƴϿ�. ���ɾ����.\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				intro();
				room();
				break;
			case 0:
				return 0;
			default:
				printf("0~1 ������ ���ڸ� �Է����ּ���.\n\n");
				break;
		}
	}
	
}

void intro() {
	printf("�������� �����Ⱑ ������ �濡 ������. ���� ���� �ܼ��� ���캻 �� ���� Ż���غ���");
}

void room() {
	int menu;
	
	while(1) {
		system("cls");	
		printf("[��]\n\n");
		printf("�� �ȿ��� �� �� �ִ� �͵��� ã�ƺ���.\n\n");
		printf("1. ����    2. ��ǻ��    3. �ݰ�   4. �����\n");
		printf("5. ��������    6. ����    7. ���Թ�\n");
			
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				bag();					
				break;
			case 2:
				computer();
				break;
			case 3:
				safebox();
				break;
			case 4:
				fridge();
				break;
			case 5:
				trashcan();
				break;
			case 6:
				closet();
				break;
			case 7:
				door();
				break;
			default:
				printf("\n1 ~ 7������ ���� �� �ϳ��� �Է��Ͽ� �ֽʽÿ�.\n");
				system("pause");
		}
	}
} 

void bag(){//1. ����  
	int menu;
	
	while(1) {
		system("cls");
		printf("[��]-[����]\n\n");
		printf("������ ���� ������ �ִ�.\n\n");
		printf("1. ���� ���� ���캻��.\n");
		printf("2. ������ ������.\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
					printf("\n'�̰� ����?'\n");
					printf("��Ʈ����� ���찳�� �ִ�.\n");
				break;
			case 2:
					printf("\n���� �����̾��µ� �ƽ���.\n");
			case 0:
				return;
			default:
				printf("\n0 ~ 1������ ���� �� �ϳ��� �Է��Ͽ� �ֽʽÿ�.\n\n");
				break;
		}
		system("pause");
	}	
}

void computer() {//2. ��ǻ��  
	int menu;
	
	while(1) {
		system("cls");
		printf("[����]-[��ǻ��]\n\n");
		printf("å���� ���ƺ��̴� ��ǻ�Ͱ� �������ִ�.\n\n");
		printf("1. ��ǻ���� ������ �Ҵ�.\n");
		printf("2. ��ǻ�͸� ���캻��.\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isBrokencom)  {
					printf("\n��ǻ�ʹ� �̹� �μ�����.\n\n");
				} else {
					printf("\n��ǻ�� �޸��忡 ����� �����ִ�.\n");
					printf("I'm a loser...\n\n");	
				}
				system("pause");
				break;
			case 2:
				if(isBrokencom) {
					printf("\n��ǻ�ʹ� �̹� �μ�����.\n\n");
				} else {
					system("cls");
					printf("[����]-[��ǻ��]-[��ǻ��]\n\n");
					printf("\n��ǻ�͸� ���Ǵ� �� ���ڱ� ȭ�� ġ�о� ������.\n\n");
					printf("1. ��ǻ�͸� �μ���.\n");
					printf("2. ��ǻ�͸� ������ �д�.\n");
					printf(">> ");
					scanf("%d", &menu);
					
					switch(menu) {
						case 1:
							isBrokencom = TRUE;	//��ǻ�� �μ��� 
							printf("\n��ǻ�Ͱ� �μ������ȴ�. \n\n");
							printf("1. ���ظ� ������.\n");
							printf("2. ������ �д�.\n");
							printf(">> ");
							scanf("%d", &menu);
							
							switch(menu) {
								case 1: 
									printf("\n�ڼ��� ���캸��...\n");
									printf("�����ΰ� �ִ�!\n");
									printf("$����� ���踦 �߰��Ͽ���.\n\n");
									isFind$Key = TRUE;
									break;
								case 2:
									printf("\n���� �����ٰ� ��ĥ �� ����.\n\n");
									break;
							default:
								printf("\n�̹� �μ��� �� �׳� ����.\n\n");
								break;
							}
							break;
						case 2:
							printf("\n�ƴϾ� �׷��ٰ� ���� ������ �μŹ��� �� ����...\n\n");
							break;
						default:
							printf("\n������ ������ ȭ�� �Ĵ� �� ����. ���ư���.\n\n");
							break;
					}	
				}
				system("pause");
				break;		
			case 0:
				return;
			default:
				printf("0 ~ 2������ ���� �� �ϳ��� �Է��Ͽ� �ֽʽÿ�.\n\n");
				system("pause");
		}
	}
}

void safebox(){//3. �ݰ�
	int menu;
	
	while(1) {
		system("cls");
		printf("[����]-[�ݰ�]\n\n");
		printf("��û �ܴ��غ��̴� �ݰ��.\n\n");
		printf("1. �ݰ� ����\n");
		printf("2. �ݰ� ���캻��.\n");
		printf("3. �ݰ� �μ���.\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isOpenSafebox) {
					printf("\n�ݰ�� �̹� ��� �ƹ��͵� ����.\n\n");
					break; 
				}
				if(isFind$Key) {
					isOpenSafebox = TRUE;	//�ݰ� ������ 	
					printf("�ݰ� �ȿ��� 2���� ����� �����ִ� ������ �ִ�.\n\n");
					printf("���ƺ��̳�... Ŀ���ΰǰ�? �η���...\n\n");					
				} else {
					printf("\n�ݰ� ���� ���� �ʿ��� ���踦 ���� ���� ���� �� ����.\n\n");
				}
				break;
			case 2:
				printf("�ݰ� �� ����� $����� �������ִ�.\n\n");
				break;
			case 3:
				printf("�� �ܴ��� �� �Ǽ����� �νôٰ� ���� ���ϰھ�. �׸�����.\n\n");
				break; 
			case 0:
				return;
			default:
				printf("\n0 ~ 3������ ���� �� �ϳ��� �Է��Ͽ� �ֽʽÿ�.\n\n");
				break;
		}
		system("pause");
		
	}
}

void fridge(){//4. �����
	int menu;
	
	while(1) {
		system("cls");
		printf("[����]-[�����]\n\n");
		printf("�� ���� ���ƺ��̴� ����� �ϳ��� �ִ�. �����?\n");
		printf("����� ����� ���� ��ǰ�� �ִ�.\n\n");
		printf("1. ������� ���캻��\n");
		printf("2. ���ڸ� ���캻��\n");
		printf("3. ���̽�ũ���� ���캻��\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n��������� 2019�� 3�� 4�ϱ����̴�.\n");
				printf("\n���� �� ������ ���� ����??\n\n");
				break;
			case 2:
				printf("\n��!... ������ ���̷�?\n\n");
				break;
			case 3:
				printf("\n�̰� �� �����ƺ��̳�.\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n0 ~ 3������ ���� �� �ϳ��� �Է��Ͽ� �ֽʽÿ�.\n\n");
				break;
		}
		system("pause");
	}
}

void trashcan(){//5. ��������  
	int menu;
	
	while(1) {
		system("cls");
		printf("[����]-[��������]\n\n");
		printf("�����Ⱑ ���� ���� ���������� �ִ�.\n");
		printf("1. ���������� ���캻��\n");
		printf("2. ���������� �߷� ����.\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n�������뿡 ������ ���ִ� ������ ���̰� �ִ�.\n");
				printf("\nI'm freak. My life is a failed life!��� �����ִ�.\n\n");
				break;
			case 2:
				printf("\n�ȿ� �ִ� �������� ���� ���� ����������.\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n0 ~ 2������ ���� �� �ϳ��� �Է��Ͽ� �ֽʽÿ�.\n\n");
				break;
		}
		system("pause");
	}
}

void closet(){//6. ����
	int menu;
	
	while(1) {
		system("cls");
		printf("[����]-[����]\n\n");
		printf("�� ������ ���� ä�� ������ ū �����̴�.\n\n");
		printf("1. ������ ���캻��.\n");
		printf("2. ������ ���캻��.\n");
		printf("3. û������ ���캻��.\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n�� ���̵� �׷��� �����Ͱ� �پ��ִ�.");
				printf("1, 2, 3, ... 5�� ������?");
				break;
			case 2:
				printf("\n�ָӴϿ� �޸� �ϳ��� �ִ�.\n\n");
				printf("\n�Բ��̱⿡ ������ �ִ�. ��� �����ִ�.\n");
				break;
			case 3:
				printf("\n�̻ڴ�. �� ��Ÿ���ε�?\n\n");
				break; 
			case 0:
				return;
			default:
				printf("\n0 ~ 3������ ���� �� �ϳ��� �Է��Ͽ� �ֽʽÿ�.\n\n");
				break;
		}
		system("pause");
	}	
}	

void door(){//7. ���Թ� 
	int menu;
	
	while(1) {
		system("cls");
		printf("[����]-[���Թ�]\n\n");
		printf("�� ���� ���� ���� Ż�� �� �� ���� �� ����.\n");
		
		printf("1. ���� ���캻��\n");
		printf("2. ��й�ȣ�� �Է��Ѵ�\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n'�� ���� ���� �ʾ����� ��'\n\n");
				printf("��? ���� ��¥�� ���ϴ� �ǰ�?\n");				
				break;
			case 2:
				door_password();
				break;
			case 0:
				return;
			default:
				printf("\n0 ~ 3������ ���� �� �ϳ��� �Է��Ͽ� �ֽʽÿ�.\n\n");
				break;
		}
		system("pause");
	}	
}	

void door_password() {
	char pass[10] = "210817", temp[5];
	
	system("cls");
	printf("\n\n      [ PASSWORD ]\n\n");
	printf(">> ");
	scanf("%s", &temp);
	
	if(!strcmp(pass, temp)) {
		system("cls");
		printf("\n\n���� �� �濡�� Ż���Ͽ���.\n\n");
		printf("���� ������ ���� ������??\n");
		printf("�� �� �� �濡 ���ֵ� ����?\n");
		printf("ROOM ESCAPE THE END \n\n");
		system("pause");
		exit(0);
	} else {
		printf("\n\n���� �������� �ʴ´�. �ٽ� �����غ���.\n\n");
		return;	
	}
}
	
	
	
	
