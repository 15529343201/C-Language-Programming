static int x=10;
add2(){
	extern int y;
	x+=10;//x=22 x=34
	y+=2;//y=8 y=13
	printf("add2:x=%d,y=%d\n",x,y);
}
