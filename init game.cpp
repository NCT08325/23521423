void initGame(){
	setbkcolor (15);
	cleardevice ();
	setwindowtitle ("SNAKE-Playing....");
	endGame = false;
	setfillstyle (1,5);
	bar (MINX,MINY,MAXX,MINY+5);
	bar (MAXX,MINY,MAXX-5,MAXY);
	bar (MAXX,MAXY,MINX,MAXY-5);
	bar (MINX,MINY,MINX+5,MAXY);
    setcolor (0);
    int bk = getbkcolor();
    setfillstyle (SOLID_FILL,0);
	int a[] = {15,350,30,350,30,345,50,355,30,365,30,360,15,360,15,350};
    fillpoly (8,a);
    settextstyle (4,0,3); outtextxy (70,340,"Right");
    int b[] = {15,410,30,400,30,405,45,405,45,415,30,415,30,420,15,410};
    fillpoly (8,b);outtextxy (70,400,"Left");
	int c[] = {235,370,235,355,230,355,240,340,250,355,245,355,245,370,235,370};
	fillpoly (8,c);outtextxy (265,340,"Up");
	int d[] = {235,400,235,415,230,415,240,430,250,415,245,415,245,400,235,400};
	fillpoly (8,d);outtextxy (265,400,"Down");
	bar (50,450,170,480);setcolor (15);settextstyle(1,0,1);setbkcolor(0);outtextxy(60,455,"SPACE");setbkcolor(bk);
	setcolor(0);settextstyle (4,0,3);outtextxy(200,450,"Pause/Resum");
	bar (50,500,170,530);setcolor (15);settextstyle(1,0,1);setbkcolor(0);outtextxy(80,505,"ESC");setbkcolor(bk);
	setcolor(0);settextstyle (4,0,3);outtextxy(200,500,"End Game");
	snake[0].x = 60;snake[0].y = 50;
	snake[1].x = 50;snake[1].y = 50;
	snake[2].x = 40;snake[2].y = 50;
	snakeLength = 3;
	setfillstyle (1,BACKGROUND);
	bar (25,25,415,215);
	direction.x = 10;direction.y = 0; // Khoi tao di theo huong trai qua phai
	setcolor (2);
	srand ( time(NULL));
	//Init food
    do{
        food.x = (rand() % (39) + 3)*10;
    	food.y = (rand() % (19) + 3)*10;
	}while (checkPoint() == false);
}