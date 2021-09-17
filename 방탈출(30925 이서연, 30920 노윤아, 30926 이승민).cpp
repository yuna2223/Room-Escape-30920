/*
개발자: 이서연, 노윤아, 이승민
개발일: 2021.09.17.
문의 : yunano326@gmail.com
*/ 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void intro();
void room();
void bag();		//1. 가방  
void computer();//2. 컴퓨터  
void safebox();	//3. 금고 
void fridge();	//4. 냉장고 
void trashcan();   //5. 쓰레기통 
void closet();	//6. 옷장 
void door();	//7. 출입문 
void door_password();

int isBrokencom = FALSE;	//컴퓨터 파손여부 
int isFindere = FALSE;	//지우개 습득여부
int isFind$Key = FALSE;		//& 열쇠 획득 여부 
int isOpenSafebox = FALSE;		//금고 오픈 여부 

int main() {
	int menu;
	
	while(1) {
		printf("방탈출 게임을 시작하겠습니까?\n\n");
		printf("1. 네!\n");
		printf("0. 아니요. 관심없어요.\n");
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
				printf("0~1 사이의 숫자를 입력해주세요.\n\n");
				break;
		}
	}
	
}

void intro() {
	printf("절망적인 분위기가 가득한 방에 갇혔다. 여러 가지 단서를 살펴본 후 방을 탈출해보자");
}

void room() {
	int menu;
	
	while(1) {
		system("cls");	
		printf("[방]\n\n");
		printf("방 안에서 할 수 있는 것들을 찾아보자.\n\n");
		printf("1. 가방    2. 컴퓨터    3. 금고   4. 냉장고\n");
		printf("5. 쓰레기통    6. 옷장    7. 출입문\n");
			
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
				printf("\n1 ~ 7까지의 숫자 중 하나를 입력하여 주십시오.\n");
				system("pause");
		}
	}
} 

void bag(){//1. 가방  
	int menu;
	
	while(1) {
		system("cls");
		printf("[방]-[가방]\n\n");
		printf("햐얀색의 예쁜 가방이 있다.\n\n");
		printf("1. 가방 안을 살펴본다.\n");
		printf("2. 가방을 버린다.\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
					printf("\n'이게 뭐지?'\n");
					printf("하트모양의 지우개가 있다.\n");
				break;
			case 2:
					printf("\n좋은 가방이었는데 아쉽다.\n");
			case 0:
				return;
			default:
				printf("\n0 ~ 1까지의 숫자 중 하나를 입력하여 주십시오.\n\n");
				break;
		}
		system("pause");
	}	
}

void computer() {//2. 컴퓨터  
	int menu;
	
	while(1) {
		system("cls");
		printf("[원룸]-[컴퓨터]\n\n");
		printf("책상의 낡아보이는 컴퓨터가 놓여져있다.\n\n");
		printf("1. 컴퓨터의 전원을 켠다.\n");
		printf("2. 컴퓨터를 살펴본다.\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isBrokencom)  {
					printf("\n컴퓨터는 이미 부서졌다.\n\n");
				} else {
					printf("\n컴퓨터 메모장에 뭐라고 쓰여있다.\n");
					printf("I'm a loser...\n\n");	
				}
				system("pause");
				break;
			case 2:
				if(isBrokencom) {
					printf("\n컴퓨터는 이미 부서졌다.\n\n");
				} else {
					system("cls");
					printf("[원룸]-[컴퓨터]-[컴퓨터]\n\n");
					printf("\n컴퓨터를 살피던 중 갑자기 화가 치밀어 오른다.\n\n");
					printf("1. 컴퓨터를 부순다.\n");
					printf("2. 컴퓨터를 가만히 둔다.\n");
					printf(">> ");
					scanf("%d", &menu);
					
					switch(menu) {
						case 1:
							isBrokencom = TRUE;	//컴퓨터 부서짐 
							printf("\n컴퓨터가 부서져버렸다. \n\n");
							printf("1. 잔해를 뒤진다.\n");
							printf("2. 가만히 둔다.\n");
							printf(">> ");
							scanf("%d", &menu);
							
							switch(menu) {
								case 1: 
									printf("\n자세히 살펴보니...\n");
									printf("무엇인가 있다!\n");
									printf("$모양의 열쇠를 발견하였다.\n\n");
									isFind$Key = TRUE;
									break;
								case 2:
									printf("\n괜히 만졌다가 다칠 거 같다.\n\n");
									break;
							default:
								printf("\n이미 부셔진 거 그냥 두자.\n\n");
								break;
							}
							break;
						case 2:
							printf("\n아니야 그렇다고 남의 물건을 부셔버릴 순 없지...\n\n");
							break;
						default:
							printf("\n가만히 있으니 화가 식는 것 같다. 돌아가자.\n\n");
							break;
					}	
				}
				system("pause");
				break;		
			case 0:
				return;
			default:
				printf("0 ~ 2까지의 숫자 중 하나를 입력하여 주십시오.\n\n");
				system("pause");
		}
	}
}

void safebox(){//3. 금고
	int menu;
	
	while(1) {
		system("cls");
		printf("[원룸]-[금고]\n\n");
		printf("엄청 단단해보이는 금고다.\n\n");
		printf("1. 금고를 연다\n");
		printf("2. 금고를 살펴본다.\n");
		printf("3. 금고를 부순다.\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isOpenSafebox) {
					printf("\n금고는 이미 열어서 아무것도 없다.\n\n");
					break; 
				}
				if(isFind$Key) {
					isOpenSafebox = TRUE;	//금고 열었음 	
					printf("금고 안에는 2명의 사람이 찍혀있는 사진이 있다.\n\n");
					printf("좋아보이네... 커플인건가? 부럽다...\n\n");					
				} else {
					printf("\n금고를 열기 위해 필요한 열쇠를 아직 얻지 못한 것 같다.\n\n");
				}
				break;
			case 2:
				printf("금고 한 가운데에 $모양의 구멍이있다.\n\n");
				break;
			case 3:
				printf("이 단단한 걸 맨손으로 부시다간 골절 당하겠어. 그만두자.\n\n");
				break; 
			case 0:
				return;
			default:
				printf("\n0 ~ 3까지의 숫자 중 하나를 입력하여 주십시오.\n\n");
				break;
		}
		system("pause");
		
	}
}

void fridge(){//4. 냉장고
	int menu;
	
	while(1) {
		system("cls");
		printf("[원룸]-[냉장고]\n\n");
		printf("딱 봐도 낡아보이는 냉장고 하나가 있다. 열어볼까?\n");
		printf("냉장고를 열어보니 여러 식품이 있다.\n\n");
		printf("1. 음료수를 살펴본다\n");
		printf("2. 피자를 살펴본다\n");
		printf("3. 아이스크림을 살펴본다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n유통기한이 2019년 3월 4일까지이다.\n");
				printf("\n여태 안 버리고 뭐한 거지??\n\n");
				break;
			case 2:
				printf("\n윽!... 냄새가 왜이래?\n\n");
				break;
			case 3:
				printf("\n이건 좀 괜찮아보이네.\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n0 ~ 3까지의 숫자 중 하나를 입력하여 주십시오.\n\n");
				break;
		}
		system("pause");
	}
}

void trashcan(){//5. 쓰레기통  
	int menu;
	
	while(1) {
		system("cls");
		printf("[원룸]-[쓰레기통]\n\n");
		printf("쓰레기가 많이 쌓인 쓰레기통이 있다.\n");
		printf("1. 쓰레기통을 살펴본다\n");
		printf("2. 쓰레기통을 발로 찬다.\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n쓰레기통에 무엇이 써있는 구겨진 종이가 있다.\n");
				printf("\nI'm freak. My life is a failed life!라고 쓰여있다.\n\n");
				break;
			case 2:
				printf("\n안에 있던 쓰레기들로 인해 방이 더려워졌다.\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n0 ~ 2까지의 숫자 중 하나를 입력하여 주십시오.\n\n");
				break;
		}
		system("pause");
	}
}

void closet(){//6. 옷장
	int menu;
	
	while(1) {
		system("cls");
		printf("[원룸]-[옷장]\n\n");
		printf("방 한쪽을 가득 채울 정도의 큰 옷장이다.\n\n");
		printf("1. 옷장을 살펴본다.\n");
		printf("2. 자켓을 살펴본다.\n");
		printf("3. 청바지를 살펴본다.\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n한 아이돌 그룹의 포스터가 붙어있다.");
				printf("1, 2, 3, ... 5명 같은데?");
				break;
			case 2:
				printf("\n주머니에 메모 하나가 있다.\n\n");
				printf("\n함께이기에 내일이 있다. 라고 쓰여있다.\n");
				break;
			case 3:
				printf("\n이쁘다. 내 스타일인데?\n\n");
				break; 
			case 0:
				return;
			default:
				printf("\n0 ~ 3까지의 숫자 중 하나를 입력하여 주십시오.\n\n");
				break;
		}
		system("pause");
	}	
}	

void door(){//7. 출입문 
	int menu;
	
	while(1) {
		system("cls");
		printf("[원룸]-[출입문]\n\n");
		printf("이 문을 열면 방을 탈출 할 수 있을 것 같다.\n");
		
		printf("1. 문를 살펴본다\n");
		printf("2. 비밀번호를 입력한다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n'이 날을 잊지 않았으면 해'\n\n");
				printf("날? 무슨 날짜를 말하는 건가?\n");				
				break;
			case 2:
				door_password();
				break;
			case 0:
				return;
			default:
				printf("\n0 ~ 3까지의 숫자 중 하나를 입력하여 주십시오.\n\n");
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
		printf("\n\n드디어 이 방에서 탈출하였다.\n\n");
		printf("방의 주인은 어디로 갔을까??\n");
		printf("날 왜 이 방에 가둬둔 거지?\n");
		printf("ROOM ESCAPE THE END \n\n");
		system("pause");
		exit(0);
	} else {
		printf("\n\n문이 움집이지 않는다. 다시 생각해보자.\n\n");
		return;	
	}
}
	
	
	
	
