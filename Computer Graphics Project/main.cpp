#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <windows.h>
#include <mmsystem.h>
#include <iostream>

///ANIK-20-42780-1
using namespace std;

float run = 0.0;
float run1 = 0.0;
float run2 = 0.0;
float run3 = 0.0;
float tri = 0.0;
float _nt = 0.0;
bool day=true;

bool onOff;
bool frd = false;
bool bck = false;

bool night = false;
//bool sun=false;


static float carmove = 0;



/*void delay(){
    for(int i=0;i<100000000;i++);
}*/
void circle(GLfloat rx, GLfloat ry, GLfloat x, GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI= 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for(i=0;i<100;i++)
    {
        angle = 2 * PI * i/100;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)* ry));
    }
    glEnd();
}




void Moving_car()
{
    carmove  -= 2 ;
    if (carmove <-1700){///ANIK 20-42780-1

        carmove = 1200;
    }
    glutPostRedisplay();
}




void car()
{
    glBegin(GL_QUADS);
    //front face
    glColor3ub(150, 0, 10);
    //top
    glVertex2d(402,396);
    glVertex2d(510,396);
    glVertex2d(498,432);
    glVertex2d(414,432);
    //front
    glVertex2d(402,396);
    glVertex2d(402,348);
    glVertex2d(510,348);
    glVertex2d(510,396);



    //front plate
    glColor3ub(225, 255, 0);
    glVertex2d(404.4,360);
    glVertex2d(404.4,300);
    glVertex2d(507.6,300);
    glVertex2d(507.6,360);


///ANIK 20-42780-1

    //front plate small for aesthetics



    glEnd();
    //top plate front face
    glColor3f(1,0,0);
    circle(6,8.4,414,384);
    circle(6,8.4,498,384);
    //front plate
    glColor3f(1,1,1);
    circle(6,8.4,438,330);



    circle(6,8.4,477.6,330);



}
///ANIK 20-42780-1

///OISHI 20-43067-1

void Road()
{
   glColor3f(0, 0, 0);
    glColor3ub(0,0,0);


///ANIK 20-42780-1


    glBegin(GL_POLYGON);
    glColor3ub(255, 255,255);
    glVertex2d(400,-350);
    glVertex2d(400,1200);
    glVertex2d(406,1200);
    glVertex2d(406,-350);
    glEnd();




   glBegin(GL_POLYGON);
    glColor3ub(255, 255,255);
    glVertex2d(528,-350);
    glVertex2d(519.6,-350);
    glVertex2d(516,1200);
    glVertex2d(523.2,1200);
    glEnd();



glBegin(GL_LINES);
    glColor3ub(255, 255,255);
    glVertex2d(456,-360);
    glVertex2d(456,-300);



    glEnd();



    glBegin(GL_LINES);
    glColor3ub(255, 255,255);
    glVertex2d(456,-240);
    glVertex2d(456,-180);



    glEnd();



 glBegin(GL_LINES);
    glColor3ub(255, 255,255);
    glVertex2d(456,-120);
    glVertex2d(456,-60);



    glEnd();





glBegin(GL_LINES);
    glColor3ub(255, 255,255);
    glVertex2d(456,0);
    glVertex2d(456,60);



    glEnd();




glBegin(GL_LINES);
    glColor3ub(255, 255,255);
    glVertex2d(456,120);
    glVertex2d(456,180);



    glEnd();



glBegin(GL_LINES);
    glColor3ub(255, 255,255);
    glVertex2d(456,240);
    glVertex2d(456,300);



    glEnd();



glBegin(GL_LINES);
    glColor3ub(255, 255,255);
    glVertex2d(456,360);
    glVertex2d(456,420);



    glEnd();



    glBegin(GL_LINES);
    glColor3ub(255, 255,255);
    glVertex2d(456,480);
    glVertex2d(456,540);



    glEnd();



    glBegin(GL_LINES);
    glColor3ub(255, 255,255);
    glVertex2d(456,600);
    glVertex2d(456,660);



    glEnd();



    glBegin(GL_LINES);
    glColor3ub(255, 255,255);
    glVertex2d(456,720);
    glVertex2d(456,780);



    glEnd();



     glBegin(GL_LINES);
    glColor3ub(255, 255,255);
    glVertex2d(456,840);
    glVertex2d(456,900);



    glEnd();



    glBegin(GL_LINES);
    glColor3ub(255, 255,255);
    glVertex2d(456,960);
    glVertex2d(456,1020);



    glEnd();



    glBegin(GL_LINES);
    glColor3ub(255, 255,255);
    glVertex2d(456,1080);
    glVertex2d(456,1140);



    glEnd();









}



void Lamppost()
{
    glBegin(GL_QUADS);

        glColor3ub(68, 43, 2);
        glVertex2d(560, -20);
        glVertex2d(564, -340);
        glVertex2d(542, -340);
        glVertex2d(538, -20);
glEnd();
glColor3f(1,0,0);
    circle(10,14,600,-30);
    glColor3f(255,255,0);
    circle(10,14,550,-30);
    glColor3f(0,1,0);
    circle(10,14,500,-30);
    glColor3ub(68, 83, 2);
    circle(30,30,550,-350);
}

///OISHI 20-43067-1



void show()
{
    Lamppost();
}

///ANIK 20-42780-1


void Mini_building()

{
glColor3d(1,0.5,0);
glBegin(GL_POLYGON);
glVertex2f(600.0f, 800.0f);
glVertex2f(600.0f, 0.0f);
glVertex2f(900.0f, 0.0f);
glVertex2f(900.0f, 800.0f);
glEnd();




glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(610.0f, 340.0f);
glVertex2f(610.0f, 260.0f);
glVertex2f(670.0f, 260.0f);
glVertex2f(670.0f, 340.0f);
glEnd();



glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(610.0f, 440.0f);
glVertex2f(610.0f, 360.0f);
glVertex2f(670.0f, 360.0f);
glVertex2f(670.0f, 440.0f);
glEnd();



glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(680.0f, 340.0f);
glVertex2f(680.0f, 260.0f);
glVertex2f(740.0f, 260.0f);
glVertex2f(740.0f, 340.0f);
glEnd();



glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(680.0f, 440.0f);
glVertex2f(680.0f, 360.0f);
glVertex2f(740.0f, 360.0f);
glVertex2f(740.0f, 440.0f);
glEnd();





glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(610.0f, 240.0f);
glVertex2f(610.0f, 160.0f);
glVertex2f(670.0f, 160.0f);
glVertex2f(670.0f, 240.0f);
glEnd();



glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(680.0f, 240.0f);
glVertex2f(680.0f, 160.0f);
glVertex2f(740.0f, 160.0f);
glVertex2f(740.0f, 240.0f);
glEnd();
}
///ANIK 20-42780-1

///OISHI 20-43067-1


///circle
void circle(float x){
	for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=x;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
}

void displayCircleSide(){
	for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=75.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
}

void displayCircleMiddle(){
	for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=165.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
}

void treeCircle(float x){
	for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=x;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }
}

///amLeftPillar

void amLeftPillar(){
glColor3d(1.0,0.7,0.7);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Declaring Drawing Space
glPushMatrix();
glTranslatef( -880.0f,150.0f, 0.0f); //starting position of amLeftPillar

glBegin(GL_POLYGON);
glVertex2f(0.0f, 300.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(150.0f, 0.0f);
glVertex2f(150.0f, 300.0f);
glEnd();

glTranslatef(75.0f, 320.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(1.0,0.7,0.7);
displayCircleSide();
glEnd();

glTranslatef( -75.0f,-300.0f, 0.0f);
glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(10.0f, 240.0f);
glVertex2f(10.0f, 160.0f);
glVertex2f(70.0f, 160.0f);
glVertex2f(70.0f, 240.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(80.0f, 240.0f);
glVertex2f(80.0f, 160.0f);
glVertex2f(140.0f, 160.0f);
glVertex2f(140.0f, 240.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(10.0f, 140.0f);
glVertex2f(10.0f, 60.0f);
glVertex2f(70.0f, 60.0f);
glVertex2f(70.0f, 140.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(80.0f, 140.0f);
glVertex2f(80.0f, 60.0f);
glVertex2f(140.0f, 60.0f);
glVertex2f(140.0f, 140.0f);
glEnd();

glTranslatef( 25.0f,200.0f, 0.0f);
glColor3d(1.0,0.7,0.7);
glBegin(GL_POLYGON);
glVertex2f(50.0f, 260.0f);
glVertex2f(60.0f, 160.0f);
glVertex2f(40.0f, 160.0f);
glEnd();

glTranslatef( -25.0f,-140.0f, 0.0f);
glColor3d(1.0,0.6,0.6);
glBegin(GL_POLYGON);
glVertex2f(-10.0f, 240.0f);
glVertex2f(-10.0f, 200.0f);
glVertex2f(160.0f, 200.0f);
glVertex2f(160.0f, 240.0f);
glEnd();

glPopMatrix();

//glutSwapBuffers();
}
///amRightPillar

void amRightPillar(){
glColor3d(1.0,0.7,0.7);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();
glTranslatef( -0.0f,150.0f, 0.0f);

glBegin(GL_POLYGON);
glVertex2f(0.0f, 300.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(150.0f, 0.0f);
glVertex2f(150.0f, 300.0f);
glEnd();

glTranslatef(75.0f, 320.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(1.0,0.7,0.7);
displayCircleSide();
glEnd();

glTranslatef( -75.0f,-300.0f, 0.0f);
glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(10.0f, 240.0f);
glVertex2f(10.0f, 160.0f);
glVertex2f(70.0f, 160.0f);
glVertex2f(70.0f, 240.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(80.0f, 240.0f);
glVertex2f(80.0f, 160.0f);
glVertex2f(140.0f, 160.0f);
glVertex2f(140.0f, 240.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(10.0f, 140.0f);
glVertex2f(10.0f, 60.0f);
glVertex2f(70.0f, 60.0f);
glVertex2f(70.0f, 140.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(80.0f, 140.0f);
glVertex2f(80.0f, 60.0f);
glVertex2f(140.0f, 60.0f);
glVertex2f(140.0f, 140.0f);
glEnd();

glTranslatef( 25.0f,200.0f, 0.0f);
glColor3d(1.0,0.7,0.7);
glBegin(GL_POLYGON);
glVertex2f(50.0f, 260.0f);
glVertex2f(60.0f, 160.0f);
glVertex2f(40.0f, 160.0f);
glEnd();

glTranslatef( -25.0f,-140.0f, 0.0f);
glColor3d(1.0,0.6,0.6);
glBegin(GL_POLYGON);
glVertex2f(-10.0f, 240.0f);
glVertex2f(-10.0f, 200.0f);
glVertex2f(160.0f, 200.0f);
glVertex2f(160.0f, 240.0f);
glEnd();

glPopMatrix();

//glutSwapBuffers();
}

///amLeftBuilding

void amLeftBuilding(){
glColor3d(1.0,0.7,0.7);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();
glTranslatef( -730.0f,150.0f, 0.0f);

glBegin(GL_POLYGON);
glVertex2f(0.0f, 270.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(200.0f, 0.0f);
glVertex2f(200.0f, 270.0f);
glEnd();

glTranslatef( 25.0f,-10.0f, 0.0f);
glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(10.0f, 240.0f);
glVertex2f(10.0f, 160.0f);
glVertex2f(70.0f, 160.0f);
glVertex2f(70.0f, 240.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(80.0f, 240.0f);
glVertex2f(80.0f, 160.0f);
glVertex2f(140.0f, 160.0f);
glVertex2f(140.0f, 240.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(10.0f, 140.0f);
glVertex2f(10.0f, 60.0f);
glVertex2f(70.0f, 60.0f);
glVertex2f(70.0f, 140.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(80.0f, 140.0f);
glVertex2f(80.0f, 60.0f);
glVertex2f(140.0f, 60.0f);
glVertex2f(140.0f, 140.0f);
glEnd();

glPopMatrix();
}

///amRightBuilding

void amRightBuilding(){
glColor3d(1.0,0.7,0.7);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();
glTranslatef( -200.0f,150.0f, 0.0f);

glBegin(GL_POLYGON);
glVertex2f(0.0f, 270.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(200.0f, 0.0f);
glVertex2f(200.0f, 270.0f);
glEnd();

glTranslatef( 25.0f,-10.0f, 0.0f);
glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(10.0f, 240.0f);
glVertex2f(10.0f, 160.0f);
glVertex2f(70.0f, 160.0f);
glVertex2f(70.0f, 240.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(80.0f, 240.0f);
glVertex2f(80.0f, 160.0f);
glVertex2f(140.0f, 160.0f);
glVertex2f(140.0f, 240.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(10.0f, 140.0f);
glVertex2f(10.0f, 60.0f);
glVertex2f(70.0f, 60.0f);
glVertex2f(70.0f, 140.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(80.0f, 140.0f);
glVertex2f(80.0f, 60.0f);
glVertex2f(140.0f, 60.0f);
glVertex2f(140.0f, 140.0f);
glEnd();

glPopMatrix();
}

///amMiddleBuilding

void amMiddleBuilding(){
glColor3d(1.0,0.7,0.7);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Declaring Drawing Space
glPushMatrix();
glTranslatef( -530.0f,150.0f, 0.0f); //starting position of amLeftPillar

glBegin(GL_POLYGON);
glVertex2f(0.0f, 500.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(330.0f, 0.0f);
glVertex2f(330.0f, 500.0f);
glEnd();

glTranslatef(165.0f, 485.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(1.0,0.7,0.7);
displayCircleMiddle();
glEnd();

glTranslatef( -110.0f,-370.0f, 0.0f);
glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(10.0f, 320.0f);
glVertex2f(10.0f, 60.0f);
glVertex2f(100.0f, 60.0f);
glVertex2f(100.0f, 320.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(120.0f, 320.0f);
glVertex2f(120.0f, 60.0f);
glVertex2f(210.0f, 60.0f);
glVertex2f(210.0f, 320.0f);
glEnd();



glTranslatef( 25.0f,200.0f, 0.0f);

glTranslatef( -90.0f,-60.0f, 0.0f);
glColor3d(1.0,0.6,0.6);
glBegin(GL_POLYGON);
glVertex2f(-10.0f, 260.0f);
glVertex2f(-10.0f, 200.0f);
glVertex2f(360.0f, 200.0f);
glVertex2f(360.0f, 260.0f);
glEnd();

glTranslatef( 105.0f,220.0f, 0.0f);
glColor3d(1.0,0.7,0.7);
glBegin(GL_POLYGON);
glVertex2f(60.0f, 360.0f);
glVertex2f(80.0f, 160.0f);
glVertex2f(40.0f, 160.0f);
glEnd();

glTranslatef( -115.0f,-80.0f, 0.0f);
glColor3d(1.0,0.7,0.7);
glBegin(GL_POLYGON);
glVertex2f(50.0f, 300.0f);
glVertex2f(60.0f, 160.0f);
glVertex2f(40.0f, 160.0f);
glEnd();

glTranslatef( 265.0f,0.0f, 0.0f);
glColor3d(1.0,0.7,0.7);
glBegin(GL_POLYGON);
glVertex2f(50.0f, 300.0f);
glVertex2f(60.0f, 160.0f);
glVertex2f(40.0f, 160.0f);
glEnd();

glPopMatrix();

//glutSwapBuffers();
}

///OISHI 20-43067-1

///BADHON 20-43171-1

///frontGrass

void frontGrass(){
glColor3d(0.4,0.8,0.4);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();
glTranslatef( -1200.0f,-400.0f, 0.0f);

glBegin(GL_POLYGON);
glVertex2f(0.0f, 700.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(1600.0f, 0.0f);
glVertex2f(1600.0f, 700.0f);
glEnd();

glPopMatrix();
}

///frontGrass2

void frontGrass2(){
glColor3d(0.4,0.8,0.4);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();
glTranslatef( -1200.0f,-400.0f, 0.0f);

glBegin(GL_POLYGON);
glVertex2f(2400.0f, 700.0f);
glVertex2f(2400.0f, 0.0f);
glVertex2f(1700.0f, 0.0f);
glVertex2f(1700.0f, 700.0f);
glEnd();


glPopMatrix();
}
///amFrontStair

void amFrontStair(){
glColor3d(0.4,0.1,0.1);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();
glTranslatef( -530.0f,200.0f, 0.0f);

glBegin(GL_POLYGON);
glVertex2f(0.0f, 90.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(330.0f, 0.0f);
glVertex2f(330.0f, 90.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(0.0f, 40.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(330.0f, 0.0f);
glVertex2f(330.0f, 40.0f);
glEnd();

glTranslatef( -10.0f,-70.0f, 0.0f);
glColor3d(0.4,0.1,0.1);
glBegin(GL_POLYGON);
glVertex2f(0.0f, 80.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(350.0f, 0.0f);
glVertex2f(350.0f, 80.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(0.0f, 40.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(350.0f, 0.0f);
glVertex2f(350.0f, 40.0f);
glEnd();

glTranslatef( -10.0f,-70.0f, 0.0f);
glColor3d(0.4,0.1,0.1);
glBegin(GL_POLYGON);
glVertex2f(0.0f, 80.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(370.0f, 0.0f);
glVertex2f(370.0f, 80.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(0.0f, 40.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(370.0f, 0.0f);
glVertex2f(370.0f, 40.0f);
glEnd();

glTranslatef( -10.0f,-70.0f, 0.0f);
glColor3d(0.4,0.1,0.1);
glBegin(GL_POLYGON);
glVertex2f(0.0f, 80.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(390.0f, 0.0f);
glVertex2f(390.0f, 80.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(0.0f, 40.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(390.0f, 0.0f);
glVertex2f(390.0f, 40.0f);
glEnd();

glTranslatef( -10.0f,-70.0f, 0.0f);
glColor3d(0.4,0.1,0.1);
glBegin(GL_POLYGON);
glVertex2f(0.0f, 80.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(410.0f, 0.0f);
glVertex2f(410.0f, 80.0f);
glEnd();

glColor3d(0.5,0.3,0.3);
glBegin(GL_POLYGON);
glVertex2f(0.0f, 40.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(410.0f, 0.0f);
glVertex2f(410.0f, 40.0f);
glEnd();

glPopMatrix();
}
///BADHON 20-43171-1


///ANIK 20-42780-1

///amLeftSideTree

void amLSTree(){
glColor3d(0.4,0.1,0.1);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();
glTranslatef( -1080.0f,160.0f, 0.0f);

glBegin(GL_POLYGON);
glVertex2f(0.0f, 210.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(50.0f, 0.0f);
glVertex2f(50.0f, 210.0f);
glEnd();

glTranslatef(30.0f, 340.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(0.0,0.4,0.0);
treeCircle(135.0f);
glEnd();

glTranslatef(30.0f, 40.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(0.0,0.4,0.0);
treeCircle(135.0f);
glEnd();

glTranslatef(-80.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(0.0,0.4,0.0);
treeCircle(135.0f);
glEnd();

glTranslatef(40.0f, 60.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(0.0,0.4,0.0);
treeCircle(135.0f);
glEnd();

glPopMatrix();
}

///Building Side Tree


void amBSTree(){
glColor3d(0.4,0.1,0.1);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();
glTranslatef( 1050.0f,160.0f, 0.0f);

glBegin(GL_POLYGON);
glVertex2f(0.0f, 210.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(50.0f, 0.0f);
glVertex2f(50.0f, 210.0f);
glEnd();

glTranslatef(30.0f, 340.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(0.0,0.4,0.0);
treeCircle(135.0f);
glEnd();

glTranslatef(30.0f, 40.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(0.0,0.4,0.0);
treeCircle(135.0f);
glEnd();

glTranslatef(-80.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(0.0,0.4,0.0);
treeCircle(135.0f);
glEnd();

glTranslatef(40.0f, 60.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(0.0,0.4,0.0);
treeCircle(135.0f);
glEnd();

glPopMatrix();
}

///ANIK 20-42780-1

///BADHON 20-43171-1

///shortTree1

void shortTree1(){
glColor3d(0.4,0.1,0.1);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();
glTranslatef( -1000.0f,-40.0f, 0.0f);

glBegin(GL_POLYGON);
glVertex2f(0.0f, 100.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(30.0f, 0.0f);
glVertex2f(30.0f, 100.0f);
glEnd();

glTranslatef(15.0f, 120.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(0.0,0.4,0.0);
treeCircle(55.0f);
glEnd();

glPopMatrix();
}

///shortTree2

void shortTree2(){
glColor3d(0.4,0.1,0.1);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();
glTranslatef( -850.0f,-40.0f, 0.0f);

glBegin(GL_POLYGON);
glVertex2f(0.0f, 100.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(30.0f, 0.0f);
glVertex2f(30.0f, 100.0f);
glEnd();

glTranslatef(15.0f, 120.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(0.0,0.4,0.0);
treeCircle(55.0f);
glEnd();

glPopMatrix();
}

///shortTree3

void shortTree3(){
glColor3d(0.4,0.1,0.1);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();
glTranslatef( -700.0f,-40.0f, 0.0f);

glBegin(GL_POLYGON);
glVertex2f(0.0f, 100.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(30.0f, 0.0f);
glVertex2f(30.0f, 100.0f);
glEnd();

glTranslatef(15.0f, 120.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(0.0,0.4,0.0);
treeCircle(55.0f);
glEnd();

glPopMatrix();
}

///shortTree4

void shortTree4(){
glColor3d(0.4,0.1,0.1);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();
glTranslatef( -50.0f,-40.0f, 0.0f);

glBegin(GL_POLYGON);
glVertex2f(0.0f, 100.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(30.0f, 0.0f);
glVertex2f(30.0f, 100.0f);
glEnd();

glTranslatef(15.0f, 120.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(0.0,0.4,0.0);
treeCircle(55.0f);
glEnd();

glPopMatrix();
}

float _move = 0.0f;
float _move2=0.0f;
float _movecloud2=0.0f;
float _movecloud3=0.0f;
float _movesun=0.0f;
float _angle1 = 0.0f;
float a=-1.0;
float b=-50;

void DrawCircle(float cx, float cy, float r, int num_segments) {



    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i < num_segments; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get current angle



        float x = r * cosf(theta);//calculate x
        float y = r * sinf(theta);//calculate y



        glVertex2f(x + cx, y + cy);//output vertex



    }
    glEnd();
    glFlush();
}
///BADHON 20-43171-1

///ANIK 20-42780-1

void updateboat1(int value) {

    _move += .2;
    if(_move > 60)
    {
        _move = -60;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(80, updateboat1, 0); //Notify GLUT to call update again in 25 milliseconds
}


void updatecloud2(int value) {

    _movecloud2 += .2;
    if(_movecloud2 > 60)
    {
        _movecloud2 = -60;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(80, updatecloud2, 0); //Notify GLUT to call update again in 25 milliseconds
}

void updateboat2(int value) {

    _move2 -= .2;
    if(_move2 < -80.0)
    {
        _move2 = 60.0;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(30, updateboat2, 0); //Notify GLUT to call update again in 25 milliseconds
}


void updatecloud3(int value) {

    _movecloud3 -= .2;
    if(_movecloud3 < -80.0)
    {
        _movecloud3 = 60.0;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(80, updatecloud3, 0); //Notify GLUT to call update again in 25 milliseconds
}


void updatesun(int value) {

    _movesun -= .02;
    if(_movesun < -30)
    {
        _movesun =43;

    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(80, updatesun, 0); //Notify GLUT to call update again in 25 milliseconds
}




void boat2()
{
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    gluOrtho2D(-40,40,-40,40); //Reset the drawing perspective
    glPushMatrix();

	glTranslatef(_move2, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(0,255,0);
	glVertex2f(0.0f,-39.0f);
	glVertex2f(9.0f,-39.0f);
    glVertex2f(14.0f,-34.0f);
	glVertex2f(-5.0f,-34.0f);  // x, y

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,0,0);
	glVertex2f(-5.0f,-33.0f);
	glVertex2f(5.0f,-33.0f);
    glVertex2f(5.0f,-26.0f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,0,0);
	glVertex2f(6.0f,-27.0f);
	glVertex2f(6.0f,-33.0f);
	glVertex2f(13.0f,-33.0f);


	glEnd();
glPopMatrix();

}


void boat1()
{
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    gluOrtho2D(-40,40,-40,40); //Reset the drawing perspective
    glPushMatrix();
	glTranslatef(_move, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(0,255,0);
	glVertex2f(-20.0f,-32.0f);
	glVertex2f(-12.0f,-32.0f);
    glVertex2f(-8.0f,-27.0f);
	glVertex2f(-24.0f,-27.0f);  // x, y

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,0,0);
	glVertex2f(-15.0f,-26.0f);
	glVertex2f(-9.0f,-26.0f);
    glVertex2f(-15.0f,-18.5f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,0,0);
	glVertex2f(-22.0f,-26.0f);
	glVertex2f(-15.5f,-26.0f);
    glVertex2f(-15.5f,-19.0f);

	glEnd();
	glPopMatrix();


}


void cloud1()
{
    glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-40,40,-40,40); //Reset the drawing perspective
glPushMatrix();
	glTranslatef(_move, 0.0f, 0.0f);

    glColor3ub(255, 255, 255);
    DrawCircle(-26,34,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-24,35,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-24,33,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-22,35,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-22,33,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-20,34,3,200);
   glPopMatrix();
}



void cloud2()
{
    glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-40,40,-40,40); //Reset the drawing perspective
glPushMatrix();
	glTranslatef(_movecloud2, 0.0f, 0.0f);

    glColor3ub(255, 255, 255);
    DrawCircle(-12,34,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-10,35,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-8,33,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-6,35,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-4,33,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-2,34,3,200);
 glPopMatrix();
}

void cloud3()
{
    glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-40,40,-40,40); //Reset the drawing perspective
glPushMatrix();
	glTranslatef(_movecloud3, 0.0f, 0.0f);

    glColor3ub(255, 255, 255);
    DrawCircle(8,34,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(9,35,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(10,33,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(11,35,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(14,33,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(17,34,3,200);
   glPopMatrix();
}
///ANIK 20-42780-1


///OISHI 20-43067-1
void sun()
{
     glMatrixMode(GL_MODELVIEW);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-40,40,-40,40);
    glPushMatrix();
	glTranslatef(0.0f,_movesun, 0.0f);
    glColor3ub(255,255, 0);
    DrawCircle(35,35,3,200);
    glPopMatrix();
}

void water(){
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();

glBegin(GL_POLYGON);
	glColor3ub(46,155,209);
	glVertex2f(-1200.0f,-600.0f);
	glVertex2f(1200.0f,-600.0f);
	glVertex2f(1200.0f,-1200.0f);
	glVertex2f(-1200.0f,-1200.0f);
	glEnd();
}

void shortTree5(){
glColor3d(0.4,0.1,0.1);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();
glTranslatef( 100.0f,-40.0f, 0.0f);

glBegin(GL_POLYGON);
glVertex2f(0.0f, 100.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(30.0f, 0.0f);
glVertex2f(30.0f, 100.0f);
glEnd();

glTranslatef(15.0f, 120.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(0.0,0.4,0.0);
treeCircle(55.0f);
glEnd();

glPopMatrix();
}

///shortTree6

void shortTree6(){
glColor3d(0.4,0.1,0.1);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200);
glPushMatrix();
glTranslatef( 250.0f,-40.0f, 0.0f);

glBegin(GL_POLYGON);
glVertex2f(0.0f, 100.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(30.0f, 0.0f);
glVertex2f(30.0f, 100.0f);
glEnd();

glTranslatef(15.0f, 120.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3f(0.0,0.4,0.0);
treeCircle(55.0f);
glEnd();

glPopMatrix();
}

///amRightSideTree

void amRSTree(){
glColor3d(0.4,0.1,0.1);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200);
glPushMatrix();
glTranslatef( 300.0f,160.0f, 0.0f);

glBegin(GL_POLYGON);
glVertex2f(0.0f, 210.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(50.0f, 0.0f);
glVertex2f(50.0f, 210.0f);
glEnd();

glTranslatef(30.0f, 340.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3f(0.0,0.4,0.0);
treeCircle(135.0f);
glEnd();

glTranslatef(30.0f, 40.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3f(0.0,0.4,0.0);
treeCircle(135.0f);
glEnd();

glTranslatef(-80.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3f(0.0,0.4,0.0);
treeCircle(135.0f);
glEnd();

glTranslatef(40.0f, 60.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3f(0.0,0.4,0.0);
treeCircle(135.0f);
glEnd();

glPopMatrix();
}

void Road2(){
glBegin(GL_QUADS);
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200);
glPushMatrix();
glColor3ub(0,0,0);

glVertex2i(400,300);
glVertex2i(500,300);
glVertex2i(500,-600);
glVertex2i(400,-600);

glColor3ub(152, 154, 156);

glVertex2i(445,200);
glVertex2i(455,200);
glVertex2i(455,300);
glVertex2i(445,300);

glColor3ub(152, 154, 156);
glVertex2i(445,50);
glVertex2i(455,50);
glVertex2i(455,170);
glVertex2i(445,170);

glColor3ub(152, 154, 156);
glVertex2i(445,-100);
glVertex2i(455,-100);
glVertex2i(455, 20);
glVertex2i(445, 20);

glColor3ub(152, 154, 156);
glVertex2i(445,-250);
glVertex2i(455,-250);
glVertex2i(455, -130);
glVertex2i(445, -130);

glColor3ub(152, 154, 156);
glVertex2i(445,-400);
glVertex2i(455,-400);
glVertex2i(455, -280);
glVertex2i(445, -280);

glColor3ub(152, 154, 156);
glVertex2i(400,-400);
glVertex2i(405,-400);
glVertex2i(405, 300);
glVertex2i(400, 300);

glColor3ub(152, 154, 156);
glVertex2i(495,-400);
glVertex2i(500,-400);
glVertex2i(500, 300);
glVertex2i(495, 300);



glEnd();
}


void Road1(){
glBegin(GL_QUADS);
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200);
glPushMatrix();
glColor3ub(0,0,0);

glVertex2i(-1200,-400);
glVertex2i(1200,-400);
glVertex2i(1200,-600);
glVertex2i(-1200,-600);

glColor3ub(152, 154, 156);

glVertex2i(-1200,-405);
glVertex2i(405,-405);
glVertex2i(405,-400);
glVertex2i(-1200,-400);

glVertex2i(495,-405);
glVertex2i(1200,-405);
glVertex2i(1200,-400);
glVertex2i(495,-400);

glVertex2i(-1200,-600);
glVertex2i(1200,-600);
glVertex2i(1200,-595);
glVertex2i(-1200,-595);

glVertex2i(-1200,-500);
glVertex2i(-1140,-500);
glVertex2i(-1140,-490);
glVertex2i(-1200,-490);

glVertex2i(-1110,-500);
glVertex2i(-1010,-500);
glVertex2i(-1010,-490);
glVertex2i(-1110,-490);

glVertex2i(-980,-500);
glVertex2i(-880,-500);
glVertex2i(-880,-490);
glVertex2i(-980,-490);

glVertex2i(-850,-500);
glVertex2i(-750,-500);
glVertex2i(-750,-490);
glVertex2i(-850,-490);

glVertex2i(-720,-500);
glVertex2i(-620,-500);
glVertex2i(-620,-490);
glVertex2i(-720,-490);

glVertex2i(-590,-500);
glVertex2i(-490,-500);
glVertex2i(-490,-490);
glVertex2i(-590,-490);

glVertex2i(-460,-500);
glVertex2i(-360,-500);
glVertex2i(-360,-490);
glVertex2i(-460,-490);

glVertex2i(-330,-500);
glVertex2i(-230,-500);
glVertex2i(-230,-490);
glVertex2i(-330,-490);

glVertex2i(-200,-500);
glVertex2i(-100,-500);
glVertex2i(-100,-490);
glVertex2i(-200,-490);

glVertex2i(-70,-500);
glVertex2i(30,-500);
glVertex2i(30,-490);
glVertex2i(-70,-490);

glVertex2i(60,-500);
glVertex2i(160,-500);
glVertex2i(160,-490);
glVertex2i(60,-490);

glVertex2i(190,-500);
glVertex2i(290,-500);
glVertex2i(290,-490);
glVertex2i(190,-490);

glVertex2i(320,-500);
glVertex2i(420,-500);
glVertex2i(420,-490);
glVertex2i(320,-490);

glVertex2i(450,-500);
glVertex2i(550,-500);
glVertex2i(550,-490);
glVertex2i(450,-490);

glVertex2i(580,-500);
glVertex2i(680,-500);
glVertex2i(680,-490);
glVertex2i(580,-490);

glVertex2i(710,-500);
glVertex2i(810,-500);
glVertex2i(810,-490);
glVertex2i(710,-490);

glVertex2i(840,-500);
glVertex2i(940,-500);
glVertex2i(940,-490);
glVertex2i(840,-490);

glVertex2i(970,-500);
glVertex2i(1070,-500);
glVertex2i(1070,-490);
glVertex2i(970,-490);

glVertex2i(1100,-500);
glVertex2i(1200,-500);
glVertex2i(1200,-490);
glVertex2i(1100,-490);

glVertex2i(1230,-500);
glVertex2i(1270,-500);
glVertex2i(1270,-490);
glVertex2i(1230,-490);



glEnd();

}

void update (int value)
{

    run += 1.5f;
    if (run > 1200)
    {
        run -= 1700;
    }


    run1 += 1.0f;

    if (run1 > 600)
    {

        run1 -= 1200;
    }

        run2 += 1.0f;

    if (run2 > 800)
    {

        run2 -= 1200;
    }

        run3 += 1.0f;

    if (run3 > 1000)
    {

        run3 -= 1300;
    }




    if (onOff)
    {
        tri += 2.5f;

        if (tri > 1600)
        {

            tri = 1300;
        }

    }

    glutPostRedisplay();
    glutTimerFunc(25, update, 0);

}

void ShortTree3(){
glColor3d(0.4,0.1,0.1);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();
glTranslatef( -1000.0f,-40.0f, 0.0f);

glBegin(GL_POLYGON);
glVertex2f(2070.0f, 100.0f);
glVertex2f(2070.0f, 0.0f);
glVertex2f(2100.0f, 0.0f);
glVertex2f(2100.0f, 100.0f);
glEnd();

glTranslatef(2085.0f, 120.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(0.0,0.4,0.0);
treeCircle(55.0f);
glEnd();

glPopMatrix();
}

void ShortTree4(){
glColor3d(0.4,0.1,0.1);

glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();
glTranslatef( -1000.0f,-40.0f, 0.0f);

glBegin(GL_POLYGON);
glVertex2f(1885.0f, -120.0f);
glVertex2f(1885.0f, -220.0f);
glVertex2f(1915.0f, -220.0f);
glVertex2f(1915.0f, -120.0f);
glEnd();

glTranslatef(1900.0f, -90.0f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(0.0,0.4,0.0);
treeCircle(55.0f);
glEnd();

glPopMatrix();
}

///Sun

void sunView(){
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();
glTranslatef( -650.0f,950.0f, 0.0f);

glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(1.0,1.0,0.0);
circle(65.0f);
glEnd();

glPopMatrix();
}

///Moon

void moonView(){
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
gluOrtho2D(-1200,1200,-1200,1200); //Reset the drawing perspective
glPushMatrix();
glTranslatef( -50.0f,1000.0f, 0.0f);

glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3f(1.0,1.0,1.0);
circle(65.0f);
glEnd();

glPopMatrix();
}

void keyb(unsigned char key, int x, int y) {


    switch (key) {

        case 'd':
            day=true;
            glClearColor(.40, .110, 1.0, 0.0);
            glutPostRedisplay();
            break;

        case 'D':
            day=true;
            glClearColor(.40, .110, 1.0, 0.0);
            glutPostRedisplay();
            break;

        case 'n':
            day=false;
            glClearColor(0.0,0.0,0.0,1.0);
            glutPostRedisplay();
            break;

        case 'N':
            day=false;
            glClearColor(0.0,0.0,0.0,1.0);
            glutPostRedisplay();
            break;
    }
}


void display(void)
{
	//glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);




    Road2();
    Road1();
    Moving_car();
       for(int i =0; i<1;i++){
            glPushMatrix();
            glTranslatef(carmove+i,0,0);
            glTranslatef(0,-840,0);
            car();
            glPopMatrix();
        }
	//sun();
	if(day){
    sunView();
    }else{
    moonView();
    }
    water();

    cloud1();
    cloud2();
    cloud3();
    boat1();
    boat2();

    frontGrass();
    frontGrass2();
    ShortTree3();
    ShortTree4();

///Building View
    amLeftPillar();
    amRightPillar();
    amLeftBuilding();
    amRightBuilding();
    amMiddleBuilding();
    amFrontStair();
///sideView
    amLSTree();
    amRSTree();
    shortTree1();
    shortTree2();
    shortTree3();
    shortTree4();
    shortTree5();
    shortTree6();

    //Road();

Mini_building();
amBSTree();
   show();

glutSwapBuffers();


glFlush ();
}





int main(int argc, char** argv)
{
    cout << endl << "Ahsan Manjil" << endl << endl;

    cout << "Press N : For Night Mode" << endl;
    cout << "Press D : For Day Mode" << endl << endl<<endl;

    cout << "          COMPUTER GRAPHICS [O]           " << endl ;
    cout << "  Project Submission [ FALL 2021-2022 ]" << endl << endl;
    cout << "Submitted To : NAZMUS SAKIB SHAN " << endl << endl;
    cout << "Submitted By," << endl ;
    cout << "BADHON SUTRADHAR     : 20-43171-1" << endl;
    cout << "ANIK DEBNATH         : 20-42780-1" << endl;
    cout << "OISHI SINGH          : 20-43067-1" << endl;


    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB );
    glutInitWindowSize (1200, 1200);
    glutCreateWindow ("Ahsan Manjil");
    glClearColor(.40, .110, 1.0, 0.0);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyb);


    glutTimerFunc(80, updateboat1, 0);
	glutTimerFunc(30, updateboat2, 0);
	glutTimerFunc(80, updatecloud2, 0);
	glutTimerFunc(80, updatecloud3, 0);
    glutTimerFunc(5, update, 0);
    glutMainLoop();
return 0;
}
///OISHI 20-43067-1
