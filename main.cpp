#include<stdio.h>
#include<GL/glut.h>

void ice();
void display1();
void display2();
void display3();
void ship();
void water();

GLint a=0,b=0,c=0,d=0,e=0,f=0,g=500,h=600,x=100,i=0;
GLfloat theta=0.0;
GLint speed=300,pa=20,pb=20,pc=20,px=5;

void mykeyboard(unsigned char key,int x,int y)
{
    if(key=='s' || key=='S')
        speed=speed+10;
    if(key=='f' || key=='F' && speed>20)
        speed=speed-10;
    if(key=='e' || key=='E')
        exit(0);
}

void mymouse(int btn,int state,int x,int y)
{
    if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
    {
        pa=0;
        pb=0;
        pc=0;
        px=0;
    }
    if(btn==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
    {
        pa=20;
        pb=20;
        pc=20;
        px=5;
    }

}

void update(int value)
{
    a+=pa;
    glutPostRedisplay();
    glutTimerFunc(speed,update,0);
}

void display()
{

    glClear(GL_COLOR_BUFFER_BIT);
    display1();
    if(a>950)
    {
        b+=pb;
        display2();
    }
    if(b>500 )
    {
        c+=pc;
        display3();

    }

    glFlush();
}


void display1()
{
    glPushMatrix();

    glTranslated(a,75,0.0);
    ship();
    glPopMatrix();
    water();
}

void display2()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glTranslated(500,0,0);
    ice();
    glPopMatrix();
    glPushMatrix();
    glTranslated(b,75,0.0);
    ship();
    glPopMatrix();
    water();
}

void display3()
{
    glClear(GL_COLOR_BUFFER_BIT);
    ice();
    x-=px;
    glPushMatrix();
    glTranslated(c,x,0.0);
    glRotated(-12,0,0,1);
    ship();
    glPopMatrix();
    water();

}

/* DRAW WATER */
void water()
{
    glColor3f(0.0,0.5,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(1000,0);
    glVertex2f(1000,100);
    glVertex2f(0,100);
    glEnd();
}

/* TO DRAW SHIP */
void ship()
{

    glScaled(20,20,0);
    glColor3f(0.5,0.5,0.5);
    //grey middle rectangle 2
    glBegin(GL_POLYGON);
    glVertex2f(3.5,5.5);
    glVertex2f(3.5,8.5);
    glVertex2f(19.5,8.5);
    glVertex2f(19.5,5.5);
    glEnd();
    glColor3f(0.0,0.0,0.6);
    //black bottom of ship
    glBegin(GL_POLYGON);
    glVertex2f(1,5.5);
    glVertex2f(4,1);
    glVertex2f(19,1);
    glVertex2f(21.5,5.5);
    glEnd();
    glColor3f(0.7,0.4,0.2);
    //vertical brown pole at left
    glBegin(GL_POLYGON);
    glVertex2f(4,5.5);
    glVertex2f(4,8);
    glVertex2f(5,8);
    glVertex2f(5,5.5);
    glEnd();
    glColor3f(0.9,0.9,0.9);
    //horizontal white 1
    glBegin(GL_POLYGON);
    glVertex2f(7,7.5);
    glVertex2f(7,8);
    glVertex2f(10,8);
    glVertex2f(10,7.5);
    glEnd();
    //horizontal white 2
    glBegin(GL_POLYGON);
    glVertex2f(11.5,7.5);
    glVertex2f(11.5,8);
    glVertex2f(15,8);
    glVertex2f(15,7.5);
    glEnd();
    //horizontal white 3
    glBegin(GL_POLYGON);
    glVertex2f(16,7.5);
    glVertex2f(16,8);
    glVertex2f(19,8);
    glVertex2f(19,7.5);
    glEnd();

    glColor3f(0.5,0.5,0.5);
    //top grey rectangle 1
    glBegin(GL_POLYGON);
    glVertex2f(4.5,8.5);
    glVertex2f(4.5,10);
    glVertex2f(18.5,10);
    glVertex2f(18.5,8.5);
    glEnd();

    glColor3f(0.0,0.0,0.6);
    //black vertical line 1
    glBegin(GL_POLYGON);
    glVertex2f(5.5,10);
    glVertex2f(5.5,12.9);
    glVertex2f(7,12.9);
    glVertex2f(7,10);
    glEnd();

    glColor3f(0.9,0.5,0.2);
    //top brown piece 1
    glBegin(GL_POLYGON);
    glVertex2f(5.5,12.9);
    glVertex2f(5.5,13.5);
    glVertex2f(7,13.5);
    glVertex2f(7,12.9);
    glEnd();

    glColor3f(0.0,0.0,0.6);
    //black vertical line 2
    glBegin(GL_POLYGON);
    glVertex2f(8.5,10);
    glVertex2f(8.5,12.9);
    glVertex2f(10,12.9);
    glVertex2f(10,10);
    glEnd();
    glColor3f(0.9,0.5,0.2);
    //top brown piece 2
    glBegin(GL_POLYGON);
    glVertex2f(8.5,12.9);
    glVertex2f(8.5,13.5);
    glVertex2f(10,13.5);
    glVertex2f(10,12.9);
    glEnd();
    glColor3f(0.0,0.0,0.6);
    //black vertical line 3
    glBegin(GL_POLYGON);
    glVertex2f(11.5,10);
    glVertex2f(11.5,12.9);
    glVertex2f(13,12.9);
    glVertex2f(13,10);
    glEnd();

    glColor3f(0.9,0.5,0.2);
    //top brown piece 3
    glBegin(GL_POLYGON);
    glVertex2f(11.5,12.9);
    glVertex2f(11.5,13.5);
    glVertex2f(13,13.5);
    glVertex2f(13,12.9);
    glEnd();
    glColor3f(0.0,0.0,0.6);
    //black vertical line 4
    glBegin(GL_POLYGON);
    glVertex2f(14.5,10);
    glVertex2f(14.5,12.9);
    glVertex2f(16,12.9);
    glVertex2f(16,10);
    glEnd();
    glColor3f(0.9,0.5,0.2);
    //top brown piece 4
    glBegin(GL_POLYGON);
    glVertex2f(14.5,12.9);
    glVertex2f(14.5,13.5);
    glVertex2f(16,13.5);
    glVertex2f(16,12.9);
    glEnd();
    glColor3f(0.0,0.0,1.0);
    //bottom up line 1
    glBegin(GL_LINE_LOOP);
    glVertex2f(1.5,5.5);
    glVertex2f(1.5,6.5);
    glVertex2f(2,6.2);
    glVertex2f(3,6.2);
    glVertex2f(3.5,6.5);
    glVertex2f(3.5,5.5);
    glEnd();
    //bottom up line 2
    glBegin(GL_LINE_LOOP);
    glVertex2f(3.5,5.5);
    glVertex2f(3.5,6.5);
    glVertex2f(4,6.2);
    glVertex2f(5,6.2);
    glVertex2f(5.5,6.5);
    glVertex2f(5.5,5.5);
    glEnd();
//bottom up line 3
    glBegin(GL_LINE_LOOP);
    glVertex2f(5.5,5.5);
    glVertex2f(5.5,6.5);
    glVertex2f(6,6.2);
    glVertex2f(7,6.2);
    glVertex2f(7.5,6.5);
    glVertex2f(7.5,5.5);
    glEnd();
//bottom up line 4
    glBegin(GL_LINE_LOOP);
    glVertex2f(7.5,5.5);
    glVertex2f(7.5,6.5);
    glVertex2f(8,6.2);
    glVertex2f(9,6.2);
    glVertex2f(9.5,6.5);
    glVertex2f(9.5,5.5);
    glEnd();
    //bottom up line 5
    glBegin(GL_LINE_LOOP);
    glVertex2f(9.5,5.5);
    glVertex2f(9.5,6.5);
    glVertex2f(10,6.2);
    glVertex2f(11,6.2);
    glVertex2f(11.5,6.5);
    glVertex2f(11.5,5.5);
    glEnd();
    //bottom up line 6
    glBegin(GL_LINE_LOOP);
    glVertex2f(11.5,5.5);
    glVertex2f(11.5,6.5);
    glVertex2f(12,6.2);
    glVertex2f(13,6.2);
    glVertex2f(13.5,6.5);
    glVertex2f(13.5,5.5);
    glEnd();
    //bottom up line 7
    glBegin(GL_LINE_LOOP);
    glVertex2f(13.5,5.5);
    glVertex2f(13.5,6.5);
    glVertex2f(14,6.2);
    glVertex2f(15,6.2);
    glVertex2f(15.5,6.5);
    glVertex2f(15.5,5.5);
    glEnd();
    //bottom up line 8
    glBegin(GL_LINE_LOOP);
    glVertex2f(15.5,5.5);
    glVertex2f(15.5,6.5);
    glVertex2f(16,6.2);
    glVertex2f(17,6.2);
    glVertex2f(17.5,6.5);
    glVertex2f(17.5,5.5);
    glEnd();
    //bottom up line 9
    glBegin(GL_LINE_LOOP);
    glVertex2f(17.5,5.5);
    glVertex2f(17.5,6.5);
    glVertex2f(18,6.2);
    glVertex2f(19,6.2);
    glVertex2f(19.5,6.5);
    glVertex2f(19.5,5.5);
    glEnd();
    //bottom up line 10
    glBegin(GL_LINE_LOOP);
    glVertex2f(19.5,5.5);
    glVertex2f(19.5,6.5);
    glVertex2f(20,6.2);
    glVertex2f(20.5,6.2);
    glVertex2f(21,6.5);
    glVertex2f(21,5.5);
    glEnd();

    glColor3f(1.0,1.0,1.0);

    //square line 1
    glBegin(GL_LINE_LOOP);
    glVertex2f(4.5,3.5);
    glVertex2f(4.5,4.5);
    glVertex2f(5.5,4.5);
    glVertex2f(5.5,3.5);
    glEnd();
    //square line 2
    glBegin(GL_LINE_LOOP);
    glVertex2f(7,3.5);
    glVertex2f(7,4.5);
    glVertex2f(8,4.5);
    glVertex2f(8,3.5);
    glEnd();
    //square line 3
    glBegin(GL_LINE_LOOP);
    glVertex2f(9.5,3.5);
    glVertex2f(9.5,4.5);
    glVertex2f(10.5,4.5);
    glVertex2f(10.5,3.5);
    glEnd();
    //square line 4
    glBegin(GL_LINE_LOOP);
    glVertex2f(12,3.5);
    glVertex2f(12,4.5);
    glVertex2f(13,4.5);
    glVertex2f(13,3.5);
    glEnd();
    //square line 5
    glBegin(GL_LINE_LOOP);
    glVertex2f(14.5,3.5);
    glVertex2f(14.5,4.5);
    glVertex2f(15.5,4.5);
    glVertex2f(15.5,3.5);
    glEnd();
    //square line 6
    glBegin(GL_LINE_LOOP);
    glVertex2f(17,3.5);
    glVertex2f(17,4.5);
    glVertex2f(18,4.5);
    glVertex2f(18,3.5);
    glEnd();

    glColor3f(0.0,0.0,1.0);
    //top black line 1
    glBegin(GL_LINE_LOOP);
    glVertex2f(5,10);
    glVertex2f(5,11);
    glVertex2f(5.5,10.8);
    glVertex2f(6.5,10.8);
    glVertex2f(7,11);
    glVertex2f(7,10);
    glEnd();
    //top black line 2
    glBegin(GL_LINE_LOOP);
    glVertex2f(7,10);
    glVertex2f(7,11);
    glVertex2f(7.5,10.8);
    glVertex2f(8.5,10.8);
    glVertex2f(9,11);
    glVertex2f(9,10);
    glEnd();
    //top black line 3
    glBegin(GL_LINE_LOOP);
    glVertex2f(9,10);
    glVertex2f(9,11);
    glVertex2f(9.5,10.8);
    glVertex2f(10.5,10.8);
    glVertex2f(11,11);
    glVertex2f(11,10);
    glEnd();
    //top black line 4
    glBegin(GL_LINE_LOOP);
    glVertex2f(11,10);
    glVertex2f(11,11);
    glVertex2f(11.5,10.8);
    glVertex2f(12.5,10.8);
    glVertex2f(13,11);
    glVertex2f(13,10);
    glEnd();
    //top black line 5
    glBegin(GL_LINE_LOOP);
    glVertex2f(13,10);
    glVertex2f(13,11);
    glVertex2f(13.5,10.8);
    glVertex2f(14.5,10.8);
    glVertex2f(15,11);
    glVertex2f(15,10);
    glEnd();
    //top black line 6
    glBegin(GL_LINE_LOOP);
    glVertex2f(15,10);
    glVertex2f(15,11);
    glVertex2f(15.5,10.8);
    glVertex2f(16.5,10.8);
    glVertex2f(17,11);
    glVertex2f(17,10);
    glEnd();
}

/* TO DRAW ICEBERG */
void ice()
{
    glPushMatrix();
    glTranslated(300,50,0.0);
    glScaled(10,10,0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    //glBegin(GL_LINE_LOOP);
    glVertex2f(7.5,2.5);
    glVertex2f(8,3);
    glVertex2f(8.25,3.5);
    glVertex2f(11.5,18.5);
    glVertex2f(12,19);
    glVertex2f(12.5,19.5);
    glVertex2f(15,19.5);
    glVertex2f(15.5,19.5);
    glVertex2f(17.5,18.5);
    glVertex2f(18.5,3.5);
    glVertex2f(19,3);
    glVertex2f(19.5,2.5);
    glEnd();
    glPopMatrix();
}



void myinit()
{
    glClearColor( 0, 0, 0, 0);
    //glClearColor(1.0f,1.0f,1.0f,1.0f);//specify clear values for color buffers
    glColor3f(1.0,0.0,0.0);//specifies colors(RGB)
    glPointSize(1.0);//specifies diameter of point
    glMatrixMode(GL_PROJECTION);//specifies the current matrix
    glLoadIdentity();//replaces current matrix with identity matrix
    gluOrtho2D(0.0,999.0,0.0,799.0);//defines 2d orthografic projection matrix
}

//glut main func
int main(int argc, char* argv[])
{
    glutInit(&argc, argv);//initalize glut library
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//sets the initial display mode
    glutInitWindowSize(1366.0,768.0);//sets initial window size
    glutInitWindowPosition(0,0);//sets initial window position
    glutCreateWindow("The Sinking ship using OpenGL");//create a top level window
    glutDisplayFunc(display);//sets display callback for current window
    myinit();
    glutKeyboardFunc(mykeyboard);
    glutMouseFunc(mymouse);
    glutTimerFunc(100,update,0);//sets timer callback
    glutMainLoop();//enters glut event processing loop
    return 0;
}
