#include <iostream>
#include <Windows.h>
#include "Delivery.h"
#include "Location.h"
using namespace std;
int money = 0;
int 姶蕩 = 1, 紬虞 = 2, 帖綜什峠 = 3;
void BUY();
void BURGER1();
void BURGER2();
void BURGER3();
void BURGER4();
void BURGER5();
void BURGER6();
void SCREEN();
void CRY();
void SMILE();
void LOADING();
void 鯉疑();
void 神鯉嘘();
void 慎去匂();
void 是帖();
void 衣薦();
void 慎呪装();
void 姶蕩1();
void 姶蕩2();
void 紬虞1();
void 紬虞2();
void 帖綜什峠1();
void 帖綜什峠2();
void SIDEBUY();
void gotoxy(int x, int y)
{
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
};
void setcolor(int colornumber)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornumber);
};

void BUY() {
	cout << "姥古馬叔 倍獄暗税 腰硲研 脊径背 爽室推 �� ";
	int n;
	cin >> n;
	switch (n) {
	case 1:
		money = +8900;
		system("cls");
		break;
	case 2:
		money = +9300;
		system("cls");
		break;
	case 3:
		money = +8500;
		system("cls");
		break;
	case 4:
		money = +9500;
		system("cls");
		break;
	case 5:
		money = +12500;
		system("cls");
		break;
	case 6:
		money = +8500;
		system("cls");
		break;
	}

	int input;

	setcolor(2);
	Sleep(200); cout << "    ＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝      \n";
	Sleep(200); cout << "    ＝                                                ＝      \n";
	Sleep(200); cout << "    ＝                                                ＝      \n";
	Sleep(200); cout << "    ＝         ＝      ＝＝   ＝＝   ＝＝   ＝＝      ＝      \n";
	Sleep(200); cout << "    ＝       ＝＝     ＝  ＝ ＝  ＝ ＝  ＝ ＝  ＝     ＝      \n";
	Sleep(200); cout << "    ＝     ＝  ＝     ＝  ＝ ＝  ＝ ＝  ＝ ＝  ＝     ＝      \n";
	Sleep(200); cout << "    ＝         ＝     ＝  ＝ ＝  ＝ ＝  ＝ ＝  ＝     ＝      \n";
	Sleep(200); cout << "    ＝         ＝     ＝  ＝ ＝  ＝ ＝  ＝ ＝  ＝     ＝      \n";
	Sleep(200); cout << "    ＝         ＝     ＝  ＝ ＝  ＝ ＝  ＝ ＝  ＝     ＝      \n";
	Sleep(200); cout << "    ＝     ＝＝＝＝＝  ＝＝   ＝＝   ＝＝   ＝＝      ＝      \n";
	Sleep(200); cout << "    ＝                                                ＝      \n";
	Sleep(200); cout << "    ＝                                                ＝      \n";
	Sleep(200); cout << "    ＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝      \n\n";
	Sleep(200); cout << "                   $$$ 域至掻脊艦陥 $$$   \n";
	Sleep(200); cout << endl;
	Sleep(1000);
	system("cls");
	setcolor(3);
	cout << "              ＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋          \n";
	cout << "            ＋                                  ＋          \n";
	cout << "          ＋                                      ＋          \n";
	cout << "         ＋        ●                   ●          ＋          \n";
	cout << "        ＋                                           ＋        \n";
	cout << "       ±                                            ±          \n";
	cout << "       ±±±±±±±±±±±±±±±±±±±±±±±±          \n";
	cout << "      ×××××××××××××××××××××××××          \n";
	cout << "    ×××××××××××××××××××××××××××          \n";
	cout << "      ±±±±±±±±±±±±±±±±±±±±±±±±          \n";
	cout << "      ±                                            ±          \n";
	cout << "       ＋                   《                     ＋          \n";
	cout << "       ＋                                          ＋          \n";
	cout << "       ＋     …                          …       ＋          \n";
	cout << "       ＋                                          ＋          \n";
	cout << "        ＋                                        ＋          \n";
	cout << "          ＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋          \n";
	cout << "     姥古亜 刃戟鞠醸柔艦陥!    ⊂ 陥製拭 暁 戚遂背爽室推 ⊂ \n";
	cout << endl;
	setcolor(15);
	cout << "坦製生稽 宜焼亜獣形檎 0腰,魁鎧獣形檎 1腰聖 喚君爽室推" << endl;
	cin >> input;
	if (input == 0) {
		SCREEN();
		cout << "据馬獣澗 五敢研 脊径背爽室推 ��";
		cin >> input;
		if (input == 1)
			是帖();
		else if (input == 2) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			BUY();
		}
		else if (input == 3) {
			system("cls");
			姶蕩2();
			紬虞2();
			帖綜什峠2();
			SIDEBUY();
		}
	}
}

void 慎呪装() {
	setcolor(15);
	cout << "姥古馬叔 倍獄暗税 腰硲研 脊径背 爽室推 �� ";
	int n;
	cin >> n;
	switch (n) {
	case 1:
		money = +8900;
		break;
	case 2:
		money = +9300;
		break;
	case 3:
		money = +8500;
		break;
	case 4:
		money = +9500;
		break;
	case 5:
		money = +12500;
		break;
	case 6:
		money = +8500;
		break;
	}
}

void BURGER1() {
	gotoxy(1, 1);
	setcolor(12);
	cout << "     1腰     \n";
	cout << "   ηΜΜΜΜΜΜΟ  \n";
	cout << "   Ν ^o^∠Ν    \n";
	cout << "   ΑΑΑΑΑΑΑΑ    \n";
	cout << "   ΑΑΑΑΑΑΑΑ    \n";
	cout << "   Ν      Ν    \n";
	cout << "   ΡΜΜΜΜΜΜΠ\n";
	cout << endl;
	gotoxy(3, 8);
	cout << "Cheese Burger" << endl;
	gotoxy(3, 9);
	cout << "$8,900";
}
void BURGER2() {
	gotoxy(18, 1);
	setcolor(13);
	cout << "      2腰    \n";
	gotoxy(18, 2);
	cout << "   ηΜΜΜΜΜΜΟ  \n";
	gotoxy(18, 3);
	cout << "   Ν�屐國悧�  \n";
	gotoxy(18, 4);
	cout << "   ΑΑΑΑΑΑΑΑ \n";
	gotoxy(18, 5);
	cout << "   ΑΑΑΑΑΑΑΑ  \n";
	gotoxy(18, 6);
	cout << "   Ν      Ν \n";
	gotoxy(18, 7);
	cout << "   ΡΜΜΜΜΜΜΠ  \n";
	cout << endl;
	gotoxy(21, 8);
	cout << "Shrimp Burger";
	gotoxy(21, 9);
	cout << "$9,300";
}
void BURGER3() {
	gotoxy(37, 1);
	setcolor(14);
	cout << "     3腰    \n";
	gotoxy(37, 2);
	cout << "  ηΜΜΜΜΜΜΟ \n";
	gotoxy(37, 3);
	cout << "  Ν ^け^ Ν  \n";
	gotoxy(37, 4);
	cout << "  ΑΑΑΑΑΑΑΑ  \n";
	gotoxy(37, 5);
	cout << "  ΑΑΑΑΑΑΑΑ  \n";
	gotoxy(37, 6);
	cout << "  Ν      Ν  \n";
	gotoxy(37, 7);
	cout << "  ΡΜΜΜΜΜΜΠ \n";
	cout << endl;
	gotoxy(39, 8);
	cout << "Chicken Burger";
	gotoxy(39, 9);
	cout << "$8,500";
}
void BURGER4() {
	gotoxy(1, 11);
	setcolor(10);
	cout << "     4腰           \n";
	cout << "   ηΜΜΜΜΜΜΟ  \n";
	cout << "   Ν ^ュ^ Ν    \n";
	cout << "   ΑΑΑΑΑΑΑΑ    \n";
	cout << "   ΑΑΑΑΑΑΑΑ    \n";
	cout << "   Ν      Ν    \n";
	cout << "   ΡΜΜΜΜΜΜΠ\n";
	cout << endl;
	gotoxy(3, 18);
	cout << "Taco Burger";
	gotoxy(3, 19);
	cout << "$9,500";
}
void BURGER5() {
	gotoxy(18, 11);
	setcolor(11);
	cout << "      5腰           \n";
	gotoxy(18, 12);
	cout << "   ηΜΜΜΜΜΜΟ  \n";
	gotoxy(18, 13);
	cout << "   Ν ^ぱ^ Ν  \n";
	gotoxy(18, 14);
	cout << "   ΑΑΑΑΑΑΑΑ \n";
	gotoxy(18, 15);
	cout << "   ΑΑΑΑΑΑΑΑ  \n";
	gotoxy(18, 16);
	cout << "   Ν      Ν \n";
	gotoxy(18, 17);
	cout << "   ΡΜΜΜΜΜΜΠ  \n";
	cout << endl;
	gotoxy(21, 18);
	cout << "Beef Burger";
	gotoxy(21, 19);
	cout << "$12,500";
}
void BURGER6() {
	gotoxy(31, 11);
	setcolor(7);
	cout << "       6腰       \n";
	gotoxy(37, 12);
	cout << "  ηΜΜΜΜΜΜΟ \n";
	gotoxy(37, 13);
	cout << "  Ν('_'))Ν  \n";
	gotoxy(37, 14);
	cout << "  ΑΑΑΑΑΑΑΑ  \n";
	gotoxy(37, 15);
	cout << "  ΑΑΑΑΑΑΑΑ  \n";
	gotoxy(37, 16);
	cout << "  Ν      Ν  \n";
	gotoxy(37, 17);
	cout << "  ΡΜΜΜΜΜΜΠ \n";
	cout << endl;
	gotoxy(39, 18);
	cout << "Pork Burger";
	gotoxy(39, 19);
	cout << "$8,500" << endl << endl;
}
void SCREEN() {
	system("cls");
	cout << "  ÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷\n";
	cout << "  ÷                                                    ÷\n";
	cout << "  ÷                                                    ÷\n";
	cout << "  ÷   ****    **  **  ******  ******  ***** ******     ÷\n";
	cout << "  ÷   *   *   **  **  *    *  *       *     *    *     ÷\n";
	cout << "  ÷   *****   **  **  ******  *  ***  ***** ******     ÷\n";
	cout << "  ÷   *    *  **  **  *  *    *    *  *     *  *       ÷\n";
	cout << "  ÷   *****   ******  *   *   ******  ***** *   *      ÷\n";
	cout << "  ÷                                                    ÷\n";
	cout << "  ÷                                                    ÷\n";
	cout << "  ÷   *  *  *   * ***** ***** ***** ****   ⊂⊂ ⊂⊂   ÷\n";
	cout << "  ÷   *  *  *   * *   *   *   *     *  *  ⊂   ⊂  ⊂  ÷\n";
	cout << "  ÷   ****  *   * *   *   *   ***** ****  ⊂       ⊂  ÷\n";
	cout << "  ÷   *  *  *   * *   *   *   *     **     ⊂     ⊂   ÷\n";
	cout << "  ÷   *  *  ***** *   *   *   ***** * **     ⊂  ⊂    ÷\n";
	cout << "  ÷                                            ⊂      ÷\n";
	cout << "  ÷                                                    ÷\n";
	cout << "  ÷    1. 穿鉢 爽庚   2.倍獄暗 五敢  3.紫戚球 五敢     ÷\n";
	cout << "  ÷                                                    ÷\n";
	cout << "  ÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷\n";
	cout << endl;
}
void CRY() {
	setcolor(12);
	cout << "                                                                          \n";
	cout << "             ＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝                    \n";
	cout << "             ＝   ________________________________   ＝                        \n";
	cout << "             ＝  l                                l  ＝                   \n";
	cout << "             ＝  l                                l  ＝                     \n";
	cout << "             ＝  l        Τ             Τ         l  ＝                    \n";
	cout << "             ＝  l                                l  ＝                   \n";
	cout << "   ＝＝＝    ＝  l   ⊇          ＜          ⊇   l  ＝    ＝＝＝        \n";
	cout << "   ＝  ＝＝＝＝  l                                l  ＝＝＝＝  ＝         \n";
	cout << "   ＝        ＝  l                                l  ＝        ＝          \n";
	cout << "   ＝＝＝＝＝＝  l                                l  ＝＝＝＝＝＝               \n";
	cout << "             ＝  l                                l  ＝                         \n";
	cout << "             ＝  l                                l  ＝                         \n";
	cout << "             ＝  l                                l  ＝                         \n";
	cout << "             ＝  l        BURGER     HUNTER       l  ＝                         \n";
	cout << "             ＝  l                                l  ＝                         \n";
	cout << "             ＝  l________________________________l  ＝                         \n";
	cout << "             ＝                                      ＝                         \n";
	cout << "             ＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝                         \n";
	cout << "                   ＝  ＝                ＝  ＝                               \n";
	cout << "                   ＝  ＝                ＝  ＝                               \n";
	cout << "                 ＝    ＝                ＝    ＝                             \n";
	cout << "                 ＝＝＝＝                ＝＝＝＝                             \n";
	cout << "    識澱馬重 紫戚球五敢亜 念箭脊艦陥!   ⊂ 陥献 五敢研 球偲左室推 ⊂             \n";
	cout << endl;
	setcolor(15);
}
void SMILE() {
	setcolor(3);
	cout << "                                                                          \n";
	cout << "             ＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝                  \n";
	cout << "             ＝   ________________________   ＝                        \n";
	cout << "             ＝  l                        l  ＝                   \n";
	cout << "             ＝  l                        l  ＝                     \n";
	cout << "             ＝  l      ＋         ＋     l  ＝                    \n";
	cout << "             ＝  l                        l  ＝                   \n";
	cout << "   ＝＝＝    ＝  l   ⊇      ≦      ⊇   l  ＝    ＝＝＝          \n";
	cout << "   ＝  ＝＝＝＝  l                        l  ＝＝＝＝  ＝         \n";
	cout << "   ＝        ＝  l                        l  ＝        ＝           \n";
	cout << "   ＝＝＝＝＝＝  l                        l  ＝＝＝＝＝＝               \n";
	cout << "             ＝  l                        l  ＝                         \n";
	cout << "             ＝  l   BURGER      HUNTER   l  ＝                         \n";
	cout << "             ＝  l________________________l  ＝                         \n";
	cout << "             ＝                              ＝                         \n";
	cout << "             ＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝＝                         \n";
	cout << "                   ＝  ＝            ＝  ＝                               \n";
	cout << "                   ＝  ＝            ＝  ＝                               \n";
	cout << "                 ＝    ＝            ＝    ＝                             \n";
	cout << "                 ＝＝＝＝            ＝＝＝＝                             \n";
	cout << "      域至戚 刃戟鞠醸柔艦陥!    ⊂ 陥製拭 暁 戚遂背爽室推 ⊂      \n";
	cout << endl;
	setcolor(15);
}
void LOADING() {
	system("cls");
	Sleep(1000);
	setcolor(14);
	Sleep(200); cout << "                      ＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋         \n";
	Sleep(200); cout << "                     ＋                                 ＋         \n";
	Sleep(200); cout << "                    ＋       ＋                    ＋     ＋         \n";
	Sleep(200); cout << "                   ＋                                       ＋         \n";
	Sleep(200); cout << "                  ＋                                          ＋         \n";
	Sleep(200); cout << "               ×××××××××××××××××××××××××         \n";
	Sleep(200); cout << "             ×××××××××××××××××××××××××××         \n";
	Sleep(200); cout << "                 ＋                                          ＋         \n";
	Sleep(200); cout << "                 ＋                   ≦                     ＋         \n";
	Sleep(200); cout << "                 ＋                                          ＋         \n";
	Sleep(200); cout << "                 ＋     ⊂                           ⊂      ＋         \n";
	Sleep(200); cout << "                 ＋        節~獣~幻 奄~陥~形~爽~室~遂        ＋         \n";
	Sleep(200); cout << "                  ＋                                        ＋          \n";
	Sleep(200); cout << "                   ＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋          \n";
	Sleep(200); cout << "";
	Sleep(200); cout << endl;
	setcolor(7);
	system("cls");
}
void 鯉疑() {
	system("cls");
	mokdong mok;
	char name[10];
	int phone;
	char address[10];
	int input;
	cout << "°°°°°°°°°°°°°°°°°°°°" << endl;
	cout << "  *           壕含 爽社走 去系       *  " << endl;
	cout << "°°°°°°°°°°°°°°°°°°°°" << endl;
	cout << "戚硯聖 脊径背爽室推 ��";
	cin >> name;
	mok.NAME(name);
	cout << "腰硲研 脊径背爽室推 ��";
	cin >> phone;
	mok.PHONE(phone);
	cout << "爽社聖 脊径背爽室推 ��";
	cin >> address;
	mok.ADDRESS(address);
	cout << endl;
	cout << "---------------------------------" << endl;
	mok.show();
	setcolor(2);
	cout << "仙脊径精 0, 域紗 遭楳精 1聖 脊径背爽室推 ��";
	cin >> input;
	switch (input) {
	case 0:
		system("cls");
		鯉疑();
		break;
	case 1:
		system("cls");
		break;
	}
	void 衣薦();
	{
		system("cls");
		setcolor(15);
		int input;
		cout << "けけけけけけけけけけけけけけけけけけ\n";
		cout << "け                                け\n";
		cout << "け    1. 朝球   2. 薄榎           け\n";
		cout << "け                                け\n";
		cout << "けけけけけけけけけけけけけけけけけけ\n";
		cout << endl;
		cout << "背雁鞠澗 爽庚 号狛聖 識澱背 爽室推 ��";
		cin >> input;

		if (input == 1) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			慎呪装();
			cout << "仙脊径精 0, 域紗 遭楳精 1聖 脊径背爽室推 ��";
			cin >> input;
			switch (input) {
			case 0:
				system("cls");
				鯉疑();
				break;
			case 1:
				system("cls");
				break;
			}
		}
		else if (input == 2) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			慎呪装();
			cout << "仙脊径精 0, 域紗 遭楳精 1聖 脊径背爽室推 ��";
			cin >> input;
			switch (input) {
			case 0:
				system("cls");
				鯉疑();
				break;
			case 1:
				system("cls");
				break;
			}
		}
	}
	int time, number;
	char ask[10];
	char com[10];
	SmartDelivery user;
	Delivery *puser = new SmartDelivery();
	cout << endl;
	cout << "---------------慎呪装----------------" << endl;
	user.open();
	cout << "-------------BURGER HUNTER------------" << endl;
	puser->open();
	cout << "°°°°°°°°°°°°°°°°°°°°" << endl;
	cout << "   *         倍獄暗 姥古 亜維        *" << endl;
	cout << "°°°°°°°°°°°°°°°°°°°°" << endl;
	cout << "恥 榎衝:" << money << "据" << endl;
	cout << "****姥古 号狛聖 識澱背 爽室推****" << endl;

	cout << "拝採 奄娃聖 脊径馬室推 ��";
	cin >> time;
	user.Time(time);
	cout << "推姥 紫牌聖 脊径馬室推 ��";
	cin >> ask;
	user.asktype_name(ask);
	cout << "匂昔闘 旋験拝 噺紫研 脊径馬室推 ��";
	cin >> com;
	user.company_name(com);
	cout << endl;
	cout << "---------------------------------" << endl;
	user.Time_check();
	user.company_name_check();

	cout << "姥古馬叔形檎 0腰,昼社馬叔形檎 1腰精 喚君爽室推.��";
	cin >> input;
	switch (input) {
	case 0:
		LOADING();
		SMILE();
		cout << "恥 榎衝 ��" << money << endl;
		cout << "薄仙 企奄昔据 呪 ��" << mok.liner - 1 << endl;
		cout << "湛鉢檎生稽 宜焼亜獣形檎 0腰, 魁鎧形檎 1腰聖 喚君爽室推." << endl;
		cin >> input;
		if (input == 0) {
			SCREEN();
			int input;
			cout << "据馬獣澗 五敢研 脊径背爽室推 ��";
			cin >> input;
			if (input == 1)
				是帖();
			else if (input == 2) {
				system("cls");
				BURGER1();
				BURGER2();
				BURGER3();
				BURGER4();
				BURGER5();
				BURGER6();
				BUY();
			}

		}
		else
			return;
		break;
	case 1:
		SCREEN();
	}

}
void 神鯉嘘() {
	system("cls");
	ohmokgyo oh;
	char name[10];
	int phone;
	char address[10];
	int input;
	cout << "°°°°°°°°°°°°°°°°°°°°" << endl;
	cout << "  *           壕含 爽社走 去系       *  " << endl;
	cout << "°°°°°°°°°°°°°°°°°°°°" << endl;
	cout << "戚硯聖 脊径背爽室推 ��";
	cin >> name;
	oh.NAME(name);
	cout << "腰硲研 脊径背爽室推 ��";
	cin >> phone;
	oh.PHONE(phone);
	cout << "爽社聖 脊径背爽室推 ��";
	cin >> address;
	oh.ADDRESS(address);
	cout << endl;
	cout << "---------------------------------" << endl;
	oh.show();
	setcolor(2);
	cout << "仙脊径精 0, 域紗 遭楳精 1聖 脊径背爽室推 ��";
	cin >> input;
	switch (input) {
	case 0:
		system("cls");
		神鯉嘘();
		break;
	case 1:
		system("cls");
		break;
	}
	void 衣薦();
	{
		system("cls");
		setcolor(15);
		int input;
		cout << "けけけけけけけけけけけけけけけけけけ\n";
		cout << "け                                け\n";
		cout << "け    1. 朝球   2. 薄榎           け\n";
		cout << "け                                け\n";
		cout << "けけけけけけけけけけけけけけけけけけ\n";
		cout << endl;
		cout << "背雁鞠澗 爽庚 号狛聖 識澱背 爽室推 ��";
		cin >> input;

		if (input == 1) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			慎呪装();
		}
		else if (input == 2) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			慎呪装();
		}
	}

	cout << "仙脊径精 0, 域紗 遭楳精 1聖 脊径背爽室推 ��";
	cin >> input;
	switch (input) {
	case 0:
		system("cls");
		神鯉嘘();
		break;
	case 1:
		system("cls");
		break;
	}
	int time, number;
	char ask[10];
	char com[10];
	FastDelivery user;
	Delivery *puser = new SmartDelivery();
	cout << endl;
	cout << "---------------慎呪装----------------" << endl;
	user.open();
	cout << "-------------BURGER HUNTER------------" << endl;
	puser->open();
	cout << "°°°°°°°°°°°°°°°°°°°°" << endl;
	cout << "   *         倍獄暗 姥古 亜維        *" << endl;
	cout << "°°°°°°°°°°°°°°°°°°°°" << endl;
	cout << "恥 榎衝:" << money << "据" << endl;
	cout << "****姥古 号狛聖 識澱背 爽室推****" << endl;

	cout << "拝採 奄娃聖 脊径馬室推 ��";
	cin >> time;
	user.Time(time);
	cout << "推姥 紫牌聖 脊径馬室推 ��";
	cin >> ask;
	user.asktype_name(ask);
	cout << "匂昔闘 旋験拝 噺紫研 脊径馬室推 ��";
	cin >> com;
	user.company_name(com);
	cout << endl;
	cout << "---------------------------------" << endl;
	user.Time_check();
	user.asktype_name_check();
	user.company_name_check();

	cout << "姥古馬叔形檎 0腰,昼社馬叔形檎 1腰精 喚君爽室推.��";
	cin >> input;
	switch (input) {
	case 0:
		LOADING();
		SMILE();
		cout << "恥 榎衝 ��" << money << endl;
		cout << "薄仙 企奄昔据 呪 ��" << oh.liner - 1 << endl;
		cout << "湛鉢檎生稽 宜焼亜獣形檎 0腰, 魁鎧形檎 1腰聖 喚君爽室推." << endl;
		cin >> input;
		if (input == 0) {
			SCREEN();
			int input;
			cout << "据馬獣澗 五敢研 脊径背爽室推 ��";
			cin >> input;
			if (input == 1)
				是帖();
			else if (input == 2) {
				system("cls");
				BURGER1();
				BURGER2();
				BURGER3();
				BURGER4();
				BURGER5();
				BURGER6();
				BUY();
			}
			else if (input == 3) {
				system("cls");
				姶蕩2();
				紬虞2();
				帖綜什峠2();
				SIDEBUY();
			}
		}
		else
			return;
		break;
	case 1:
		SCREEN();
	}

}
void 慎去匂() {
	system("cls");
	yeongpo po;
	char name[10];
	int phone;
	char address[10];
	int input;
	cout << "°°°°°°°°°°°°°°°°°°°°" << endl;
	cout << "  *           壕含 爽社走 去系       *  " << endl;
	cout << "°°°°°°°°°°°°°°°°°°°°" << endl;
	cout << "戚硯聖 脊径背爽室推 ��";
	cin >> name;
	po.NAME(name);
	cout << "腰硲研 脊径背爽室推 ��";
	cin >> phone;
	po.PHONE(phone);
	cout << "爽社聖 脊径背爽室推 ��";
	cin >> address;
	po.ADDRESS(address);
	cout << endl;
	cout << "---------------------------------" << endl;
	po.show();
	setcolor(2);
	cout << "仙脊径精 0, 域紗 遭楳精 1聖 脊径背爽室推 ��";
	cin >> input;
	switch (input) {
	case 0:
		system("cls");
		慎去匂();
		break;
	case 1:
		system("cls");
		break;
	}
	void 衣薦();
	{
		system("cls");
		setcolor(15);
		int input;
		cout << "けけけけけけけけけけけけけけけけけけ\n";
		cout << "け                                け\n";
		cout << "け    1. 朝球   2. 薄榎           け\n";
		cout << "け                                け\n";
		cout << "けけけけけけけけけけけけけけけけけけ\n";
		cout << endl;
		cout << "背雁鞠澗 爽庚 号狛聖 識澱背 爽室推 ��";
		cin >> input;

		if (input == 1) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			慎呪装();
		}
		else if (input == 2) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			慎呪装();
		}
	}
	cout << "仙脊径精 0, 域紗 遭楳精 1聖 脊径背爽室推 ��";
	cin >> input;
	switch (input) {
	case 0:
		system("cls");
		慎去匂();
		break;
	case 1:
		system("cls");
		break;
	}
	int time, number;
	char ask[10];
	char com[10];
	Delivery user;
	Delivery *puser = new SmartDelivery();
	cout << endl;
	cout << "---------------慎呪装----------------" << endl;
	user.open();
	cout << "-------------BURGER HUNTER------------" << endl;
	puser->open();
	cout << "°°°°°°°°°°°°°°°°°°°°" << endl;
	cout << "   *         倍獄暗 姥古 亜維        *" << endl;
	cout << "°°°°°°°°°°°°°°°°°°°°" << endl;
	cout << "恥 榎衝:" << money << "据" << endl;
	cout << "****姥古 号狛聖 識澱背 爽室推****" << endl;

	cout << "拝採 奄娃聖 脊径馬室推 ��";
	cin >> time;
	user.Time(time);
	cout << "推姥 紫牌聖 脊径馬室推 ��";
	cin >> ask;
	user.asktype_name(ask);
	cout << "匂昔闘 旋験拝 噺紫研 脊径馬室推 ��";
	cin >> com;
	user.company_name(com);
	cout << endl;
	cout << "---------------------------------" << endl;
	user.Time_check();
	user.asktype_name_check();
	user.company_name_check();

	cout << "姥古馬叔形檎 0腰,昼社馬叔形檎 1腰精 喚君爽室推.��";
	cin >> input;
	switch (input) {
	case 0:
		LOADING();
		SMILE();
		cout << "恥 榎衝 ��" << money << endl;
		cout << "薄仙 企奄昔据 呪 ��" << po.liner - 1 << endl;
		cout << "湛鉢檎生稽 宜焼亜獣形檎 0腰, 魁鎧形檎 1腰聖 喚君爽室推." << endl;
		cin >> input;
		if (input == 0) {
			SCREEN();
			int input;
			cout << "据馬獣澗 五敢研 脊径背爽室推 ��";
			cin >> input;
			if (input == 1)
				是帖();
			else if (input == 2) {
				system("cls");
				BURGER1();
				BURGER2();
				BURGER3();
				BURGER4();
				BURGER5();
				BURGER6();
				BUY();
			}
			else if (input == 3) {
				system("cls");
				姶蕩2();
				紬虞2();
				帖綜什峠2();
				SIDEBUY();
			}
		}
		else
			return;
		break;
	case 1:
		SCREEN();
	}
}


void 是帖() {
	system("cls");
	int input;
	cout << "けけけけけけけけけけけけけけけけけけけけけけけけけけけ\n";
	cout << "け                                                  け\n";
	cout << "け          1. 鯉疑   2. 神鯉嘘   3. 慎去匂         け\n";
	cout << "け                                                  け\n";
	cout << "けけけけけけけけけけけけけけけけけけけけけけけけけけけ\n";
	cout << endl;
	cout << "背雁鞠澗 爽庚 走蝕聖 識澱背 爽室推 ��";
	cin >> input;

	if (input == 1)
		鯉疑();
	else if (input == 2)
		神鯉嘘();
	else if (input == 3)
		慎去匂();

}
void 姶蕩2() {

	gotoxy(0, 0);
	cout << "================================================================================";
	gotoxy(0, 1);
	cout << "       【 紫戚球 五敢研 姥古拝 呪 赤澗 員 脊艦陥. 茨虞左室推 【";
	gotoxy(0, 2);
	cout << "================================================================================";
	setcolor(15);
	gotoxy(11, 5);
	cout << "1.姶切蕩沿\n";
	gotoxy(0, 6);
	cout << "\n";
	gotoxy(0, 7);
	cout << "            ＝    \n";
	gotoxy(0, 8);
	cout << "           ＝＝   \n";
	gotoxy(0, 9);
	cout << "           ＝＝    \n";
	gotoxy(0, 10);
	cout << "           ＝＝ ＝＝    \n";
	gotoxy(0, 11);
	cout << "           ＝＝ ＝＝      \n";
	gotoxy(0, 12);
	cout << "           ＝＝ ＝＝ ＝＝    \n";
	gotoxy(0, 13);
	cout << "        ÷ ＝＝ ＝＝ ＝＝ ÷     \n";
	gotoxy(0, 14);
	cout << "        ÷ ＝＝ ＝＝ ＝＝ ÷    \n";
	gotoxy(0, 15);
	cout << "        ÷ ＝＝ ＝＝ ＝＝ ÷     \n";
	gotoxy(0, 16);
	cout << "        ÷ ＝＝ ＝＝ ＝＝ ÷     \n";
	gotoxy(0, 17);
	cout << "        ÷ ＝＝ ＝＝ ＝＝ ÷     \n";
	gotoxy(0, 18);
	cout << "        ÷÷÷÷÷÷÷÷÷÷     \n";
	gotoxy(0, 19);
	cout << "        ÷÷÷÷÷÷÷÷÷÷    \n";
	gotoxy(0, 20);
	cout << "        ÷÷÷÷÷÷÷÷÷÷     \n";
	cout << endl;
	gotoxy(13, 21);
	cout << "1,500据" << endl;
	gotoxy(9, 22);
	cout << "姶切蕩沿 仙壱 :" << 姶蕩 << "鯵" << endl;
}
void 姶蕩1() {
	setcolor(15);
	int input;
	cout << "           ＝          \n";
	cout << "         ＝＝＝          \n";
	cout << "         ＝＝＝          \n";
	cout << "         ＝＝＝ ＝＝＝          \n";
	cout << "         ＝＝＝ ＝＝＝          \n";
	cout << "         ＝＝＝ ＝＝＝        ＝＝        ⊥ 姶切蕩沿 姥古亜 刃戟鞠醸柔艦陥 ⊥  \n";
	cout << "    ÷   ＝＝＝ ＝＝＝        ＝＝    ÷          \n";
	cout << "    ÷   ＝＝＝ ＝＝＝   ＝   ＝＝    ÷          \n";
	cout << "    ÷   ＝＝＝ ＝＝＝  ＝＝  ＝＝    ÷          \n";
	cout << "    ÷   ＝＝＝ ＝＝＝  ＝＝  ＝＝    ÷          \n";
	cout << "    ÷   ＝＝＝ ＝＝＝  ＝＝  ＝＝    ÷          \n";
	cout << "    ÷   ＝＝＝ ＝＝＝  ＝＝  ＝＝    ÷          \n";
	cout << "    ÷   ＝＝＝ ＝＝＝  ＝＝  ＝＝    ÷          \n";
	cout << "    ÷   ＝＝＝ ＝＝＝  ＝＝  ＝＝    ÷          \n";
	cout << "    ÷   ＝＝＝ ＝＝＝  ＝＝  ＝＝    ÷          \n";
	cout << "    ÷   ＝＝＝ ＝＝＝  ＝＝  ＝＝    ÷          \n";
	cout << "    ÷   ＝＝＝ ＝＝＝  ＝＝  ＝＝    ÷          \n";
	cout << "    ÷   ＝＝＝ ＝＝＝  ＝＝  ＝＝    ÷          \n";
	cout << "    ÷   ＝＝＝ ＝＝＝  ＝＝  ＝＝    ÷          \n";
	cout << "    ÷   ＝＝＝ ＝＝＝  ＝＝  ＝＝    ÷          \n";
	cout << "    ÷                                ÷          \n";
	cout << "    ÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷÷          \n";
	cout << endl;


	cout << "薄仙 古舌拭 赤澗 姶切蕩沿 鯵呪澗 " << 姶蕩 << "鯵 脊艦陥" << endl << endl;
	cout << "坦製生稽 宜焼亜獣形檎 0腰,魁鎧獣形檎 1腰聖 喚君爽室推" << endl;
	cin >> input;
	if (input == 0) {
		SCREEN();
		cout << "据馬獣澗 五敢研 脊径背爽室推 ��";
		cin >> input;
		if (input == 1)
			是帖();
		else if (input == 2) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			BUY();
		}
		else if (input == 3) {
			system("cls");
			姶蕩2();
			紬虞2();
			帖綜什峠2();
			SIDEBUY();
		}
	}

}
void 紬虞2() {

	setcolor(13);
	gotoxy(40, 5);
	cout << "2.紬虞\n";
	gotoxy(30, 6);
	cout << "                                                             \n";
	gotoxy(30, 7);
	cout << "            ÷÷÷           \n";
	gotoxy(30, 8);
	cout << "            ÷           \n";
	gotoxy(30, 9);
	cout << "           ÷÷           \n";
	gotoxy(30, 10);
	cout << "   ＋      ÷÷      ＋   \n";
	gotoxy(30, 11);
	cout << "   ＋      ÷÷      ＋   \n";
	gotoxy(30, 12);
	cout << "   ＋                ＋   \n";
	gotoxy(30, 13);
	cout << "   ＋＋＋＋＋＋＋＋＋＋   \n";
	gotoxy(30, 14);
	cout << "   ＋＋            ＋＋  \n";
	gotoxy(30, 15);
	cout << "   ＋＋            ＋＋   \n";
	gotoxy(30, 16);
	cout << "   ＋＋  −    −  ＋＋    \n";
	gotoxy(30, 17);
	cout << "   ＋＋            ＋＋ \n";
	gotoxy(30, 18);
	cout << "   ＋＋     ≦     ＋＋   \n";
	gotoxy(30, 19);
	cout << "   ＋＋＋＋＋＋＋＋＋＋    \n";
	gotoxy(30, 20);
	cout << "    ＋＋＋＋＋＋＋＋＋   \n";
	gotoxy(30, 21);
	cout << endl;
	gotoxy(39, 21);
	cout << "1,000据" << endl;
	setcolor(15);
	gotoxy(36, 22);
	cout << "紬虞 仙壱 :" << 紬虞 << "鯵" << endl;
}

void 紬虞1() {
	setcolor(13);
	int input;
	cout << "                         \n";
	cout << "             ÷÷÷           \n";
	cout << "             ÷           \n";
	cout << "            ÷÷           \n";
	cout << "    ＋      ÷÷      ＋      ⊂ 姥古亜 刃戟鞠醸柔艦陥 ⊂     \n";
	cout << "    ＋      ÷÷      ＋           \n";
	cout << "    ＋      ÷÷      ＋           \n";
	cout << "    ＋      ÷÷      ＋           \n";
	cout << "    ＋                ＋           \n";
	cout << "    ＋＋＋＋＋＋＋＋＋＋           \n";
	cout << "    ＋＋            ＋＋           \n";
	cout << "    ＋＋            ＋＋           \n";
	cout << "    ＋＋  ��    ��  ＋＋           \n";
	cout << "    ＋＋            ＋＋           \n";
	cout << "    ＋＋            ＋＋           \n";
	cout << "    ＋＋     ＋     ＋＋           \n";
	cout << "    ＋＋            ＋＋           \n";
	cout << "    ＋＋            ＋＋           \n";
	cout << "    ＋＋＋＋＋＋＋＋＋＋           \n";
	cout << "     ＋＋＋＋＋＋＋＋＋           \n";
	cout << endl;
	setcolor(15);
	cout << "薄仙 古舌拭 赤澗 紬虞鯵呪澗 " << 紬虞 << "鯵 脊艦陥" << endl << endl;
	cout << "坦製生稽 宜焼亜獣形檎 0腰,魁鎧獣形檎 1腰聖 喚君爽室推" << endl;
	cin >> input;
	if (input == 0) {
		SCREEN();
		cout << "据馬獣澗 五敢研 脊径背爽室推 ��";
		cin >> input;
		if (input == 1)
			是帖();
		else if (input == 2) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			BUY();
		}
		else if (input == 3) {
			system("cls");
			姶蕩2();
			紬虞2();
			帖綜什峠2();
			SIDEBUY();
		}
	}
}

void 帖綜什峠2() {
	setcolor(14);
	gotoxy(63, 5);
	cout << "3.帖綜什峠\n";
	gotoxy(55, 6);
	cout << "                         \n";
	gotoxy(55, 7);
	cout << "               】】       \n";
	gotoxy(55, 8);
	cout << "              】 * 】       \n";
	gotoxy(55, 9);
	cout << "              】 * 】      \n";
	gotoxy(55, 10);
	cout << "      】】    】 * 】       \n";
	gotoxy(55, 11);
	cout << "  || 】   】  】 * 】 ||     \n";
	gotoxy(55, 12);
	cout << "  || 】 * 】  】 * 】 ||    \n";
	gotoxy(55, 13);
	cout << "  || 】 * 】  】 * 】 ||      \n";
	gotoxy(55, 14);
	cout << "  || 】 * 】  】 * 】 ||    \n";
	gotoxy(55, 15);
	cout << "  || 】 * 】  】 * 】 ||     \n";
	gotoxy(55, 16);
	cout << "  || 】 * 】  】 * 】 ||    \n";
	gotoxy(55, 17);
	cout << "  || 】  】   】 * 】 ||      \n";
	gotoxy(55, 18);
	cout << "  ||  】】     】 】  ||   \n";
	gotoxy(55, 19);
	cout << "  ||__________________||    \n";
	gotoxy(55, 20);
	cout << "  |____________________|    \n";
	cout << endl;
	gotoxy(65, 21);
	cout << "2,000据" << endl;
	setcolor(15);
	gotoxy(60, 22);
	cout << "帖綜什峠 仙壱 :" << 帖綜什峠 << "鯵" << endl;
}

void 帖綜什峠1() {
	setcolor(14);
	int input;
	cout << "                            \n";
	cout << "                             \n";
	cout << "                 】 】          \n";
	cout << "         】】   】 * 】          \n";
	cout << "       】   】  】 * 】       ⇒ 姥古亜 刃戟鞠醸柔艦陥 ⇒   \n";
	cout << "       】 * 】  】 * 】          \n";
	cout << "       】 * 】  】 * 】          \n";
	cout << "       】 * 】  】 * 】          \n";
	cout << "    || 】 * 】  】 * 】 ||          \n";
	cout << "    || 】 * 】  】 * 】 ||          \n";
	cout << "    || 】 * 】  】 * 】 ||          \n";
	cout << "    || 】 * 】  】 * 】 ||          \n";
	cout << "    || 】 * 】  】 * 】 ||          \n";
	cout << "    || 】 * 】  】 * 】 ||          \n";
	cout << "    || 】 * 】  】 * 】 ||          \n";
	cout << "    || 】  】   】 * 】 ||          \n";
	cout << "    ||  】】     】 】  ||          \n";
	cout << "    ||__________________||          \n";
	cout << "    |____________________|          \n";
	cout << endl;
	setcolor(15);
	cout << "薄仙 古舌拭 赤澗 帖綜什峠 鯵呪澗 " << 帖綜什峠 << "鯵 脊艦陥" << endl << endl;
	cout << "坦製生稽 宜焼亜獣形檎 0腰,魁鎧獣形檎 1腰聖 喚君爽室推" << endl;
	cin >> input;
	if (input == 0) {
		SCREEN();
		cout << "据馬獣澗 五敢研 脊径背爽室推 ��";
		cin >> input;
		if (input == 1)
			是帖();
		else if (input == 2) {
			system("cls");
			BURGER1();
			BURGER2();
			BURGER3();
			BURGER4();
			BURGER5();
			BURGER6();
			BUY();
		}
		else if (input == 3) {
			system("cls");
			姶蕩2();
			紬虞2();
			帖綜什峠2();
			SIDEBUY();
		}
	}
}
void SIDEBUY() {
	int input;
	cout << endl << endl;
	cout << "識澱馬叔 紫戚球研 識澱馬食 爽室推 �� ";
	cin >> input;
	switch (input) {
	case 1:
		if (姶蕩 == 0) {
			system("cls");
			CRY();
			cout << "坦製生稽 宜焼亜獣形檎 0腰,魁鎧獣形檎 1腰聖 喚君爽室推" << endl;
			cin >> input;
			if (input == 0) {
				system("cls");
				SCREEN();
				cout << "据馬獣澗 五敢研 脊径背爽室推 ��";
				cin >> input;
				if (input == 1)
					是帖();
				else if (input == 2) {
					system("cls");
					BURGER1();
					BURGER2();
					BURGER3();
					BURGER4();
					BURGER5();
					BURGER6();
					BUY();
				}
				else if (input == 3) {
					system("cls");
					姶蕩2();
					紬虞2();
					帖綜什峠2();
					SIDEBUY();
				}

			}
			return;
		}
		姶蕩--;
		system("cls");
		姶蕩1();
		break;
	case 2:
		if (紬虞 == 0) {
			system("cls");
			CRY();
			cout << "坦製生稽 宜焼亜獣形檎 0腰,魁鎧獣形檎 1腰聖 喚君爽室推" << endl;
			cin >> input;
			if (input == 0) {
				system("cls");
				SCREEN();
				cout << "据馬獣澗 五敢研 脊径背爽室推 ��";
				cin >> input;
				if (input == 1)
					是帖();
				else if (input == 2) {
					system("cls");
					BURGER1();
					BURGER2();
					BURGER3();
					BURGER4();
					BURGER5();
					BURGER6();
					BUY();
				}
				else if (input == 3) {
					system("cls");
					姶蕩2();
					紬虞2();
					帖綜什峠2();
					SIDEBUY();
				}

			}
			return;
		}
		紬虞--;
		system("cls");
		紬虞1();
		break;
	case 3:
		if (帖綜什峠 == 0) {
			system("cls");
			CRY();
			cout << "坦製生稽 宜焼亜獣形檎 0腰,魁鎧獣形檎 1腰聖 喚君爽室推" << endl;
			cin >> input;
			if (input == 0) {
				system("cls");
				SCREEN();
				cout << "据馬獣澗 五敢研 脊径背爽室推 ��";
				cin >> input;
				if (input == 1)
					是帖();
				else if (input == 2) {
					system("cls");
					BURGER1();
					BURGER2();
					BURGER3();
					BURGER4();
					BURGER5();
					BURGER6();
					BUY();
				}
				else if (input == 3) {
					system("cls");
					姶蕩2();
					紬虞2();
					帖綜什峠2();
					SIDEBUY();
				}

			}
			return;
		}
		帖綜什峠--;
		system("cls");
		帖綜什峠1();
		break;
	}
}
int main() {
	SCREEN();
	int input;
	cout << "据馬獣澗 五敢研 脊径背爽室推 ��";
	cin >> input;
	if (input == 1)
		是帖();
	else if (input == 2) {
		system("cls");
		BURGER1();
		BURGER2();
		BURGER3();
		BURGER4();
		BURGER5();
		BURGER6();
		BUY();
	}
	else if (input == 3) {
		system("cls");
		姶蕩2();
		紬虞2();
		帖綜什峠2();
		SIDEBUY();
	}
}