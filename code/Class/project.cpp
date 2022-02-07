#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <windows.h>

using namespace std;

char map1[10][70]={
	"  -------------------------------------------------------------",
	"| *                     ****     *         *   *              |",
	"| * ************* ***** *    ** **  ***    * * *  ********* * |",
	"| * *           * **    * *****     * *    * *   **    *  * * |",
	"| * * ***** *** **** ** * * **** *  * **  **  ***   *     * * |",
	"| *** *   * * * * *  ** * *    * *  * *  ****  ** ***  **** **|",
	"|     *   * * ***    **   **** ***  * *        ** *    *       ",
	"| ***** * *   *   ** ******  * ***  * *********** *  *** ***** ",
	"| *     *   *   ****         *      *             *          * ",
	"---------------------------------------------------------------"
};
char map2[20][70]={
	"  -------------------------------------------------------------",
	"| *   *       *** ****      *   *       *     * *         *   |",
	"| * * * ***** *   *  * * *  * * * ***** * *** * ********* * * |",
	"| * * * * *   * * *  * * *  * * *   * * *   * *     *   * * * |",
	"|   * * * * *** * *  * * **** * *** * * *** * * *** * * * * * |",
	"|**** * * * * * * *  ***      *   * * *   * * * * * * * *   * |",
	"|     * * *     * *    ********** * * *** * * * * * * * ***** |",
	"| ***** * ******* ****            * *       * *   * * *       |",
	"| *     *            *  ****** **** *  **** * ***** * ****** *|",
	"| * **************** *  *      *    *     * *       *  *      |",
	"|   *      * **  * * *  ************* ******* ***** ** * *****|",
	"|** * **** *     *   *                *       *   *  * *      |",
	"| * * *  * ** **** * **************** * ******* **** * * **** |",
	"| * * **           * *                  *     *      * * *    |",
	"| * * ** ******* *** * * **************** ******** *** * * ****",
	"| * * **       * *   * * *                *            * *     ",
	"| ************** * *** * ********* ******** ****** ***** ***** ",
	"|                *     *                             *       * ",
	"-------------------------------------------------------------- "
};
char map3[30][70]={
	"  -------------------------------------------------------------",
	"* *                         ***     *    *      *   *   *      ",
	"* ************************* * *     * *  *      * * * * *  *** ",
	"           ****   *       * * *     * *  *****  * *   *    *   ",
	"***  ***** *      * **    * * *     * *        ************* **",
	"  *      * *  *   * **   ** * * ***** *  * *** *              *",
	"  *** ** * *  *   * **   *  * * *   * *  * * * * ***** ********",
	"  * *    * *  *   * **   *    * * * * *  *   * * *            *",
	"  * * *  * *  *   * **   *  * * * *   *  * * * * * ************",
	"  * *   ** *  *   * **   * **   * ********** *** * *           ",
	"    ****** *  *   * ** *** *  * *    *   *   *   * * ********* ",
	"  * *      *  *   * **     * ** **** * * * *** *** * *         ",
	"  * * ******  * ****** ***** *   * * * *     * *   * * ********",
	"  * * *    *  *      * *   * * * * * * ***** * * *** * *      *",
	"  * * *    *  * **   * *   * * * * * *   *   * *     * ** *****",
	"  *     ** *  *  *   * *   * * * * * *** * * * * ***** *       ",
	"  **********  *  *   * *   * * * * * *   *** * * *   * ******* ",
	"           *  *  *         * * * * * * ******* * * * *   ***** ",
	"***** * *  *  *  *********** * * * * *         * * * * * *     ",
	" ** *** ****  *            * * * * * * ********* * *   * * ****",
	" **        *  ******* ****** * * * * * *         * * *** * *   ",
	"  ******  **        *      * * *   * * * * ******* * *   *   * ",
	"  *       *****  ********* * * * * * * * * *     * * * ******* ",
	"  *  *******        *   ** *** * * * * * * * * *** *** *       ",
	"  *  *     *   ***  * * ** * * * * * * * * * * *     * * * ****",
	"  *  *  *  *    **  * * ** * * * * * * * *   * *  *  * * * *   ",
	"  *  *  *  *******  * * ** * * * * * * * *** * *  *  * * * * * ",
	"        *           ***    *   ***   ***   ***       *   *   * ",
	"-------------------------------------------------------------- "
};	

class game
{
	public:
		char name[50];
		short x;
		short y;
		void getname();
		void end ();
		void start ();
		void play ();
		void maze ();
		void showmap1();
		void showmap2();
		void showmap3();
		void go(short x,short y);
};
void game::getname()
{
	cout << "Please Enter A Name :";
	cin >> name;
}
void game::end ()
{
	settextstyle(3,0,5);
	Sleep(100);
	cleardevice();
	Sleep(100);
	delay(1000);
	setcolor(12);
	PlaySound(TEXT("Sms Simple.wav"),NULL, SND_ASYNC);
	outtextxy(100,100,"GOOD BYE ");
	delay(1000);
	setcolor(9);
	outtextxy(400,200,name);
	delay(2000);
	closegraph();
}
void game::start ()
{
	settextstyle(0,0,20);
	Sleep(100);
	PlaySound(TEXT("Sms Alert Input.wav"),NULL, SND_ASYNC);
	Sleep(50);
	outtextxy(350,200,"3");
	settextstyle(0,0,20);
	delay(1000);
	cleardevice();
	PlaySound(TEXT("Sms Alert Input.wav"),NULL, SND_ASYNC);
	Sleep(50);
	outtextxy(350,200,"2");
	settextstyle(0,0,20);
	delay(1000);
	cleardevice();
	PlaySound(TEXT("Sms Alert Input.wav"),NULL, SND_ASYNC);
	Sleep(500);
	outtextxy(350,200,"1");
	delay(1000);
	cleardevice();
	settextstyle(3,0,5);
	setcolor(9);
	PlaySound(TEXT("Zang-Sms-Downloadhi.IR (3).wav"),NULL, SND_ASYNC);
	outtextxy(150,100,"START");
	delay(1000);
	setcolor(12);
	outtextxy(350,200,name);	
	delay(1000);
	cleardevice();
}
void game::play ()
{
	int x1=0,y1=300,x2=30,y2=300,i=0,x3=25,y3=297,a1=749,b1=200,a2=749,b2=300,z=0,q=0,p=0,k=48,s=0,u=0,d=0,m=0,o=49,n=49,s1=48,s2=0,s3=0,o1=49,n1=49;
	for(int j=0;j<3&&x2!=780;j++)
	{
		char score[3]={k};
		char score1[3]={s};
		char score2[3]={i};
		char speed1[3]={s1};
		char speed2[3]={s2};
		char speed3[3]={s3};
		z=j-1;
		int x1=0,y1=300,x2=30,y2=300,x3=25,y3=297,a1=752,a2=752,p=b1,q=b2;
		delay(500);
		cleardevice();
		setcolor(14);
		settextstyle(3,0,2);
		outtextxy(390,35,"Name :");
		outtextxy(5,35,"Chance :");
		outtextxy(250,35,"Score :");
		outtextxy(620,35,"Speed :");
		setcolor(15);
		outtextxy(460,35,name);
		outtextxy(335,35,score2);
		outtextxy(345,35,score1);
		outtextxy(355,35,score);
		outtextxy(725,35,speed1);
		outtextxy(715,35,speed2);
		outtextxy(705,35,speed3);
		if(j!=1&&j!=2)
		{
			line(114,30,114,60);
			line(109,35,114,30);
			line(114,30,119,35);
		}
		if(j!=2&&j!=3)
		{
			line(166,30,166,60);
			line(161,35,166,30);
			line(166,30,171,35);
		}
		if(j!=3)
		{
			line(214,30,214,60);
			line(209,35,214,30);
			line(214,30,219,35);
		}						
		for(;x2!=780;)
			{
				delay(100);
				setcolor(0);
				line(a1,b1,a2,b2);//khat sefid
				line(a1-1,b1,a2-1,b2);
				line(a1-2,b1,a2-2,b2);
				if(b1<100||b1>590)
				u*=-1;
				if(b2>590||b2<100)
				d*=-1;
				b1+=u;
				b2+=d;
				if(u>0&&d>0)
				{
					p=b1;
					q=b2;
				}
				if(u<0&&d<0)
				{
					p=b2;
					q=b1;
				}
				setcolor(15);
				line(a1,b1,a2,b2);
				line(a1-1,b1,a2-1,b2);
				line(a1-2,b1,a2-2,b2);
				setcolor(15);
				line(240,0,240,96);// khat byn char
				line(242,0,242,96);
				line(380,0,380,96);
				line(382,0,382,96);
				line(610,0,610,96);
				line(612,0,612,96);
				line(0,98,800,98);
				line(0,96,800,96);	
				setcolor(4);
				line(790,100,790,600);//khat ghermez
				line(789,100,789,600);
				line(788,100,788,600);
				line(787,100,787,600);
				line(786,100,786,600);
				line(785,100,785,600);
				line(784,100,784,600);
				line(783,100,783,600);
				setcolor(15);
				line(x1,y1,x2,y2);//tir
				line(x3,y3,x2,y2);
				line(x3,y3+6,x2,y2);
				line(a1,b1,a2,b2);
				line(a1-1,b1,a2-1,b2);
				line(a1-2,b1,a2-2,b2);
				label:
				if(p==y2&&x2==a1-2)
				{
					PlaySound(TEXT("Sms Alert Complete.wav"),NULL, SND_ASYNC);
					m++;
					if(m%2==0)
					{
						u+=2;
						d+=2;
						s1++;
						if(s1==58)
						{
							s2=o1;
							o1++;
							if(o1==58)
							{
								o1=48;
								s3=n1;
								n++;
							}
						}
					}
					k++;
					if(k==58)
					{
						s=o;
						o++;
						if(o==58)
						{
							o=48;
							i=n;
							n++;
						}
						k=48;
					}
					j=z;
					cleardevice();
					settextstyle(3,0,4);
					outtextxy(275,200,"Congratulation");
					delay(500);
					outtextxy(350,240,name);
					break;
				}
				if(GetAsyncKeyState(VK_UP))
				{
					Sleep(0);
					setcolor(0);
					line(x1,y1,x2,y2);
					line(x3,y3,x2,y2);
					line(x3,y3+6,x2,y2);
					if(y3!=99&&y3>=108)
					{
						y3-=9;
						y2-=9;
						y1-=9;
					}
					setcolor(15);
					line(x1,y1,x2,y2);
					line(x3,y3,x2,y2);
					line(x3,y3+6,x2,y2);

				}
				if(GetAsyncKeyState(VK_DOWN))
				{
					Sleep(0);
					setcolor(0);
					line(x1,y1,x2,y2);
					line(x3,y3,x2,y2);
					line(x3,y3+6,x2,y2);
					if(y3+10!=589&&y3+10<=582)
					{
						y1+=9;
						y2+=9;
						y3+=9;
					}
					setcolor(15);
					line(x1,y1,x2,y2);
					line(x3,y3,x2,y2);
					line(x3,y3+6,x2,y2);
				}
				if(GetAsyncKeyState(VK_RIGHT))
				{
					PlaySound(TEXT("Sms Alert Bamboo.wav"),NULL, SND_ASYNC);
					while(x2!=780&&x2!=a1-2)
					{
						delay(100);
						setcolor(0);
						line(a1,b1,a2,b2);
						line(a1-1,b1,a2-1,b2);
						line(a1-2,b1,a2-2,b2);
						if(b1<100||b1>590)
						u*=-1;
						if(b2>590||b2<100)
						d*=-1;
						b1+=u;
						b2+=d;
						if(u>0&&d>0)
						{
							p=b1;
							q=b2;
						}
						if(u<0&&d<0)
						{
							p=b2;
							q=b1;
						}
						setcolor(15);
						line(a1,b1,a2,b2);
						line(a1-1,b1,a2-1,b2);
						line(a1-2,b1,a2-2,b2);
						setcolor(0);
						line(x1,y1,x2,y2);
						line(x3,y3,x2,y2);
						line(x3,y3+6,x2,y2);
						if(x2!=780)
						{				
							x1+=15;
							x2+=15;
							x3+=15;
						}
						setcolor(15);
						line(x1,y1,x2,y2);
						line(x3,y3,x2,y2);
						line(x3,y3+6,x2,y2);
						for(;x2==a1-2;)
						{
							if(p!=y2)
							{
							p++;
							if(p==y2)
								goto label;
							if(p==q)
							{
								PlaySound(TEXT("2016- (4).wav"),NULL, SND_ASYNC);
								setcolor(0);
								line(x1,y1,x2,y2);
								line(x3,y3,x2,y2);
								line(x3,y3+6,x2,y2);
								x1+=15;
								x2+=15;
								x3+=15;	
							}
							}
							else
							break;
						}
					}
				}
			}
	}
	PlaySound(TEXT("2016- (4).wav"),NULL, SND_ASYNC);
	char score[3]={k};
	char score1[3]={s};
	char score2[3]={i};
	char speed1[3]={s1};
	char speed2[3]={s2};
	char speed3[3]={s3};
	Sleep(1000);
	cleardevice();
	delay(1000);
	setcolor(14);
	settextstyle(3,0,2);
	outtextxy(390,35,"Name :");
	outtextxy(5,35,"Chance :");
	outtextxy(250,35,"Score :");
	outtextxy(620,35,"Speed :");
	setcolor(15);
	outtextxy(460,35,name);
	outtextxy(335,35,score2);
	outtextxy(345,35,score1);
	outtextxy(355,35,score);
	outtextxy(725,35,speed1);
	outtextxy(715,35,speed2);
	outtextxy(705,35,speed3);
	setcolor(15);
	line(240,0,240,96);
	line(242,0,242,96);
	line(380,0,380,96);
	line(382,0,382,96);
	line(610,0,610,96);
	line(612,0,612,96);
	line(0,98,800,98);
	line(0,96,800,96);	
	setcolor(4);
	line(790,100,790,600);
	line(789,100,789,600);
	line(788,100,788,600);
	line(787,100,787,600);
	line(786,100,786,600);
	line(785,100,785,600);
	line(784,100,784,600);
	line(783,100,783,600);
	setcolor(15);
	line(x1,y1,x2,y2);
	line(x3,y3,x2,y2);
	line(x3,y3+6,x2,y2);
	delay(1000);
	cleardevice();
	delay(1000);
	setcolor(14);
	settextstyle(3,0,2);
	outtextxy(390,35,"Name :");
	outtextxy(5,35,"Chance :");
	outtextxy(250,35,"Score :");
	outtextxy(620,35,"Speed :");
	setcolor(15);
	outtextxy(460,35,name);
	outtextxy(335,35,score2);
	outtextxy(345,35,score1);
	outtextxy(355,35,score);
	outtextxy(725,35,speed1);
	outtextxy(715,35,speed2);
	outtextxy(705,35,speed3);
	setcolor(15);
	line(240,0,240,96);
	line(242,0,242,96);
	line(380,0,380,96);
	line(382,0,382,96);
	line(610,0,610,96);
	line(612,0,612,96);
	line(0,98,800,98);
	line(0,96,800,96);	
	setcolor(4);
	line(790,100,790,600);
	line(789,100,789,600);
	line(788,100,788,600);
	line(787,100,787,600);
	line(786,100,786,600);
	line(785,100,785,600);
	line(784,100,784,600);
	line(783,100,783,600);
	setcolor(15);
	line(x1,y1,x2,y2);
	line(x3,y3,x2,y2);
	line(x3,y3+6,x2,y2);
}	
void game::showmap1()
{
	for (int i=0;i<10;i++)
		printf("%s\n",map1[i]); 
}
void game::showmap2()
{
	for (int i=0;i<20;i++)
		printf("%s\n",map2[i]);
}
void game::showmap3()
{
	for (int i=0;i<30;i++)
		printf("%s\n",map3[i]);
}
void game::go(short x,short y)
{
	HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD b = {x,y};
	SetConsoleCursorPosition(a,b);
}
void game::maze ()
{
    system("cls");
	int x=62,y=8;
	showmap1();
	go(x,y);
	cout << '@';
	Sleep(100);
	while(true)
	{
		Sleep(100);
		if (GetAsyncKeyState(VK_UP))
		{
			if(map1[y-1][x]==' ')
			{
				y--;
				go(x,y+1);
				cout << ' ';
				go(x,y);
				cout << '@';
		    }
		}
		if (GetAsyncKeyState(VK_DOWN))
		{	
			if(map1[y+1][x]==' ')
			{
				y++;
				go(x,y-1);
				cout << ' ';
				go(x,y);
				cout << '@';
		    }
		}
		if (GetAsyncKeyState(VK_LEFT))
		{
			if(map1[y][x-1]==' ')
			{
				x--;
				go(x+1,y);
				cout << ' ';
				go(x,y);
				cout << '@';
		    }
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			if(map1[y][x+1]==' ')
			{
				x++;
				go(x-1,y);
				cout << ' ';
				go(x,y);
				cout << '@';
		    }
		}
		if(x==0 && y==0)
		{
		cout << "\n\n\n\n\n\n\n\n\n\nYou win";
		break;
		}
	}
	system("cls");
	y=18;
	x=62;
	showmap2();
	go(x,y);
	cout << '@';
	Sleep(100);
	while(true)
	{
		Sleep(100);
		if (GetAsyncKeyState(VK_UP))
		{
			if(map2[y-1][x]==' ')
			{
				y--;
				go(x,y+1);
				cout << ' ';
				go(x,y);
				cout << '@';
		    }
		}
		if (GetAsyncKeyState(VK_DOWN))
		{	
			if(map2[y+1][x]==' ')
			{
				y++;
				go(x,y-1);
				cout << ' ';
				go(x,y);
				cout << '@';
		    }
		}
		if (GetAsyncKeyState(VK_LEFT))
		{
			if(map2[y][x-1]==' ')
			{
				x--;
				go(x+1,y);
				cout << ' ';
				go(x,y);
				cout << '@';
		    }
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			if(map2[y][x+1]==' ')
			{
				x++;
				go(x-1,y);
				cout << ' ';
				go(x,y);
				cout << '@';
		    }
		}
		if(x==0 && y==0)
		{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nYou win";
		break;
		}
	}
	system("cls");
	y=28;
	x=62;
	showmap3();
	go(x,y);
	cout << '@';
	Sleep(100);
	while(true)
	{
		Sleep(100);
		if (GetAsyncKeyState(VK_UP))
		{
			if(map3[y-1][x]==' ')
			{
				y--;
				go(x,y+1);
				cout << ' ';
				go(x,y);
				cout << '@';
		    }
		}
		if (GetAsyncKeyState(VK_DOWN))
		{	
			if(map3[y+1][x]==' ')
			{
				y++;
				go(x,y-1);
				cout << ' ';
				go(x,y);
				cout << '@';
		    }
		}
		if (GetAsyncKeyState(VK_LEFT))
		{
			if(map3[y][x-1]==' ')
			{
				x--;
				go(x+1,y);
				cout << ' ';
				go(x,y);
				cout << '@';
		    }
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			if(map3[y][x+1]==' ')
			{
				x++;
				go(x-1,y);
				cout << ' ';
				go(x,y);
				cout << '@';
		    }
		}
		if(x==0 && y==0)
		{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nYou win";
		break;
		}
	}
}
int main()
{
	int n=0;
	game a;
	cout << "Select a game :\n"<<"Maze(1).\nShot(2).\n";
	cin >> n;
	if(n==2)
	{
		a.getname();
		initwindow(800,600);
		a.start();
		a.play();	
		a.end();
	}
	if(n==1)
	{
		a.maze();
	}
	return 0;
}
