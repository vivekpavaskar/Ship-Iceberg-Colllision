#include<GL/glut.h>
#include<windows.h>

void display(void);

int flag=0;
float pos,y=0;

void init()
{
	glClearColor(0.0,0.0,0.0,0.0);
	glColor3f(1.0,0.0,0.0);
	glLineWidth(3.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1024,0,768);

}

void bitmap_output(int x,int y,char *string,void * font)
{
	int len,i;
	glRasterPos2f(x,y);
	len=(int)strlen(string);
	for(i=0;i<len;i++)
	{
		glutBitmapCharacter(font,string[i]);
	}
}

void myMouse1(int btn,int state,int x,int y)
{
	if(btn==GLUT_LEFT_BUTTON&&state==GLUT_DOWN)

		flag=1;
		glutPostRedisplay();

}







void iceberg()
{

	glColor3f(0.81,0.81,0.81);
	glBegin(GL_POLYGON);
	glVertex2i(870,450);
	glVertex2i(970,410);
	glVertex2i(990,360);
	glVertex2i(1010,310);
	glVertex2i(1005,270);
	glVertex2i(1000,230);
	glVertex2i(1010,210);
	glVertex2i(980,170);
	glVertex2i(970,145);
	glVertex2i(950,130);
	glVertex2i(920,120);
	glVertex2i(905,105);
	glVertex2i(890,110);
	glVertex2i(795,115);
	glVertex2i(750,200);
	glVertex2i(730,300);
	glVertex2i(745,350);
	glVertex2i(758,370);
	glVertex2i(870,400);

	glEnd();

}


void ship(int x,int y)
{


			/*base*/

		glBegin(GL_POLYGON);
		glColor3f(0.30f,0.06f,0.42f);
		glVertex2f(20+x,238+y);
		glColor3f(0.30f,0.06f,0.42f);
		glVertex2f(20+x,220+y);
				glColor3f(.0f,0.0f,0.0f);
		glVertex2f(82+x,140+y);
					glColor3f(0.0f,0.0f,0.0f);
		glVertex2f(438+x,84+y);

			glColor3f(0.32f,0.06f,0.42f);
		glVertex2f(584+x,196+y);
			glColor3f(0.30f,0.06f,0.42f);
		glVertex2f(600+x,220+y);
		glEnd();

	/*p1*/

	glColor3f(0.70,0.0,0.0);
	glBegin(GL_POLYGON);

		glVertex2f(70+x,236+y);
		glVertex2f(70+x,256+y);
		glVertex2f(478+x,262+y);
		glVertex2f(478+x,222+y);
		glVertex2f(70+x,238+y);
		glEnd();




/*p2*/
		glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	//	glBegin(GL_LINE_LOOP);
		glVertex2f(90+x,258+y);
		glVertex2f(90+x,280+y);
		glVertex2f(466+x,298+y);
		glVertex2f(466+x,262+y);
		//glVertex2f(90+x,258+y);
		glEnd();


	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);

		glVertex2f(90+x,258+y);
		glVertex2f(90+x,280+y);
		glVertex2f(466+x,298+y);
		glVertex2f(466+x,262+y);
		glVertex2f(90+x,258+y);
		glEnd();



/*p3*/

		glColor3f(0.30,0.30,0.30);
	glBegin(GL_POLYGON);

		glVertex2f(102+x,302+y);
		glVertex2f(102+x,280+y);
		glVertex2f(442+x,298+y);
		glVertex2f(442+x,330+y);
		glVertex2f(102+x,302+y);

	glEnd();







/*p4*/
	glColor3f(1.0,0.50,0.00);
	glBegin(GL_POLYGON);

		glVertex2f(158+x,304+y);
		glVertex2f(158+x,388+y);
		glColor3f(0.3,0.3,0.0);
		glVertex2f(188+x,388+y);
		glVertex2f(188+x,310+y);

	glEnd();




glBegin(GL_POLYGON);
	glColor3f(0.4,0.4,0.4);
		glVertex2f(442+x,328+y);
		glVertex2f(442+x,298+y);
		glVertex2f(494+x,294+y);
		glVertex2f(494+x,324+y);
		//glVertex2f(318+x,322+y);
		glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.80,0.80,0.80);
		glVertex2f(466+x,298+y);
		glVertex2f(466+x,262+y);
		glVertex2f(508+x,256+y);
		glVertex2f(508+x,290+y);
		//glVertex2f(318+x,322+y);
		glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.50,0.0,0.0);
		glVertex2f(478+x,262+y);
		glVertex2f(478+x,222+y);
		glVertex2f(514+x,220+y);
		glVertex2f(514+x,254+y);
		//glVertex2f(318+x,322+y);
		glEnd();


	glColor3f(1.0,0.50,0.0);
		glBegin(GL_POLYGON);

		glVertex2f(224+x,312+y);
		glVertex2f(224+x,396+y);
		glColor3f(0.3,0.3,0.0);
		glVertex2f(254+x,396+y);
		glVertex2f(254+x,315+y);
	glEnd();

	glColor3f(1.0,0.50,0.0);
		glBegin(GL_POLYGON);
//	glColor3f(0.5,0.5,0.2);
		glVertex2f(318+x,322+y);
//		glColor3f(0.3,0.1,0.0);
		glVertex2f(318+x,406+y);
			glColor3f(0.5,0.5,0.2);
		glVertex2f(358+x,406+y);
//		glColor3f(0.5,0.2,0.0);
		glVertex2f(358+x,320+y);
	//	glColor3f(0.3,0.3,0.0);

		glEnd();
	//}
}
void water1()
{
		glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,1.0);
    		glVertex2f(0,160);
		glVertex2f(80,160);

		glVertex2f(480,100);
		glVertex2f(1024,100);
		glVertex2f(1024,0);
	glVertex2f(0,0);
	glEnd();

}

void water()
{
		glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,1.0);
    //		glVertex2f(0,160);
		glVertex2f(80,160);

	//	glVertex2f(508,160);
		glVertex2f(1024,160);
		glVertex2f(1024,100);
	glVertex2f(480,100);
glVertex2f(80,160);
	glEnd();

}

void display2(void)
{

	glClear(GL_COLOR_BUFFER_BIT);


if(pos<210)
pos+=0.1;

if((600+pos)>800)
{

	if(y>-300)
   y-=0.1;

}


   //glFlush();
	water();
	ship(pos,y);
     iceberg();
	 water1();

glutPostRedisplay();
	  glFlush();


        glutSwapBuffers();
}
void display1(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
	glColor3f(1,1,1);
	glVertex2f(30,30);
	glVertex2f(994,30);
	glVertex2f(994,738);
	glVertex2f(30,738);
	glEnd();
	glColor3f(1,1,1);
	bitmap_output(128,630,"SOME COLLEGE OF ENGINEERING",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1,1,1);
	bitmap_output(138,590,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1,0,1);
	bitmap_output(350,530,"A Mini Project On",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0.5,0.8,0);
	bitmap_output(250,480,"Ship and Iceberg Collision",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1,0,1);
	bitmap_output(100,420,"By",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1,0,0);
	bitmap_output(100,370,"Name USN",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1,0,0);
	bitmap_output(100,330,"Name USN",GLUT_BITMAP_TIMES_ROMAN_24);

	glColor3f(1,0,1);
	bitmap_output(350,240,"Guides",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1,0,0);
	bitmap_output(120,200,"Name Desg.",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1,0,0);
	bitmap_output(620,200,"Name Desg.",GLUT_BITMAP_TIMES_ROMAN_24);

	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(557,110);
	glVertex2f(557,80);
	glVertex2f(627,80);
	glVertex2f(627,110);
	glEnd();
	glFlush();
	glColor3f(0,0,0);
	bitmap_output(567,90,"Next",GLUT_BITMAP_TIMES_ROMAN_24);
	glEnd();
	glFlush();
	glutSwapBuffers();

}





void myKeyboardFunc( unsigned char key, int x, int y )
{


	if(key==13)
		flag=1;
		//break;
		display();




}


void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
     if(flag==0)
      display1();

	else if(flag==1)
		display2();
}

int main(int argc,char ** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(1024,768);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Ship and Iceberg Collision");
	glutKeyboardFunc(myKeyboardFunc);
	glutMouseFunc(myMouse1);
	init();
	glutSwapBuffers();
	glutDisplayFunc(display);
	glEnable(GL_SMOOTH);
	init();
	glutMainLoop();
return 0;
}
