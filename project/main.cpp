#include<cstdio>
#include <windows.h>
#include<math.h>
#include <vector>
#include <cstdlib>
# define PI 3.14159265358979323846
#include <GL/gl.h>
#include <GL/glut.h>
#include<MMSystem.h>

//for car
GLfloat position = 0.0;
GLfloat speed = 0.02;
void update(int value){
    if( position >1.5)
        position = -1.2f;
    position += speed;


    glutPostRedisplay();
    glutTimerFunc(200,update,0);
    //rushHour;
}

//for car
GLfloat position1 = 0.0;
GLfloat speed1 = 0.02;
void update1(int value){
    if( position1 <-1.5)
        position1 = 1.2f;
    position1 -= speed1;
    glutPostRedisplay();
    glutTimerFunc(200,update1,0);
    //rushHour();
}
//sun spreed
GLfloat position2 = 0.0;
GLfloat speed2 = 0.01;
void update2(int value){
    if( position2 <-1.0)
        position2 = 1.2f;
    position2 -= speed2;
    glutPostRedisplay();
    glutTimerFunc(500,update2,0);
    //rushHour();
}

//sun spreed
GLfloat position8 = 0.0;
GLfloat speed8 = 0.01;
void update8(int value){
    if( position8 >1.0)
        position8 = -1.2f;
    position8 += speed8;
    glutPostRedisplay();
    glutTimerFunc(500,update8,0);
    //rushHour();
}


//plane angle
GLfloat position3 = 0.0;
GLfloat speed3 = 0.05;
void update3(int value){
    if( position3 >1.5)
        position3 = -1.2f;
    position3 += speed3;
    glutPostRedisplay();
    glutTimerFunc(100,update3,0);

}

//plane angle 2
GLfloat position6= 0.0;
GLfloat speed6 = 0.05;
void update6(int value){
    if( position6 <-1.5)
        position6 = 1.2f;
    position6 -= speed6;
    glutPostRedisplay();
    glutTimerFunc(100,update6,0);

}

//for cloud
GLfloat position4 = 0.0;
GLfloat speed4 = 0.02;
void update4(int value){
    if( position4 >1.5)
        position4 = -1.2f;
    position4 += speed4;
    glutPostRedisplay();
    glutTimerFunc(400,update4,0);
    //rushHour();
}

//for cloud
GLfloat position5 = 0.0;
GLfloat speed5 = 0.02;
void update5(int value){
    if( position5 <-1.5)
        position5 = 1.2f;
    position5 -= speed5;
    glutPostRedisplay();
    glutTimerFunc(400,update5,0);
    //rushHour();
}
///For Rain///----------------------------------------
GLfloat position7= 0.0;
GLfloat speed7 = 0.05;
void update7(int value){
    if( position7 <-2.0)
        position7 = 1.0f;
    position7 -= speed7;
    glutPostRedisplay();
    glutTimerFunc(100,update7,0);

}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}



 void sky()//------------------------------sky-------------
 {
    glBegin(GL_POLYGON);
	glColor3ub(38, 154, 214);
	glVertex2f(-1.0f, -.3f);
	glVertex2f(1.0f, -.3f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glEnd();
 }


 //sun-------------------sun----------sun---------sun----------sun---------------sun-
 void sun()
 {

 int i;
 int triangleAmount = 20;
    GLfloat x1=.9f; GLfloat y1=.9f; GLfloat r =.2f;
	//GLfloat radius = 0.8f; //radius
	GLfloat twicePie = 2.0f * PI;
        glColor3ub( 241, 196, 15);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle

		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(

		            x1 + (r * cos(i *  twicePie / triangleAmount)),
			    y1 + (r * sin(i * twicePie / triangleAmount))
			);
		}
	glEnd();

 }


 void sun2()
 {

 int i;
 int triangleAmount = 20;
    GLfloat x1=.9f; GLfloat y1=-.1f; GLfloat r =.2f;
	//GLfloat radius = 0.8f; //radius
	GLfloat twicePie = 2.0f * PI;
        glColor3ub( 241, 196, 15);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle

		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(

		            x1 + (r * cos(i *  twicePie / triangleAmount)),
			    y1 + (r * sin(i * twicePie / triangleAmount))
			);
		}
	glEnd();

 }


    //sky cloud1----------sky cloud--------------sky cloud-------------sky cloud-----
void cloud1()
{
glPushMatrix();
glTranslatef(position4,0.0, 0.0f);
 int i;
 int triangleAmount = 20;
	GLfloat x=.5f; GLfloat y=.8f; GLfloat radius =.05f;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glPopMatrix();

}
    //sky cloud 2nd------------------sky cloud 2nd-------------------sky cloud 2nd-----
void cloud2()
{
glPushMatrix();
glTranslatef(position5,0.0f, 0.0f);
 int i;
 int triangleAmount = 20;
    GLfloat x2=-.5f; GLfloat y2=.8f; GLfloat ra =.05f;
    GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (ra * cos(i *  twicePi / triangleAmount)),
			    y2 + (ra * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a2=-.55f; GLfloat b2=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(a2, b2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a2 + (ra * cos(i *  twicePi / triangleAmount)),
			    b2 + (ra * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c2=-.45f; GLfloat d2=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(c2, d2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c2 + (ra * cos(i *  twicePi / triangleAmount)),
			    d2+ (ra * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e2=-.52f; GLfloat f2=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(e2, f2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e2 + (ra * cos(i *  twicePi / triangleAmount)),
			    f2+ (ra * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g2=-.6f; GLfloat h2=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(30, 217, 255);
		glVertex2f(g2, h2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g2 + (ra * cos(i *  twicePi / triangleAmount)),
			    h2+ (ra * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();
}

//birds------birds-----------birds------------birds---------birds----
void birds()
{
	 glPushMatrix();
    glTranslatef(position1,position, 0.0f);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.2f,0.8f);
    glVertex2f(0.18f,0.77f);

    glColor3ub(0,0,0);
    glVertex2f(0.18f,0.77f);
    glVertex2f(0.15f,0.79f);

    glColor3ub(0,0,0);
    glVertex2f(0.13f,0.8f);
    glVertex2f(0.11f,0.77f);

    glColor3ub(0,0,0);
    glVertex2f(0.11f,0.77f);
    glVertex2f(0.08f,0.79f);
  glEnd();
  glPopMatrix();
}


//river---------------------river--------------river---------river-----
void river()
 {
    glBegin(GL_QUADS);
    glColor3ub(0,179,149);
    glVertex2f(-1.0,-.55);
    glVertex2f(1.0,-.55);
    glVertex2f(1.0,-.06);
    glVertex2f(-1.0,-.06);
    glEnd();
 }
//footpath lower -------footpath lowe------------footpath lowe--------footpath lowe----------
void lower_footpath()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 73, 73);
    glVertex2f(-1.0,-.6);
    glVertex2f(1.0,-.6);
    glVertex2f(1.0,-.55);
    glVertex2f(-1.0,-.55);
    glEnd();
}


void ralling_lower()
{
     glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(1.0,-.5);
    glVertex2f(-1.0,-.5);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(1.0,-.5);
    glVertex2f(1.0,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.95,-.5);
    glVertex2f(0.95,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.9,-.5);
    glVertex2f(0.9,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.85,-.5);
    glVertex2f(0.85,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.8,-.5);
    glVertex2f(0.8,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.75,-.5);
    glVertex2f(0.75,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.7,-.5);
    glVertex2f(0.7,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.65,-.5);
    glVertex2f(0.65,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.6,-.5);
    glVertex2f(0.6,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.55,-.5);
    glVertex2f(0.55,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.5,-.5);
    glVertex2f(0.5,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.45,-.5);
    glVertex2f(0.45,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.4,-.5);
    glVertex2f(0.4,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.35,-.5);
    glVertex2f(0.35,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.3,-.5);
    glVertex2f(0.3,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.25,-.5);
    glVertex2f(0.25,-.55);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.2,-.5);
    glVertex2f(0.2,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.15,-.5);
    glVertex2f(0.15,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.1,-.5);
    glVertex2f(0.1,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.05,-.5);
    glVertex2f(0.05,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.00,-.5);
    glVertex2f(0.00,-.55);
	glEnd();
//--------------------------------
    glBegin(GL_LINES);

    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-1.0,-.5);
    glVertex2f(-1.0,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.95,-.5);
    glVertex2f(-0.95,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.9,-.5);
    glVertex2f(-0.9,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.85,-.5);
    glVertex2f(-0.85,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.8,-.5);
    glVertex2f(-0.8,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.75,-.5);
    glVertex2f(-0.75,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.7,-.5);
    glVertex2f(-0.7,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.65,-.5);
    glVertex2f(-0.65,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.6,-.5);
    glVertex2f(-0.6,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.55,-.5);
    glVertex2f(-0.55,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.5,-.5);
    glVertex2f(-0.5,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.45,-.5);
    glVertex2f(-0.45,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.4,-.5);
    glVertex2f(-0.4,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.35,-.5);
    glVertex2f(-0.35,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(-0.0f, 0.0f, 0.0f);
	glVertex2f(-.3,-.5);
    glVertex2f(-0.3,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(-0.0f, 0.0f, 0.0f);
	glVertex2f(-.25,-.5);
    glVertex2f(-0.25,-.55);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(-0.0f, 0.0f, 0.0f);
	glVertex2f(-.2,-.5);
    glVertex2f(-0.2,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.15,-.5);
    glVertex2f(-0.15,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.1,-.5);
    glVertex2f(-0.1,-.55);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.05,-.5);
    glVertex2f(-0.05,-.55);
	glEnd();
}


 //footpath upper ---------------footpath upper ---footpath upper ---
 void footpath_upper()
 {
     glBegin(GL_QUADS);
    glColor3ub(23, 32, 42);
    glVertex2f(-1.0,-.06);
    glVertex2f(1.0,-.06);
    glVertex2f(1.0,-.03);
    glVertex2f(-1.0,-.03);
    glEnd();
 }
    //field-------------------------field----------------field---------field------------------
  void field()
  {
    glBegin(GL_QUADS);
    glColor3ub(0,77,38);
    glVertex2f(-1.0,-.03);
    glVertex2f(1.0,-.03);
    glVertex2f(1.0,.05);
    glVertex2f(-1.0,.05);
    glEnd();
  }


//Building1------------Building1----------------Building1-----------Building1--------
void Building1()
{
    glBegin(GL_QUADS);
    glColor3ub(23, 52, 42);
    glVertex2f(.4,.05);
    glVertex2f(.75,.05);
    glVertex2f(.75,.63);
    glVertex2f(.4,.63);
    glEnd();
}

 void Building1_glass()
{
        //building 1-------

    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.42,.55);
    glVertex2f(.46,.55);
    glVertex2f(.46,.6);
    glVertex2f(.42,.6);
    glEnd();

//------------------
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.69,.07);
    glVertex2f(.72,.07);
    glVertex2f(.72,.12);
    glVertex2f(.69,.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.69,.15);
    glVertex2f(.72,.15);
    glVertex2f(.72,.2);
    glVertex2f(.69,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.69,.23);
    glVertex2f(.72,.23);
    glVertex2f(.72,.28);
    glVertex2f(.69,.28);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.69,.31);
    glVertex2f(.72,.31);
    glVertex2f(.72,.36);
    glVertex2f(.69,.36);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.69,.39);
    glVertex2f(.72,.39);
    glVertex2f(.72,.44);
    glVertex2f(.69,.44);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.69,.47);
    glVertex2f(.72,.47);
    glVertex2f(.72,.52);
    glVertex2f(.69,.52);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.69,.55);
    glVertex2f(.72,.55);
    glVertex2f(.72,.6);
    glVertex2f(.69,.6);
    glEnd();

//------------------

    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.56,.55);
    glVertex2f(.6,.55);
    glVertex2f(.6,.6);
    glVertex2f(.56,.6);
    glEnd();


}

 //Building2-----------Building2------------------Building2----Building2--------------
 void Building2()
 {
    glBegin(GL_QUADS);
    glColor3ub(23, 32, 42);
    glVertex2f(.3,.05);
    glVertex2f(.6,.05);
    glVertex2f(.6,.56);
    glVertex2f(.3,.56);
    glEnd();

}

    //Building3------------Building3-----------Building3----------Building3---------
void Building3()
{
    glBegin(GL_QUADS);
    glColor3ub(23, 32, 42);
    glVertex2f(-.05,.05);
    glVertex2f(.27,.05);
    glVertex2f(.27,.7);
    glVertex2f(-.05,.7);
    glEnd();
}

//Building4--------Building4------------Building4-------------Building4--------------

void Building4()
{
    glBegin(GL_QUADS);
    glColor3ub(0,77,51);
    glVertex2f(-.0,.05);
    glVertex2f(-.3,.05);
    glVertex2f(-.3,.4);
    glVertex2f(-.0,.4);
    glEnd();
}

    //Building5--------Building5------------Building5-------------Building5--------------
void building5()
{
    glBegin(GL_QUADS);
    glColor3ub(23, 32, 42);
    glVertex2f(-.33,.05);
    glVertex2f(-.7,.05);
    glVertex2f(-.7,.6);
    glVertex2f(-.33,.6);
    glEnd();
}
void building_window()
{




    //building2
    glBegin(GL_QUADS);
    glColor3ub(153,51,0);
    glVertex2f(.3,.08);
    glVertex2f(.6,.08);
    glVertex2f(.6,.12);
    glVertex2f(.3,.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153,51,0);
    glVertex2f(.3,.16);
    glVertex2f(.6,.16);
    glVertex2f(.6,.2);
    glVertex2f(.3,.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153,51,0);
    glVertex2f(.3,.24);
    glVertex2f(.6,.24);
    glVertex2f(.6,.28);
    glVertex2f(.3,.28);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153,51,0);
    glVertex2f(.3,.32);
    glVertex2f(.6,.32);
    glVertex2f(.6,.36);
    glVertex2f(.3,.36);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153,51,0);
    glVertex2f(.3,.4);
    glVertex2f(.6,.4);
    glVertex2f(.6,.44);
    glVertex2f(.3,.44);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153,51,0);
    glVertex2f(.3,.48);
    glVertex2f(.6,.48);
    glVertex2f(.6,.52);
    glVertex2f(.3,.52);
    glEnd();

    //building 3
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.2,.07);
    glVertex2f(.24,.07);
    glVertex2f(.24,.12);
    glVertex2f(.2,.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.2,.15);
    glVertex2f(.24,.15);
    glVertex2f(.24,.2);
    glVertex2f(.2,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.2,.23);
    glVertex2f(.24,.23);
    glVertex2f(.24,.28);
    glVertex2f(.2,.28);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.2,.31);
    glVertex2f(.24,.31);
    glVertex2f(.24,.36);
    glVertex2f(.2,.36);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.2,.39);
    glVertex2f(.24,.39);
    glVertex2f(.24,.44);
    glVertex2f(.2,.44);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.2,.47);
    glVertex2f(.24,.47);
    glVertex2f(.24,.52);
    glVertex2f(.2,.52);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.2,.55);
    glVertex2f(.24,.55);
    glVertex2f(.24,.6);
    glVertex2f(.2,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.2,.63);
    glVertex2f(.24,.63);
    glVertex2f(.24,.68);
    glVertex2f(.2,.68);
    glEnd();
    //--------------------
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.1,.07);
    glVertex2f(.14,.07);
    glVertex2f(.14,.12);
    glVertex2f(.1,.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.1,.15);
    glVertex2f(.14,.15);
    glVertex2f(.14,.2);
    glVertex2f(.1,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.1,.23);
    glVertex2f(.14,.23);
    glVertex2f(.14,.28);
    glVertex2f(.1,.28);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.1,.31);
    glVertex2f(.14,.31);
    glVertex2f(.14,.36);
    glVertex2f(.1,.36);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.1,.39);
    glVertex2f(.14,.39);
    glVertex2f(.14,.44);
    glVertex2f(.1,.44);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.1,.47);
    glVertex2f(.14,.47);
    glVertex2f(.14,.52);
    glVertex2f(.1,.52);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.1,.55);
    glVertex2f(.14,.55);
    glVertex2f(.14,.6);
    glVertex2f(.1,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.1,.63);
    glVertex2f(.14,.63);
    glVertex2f(.14,.68);
    glVertex2f(.1,.68);
    glEnd();
//---------------------
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.0,.07);
    glVertex2f(.04,.07);
    glVertex2f(.04,.12);
    glVertex2f(.0,.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.0,.15);
    glVertex2f(.04,.15);
    glVertex2f(.04,.2);
    glVertex2f(.0,.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.0,.23);
    glVertex2f(.04,.23);
    glVertex2f(.04,.28);
    glVertex2f(.0,.28);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.0,.31);
    glVertex2f(.04,.31);
    glVertex2f(.04,.36);
    glVertex2f(.0,.36);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.0,.39);
    glVertex2f(.04,.39);
    glVertex2f(.04,.44);
    glVertex2f(.0,.44);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.0,.47);
    glVertex2f(.04,.47);
    glVertex2f(.04,.52);
    glVertex2f(.0,.52);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.0,.55);
    glVertex2f(.04,.55);
    glVertex2f(.04,.6);
    glVertex2f(.0,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(.0,.63);
    glVertex2f(.04,.63);
    glVertex2f(.04,.68);
    glVertex2f(.0,.68);
    glEnd();

    //building 4 er light
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(-.0,.1);
    glVertex2f(-.3,.1);
    glVertex2f(-.3,.15);
    glVertex2f(-.0,.15);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(-.0,.2);
    glVertex2f(-.3,.2);
    glVertex2f(-.3,.25);
    glVertex2f(-.0,.25);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(-.0,.3);
    glVertex2f(-.3,.3);
    glVertex2f(-.3,.35);
    glVertex2f(-.0,.35);
    glEnd();

    //building 5 lightnight

    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(-.33,.1);
    glVertex2f(-.7,.1);
    glVertex2f(-.7,.15);
    glVertex2f(-.33,.15);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(-.33,.2);
    glVertex2f(-.7,.2);
    glVertex2f(-.7,.25);
    glVertex2f(-.33,.25);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(-.33,.3);
    glVertex2f(-.7,.3);
    glVertex2f(-.7,.35);
    glVertex2f(-.33,.35);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(-.33,.4);
    glVertex2f(-.7,.4);
    glVertex2f(-.7,.45);
    glVertex2f(-.33,.45);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,106,128);
    glVertex2f(-.33,.5);
    glVertex2f(-.7,.5);
    glVertex2f(-.7,.55);
    glVertex2f(-.33,.55);
    glEnd();

    }


//road---------road--------------road---------------road-------------road------------road--
void road()
{
    glBegin(GL_QUADS);
    glColor3ub(66, 73, 73);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,-.6);
    glVertex2f(-1.0,-.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244, 208, 63  );
    glVertex2f(-.8,-.82);
    glVertex2f(-.7,-.82);
    glVertex2f(-.7,-.8);
    glVertex2f(-.8,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244, 208, 63  );
    glVertex2f(-.4,-.82);
    glVertex2f(-.3,-.82);
    glVertex2f(-.3,-.8);
    glVertex2f(-.4,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244, 208, 63  );
    glVertex2f(0,-.82);
    glVertex2f(.1,-.82);
    glVertex2f(.1,-.8);
    glVertex2f(0,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244, 208, 63  );
    glVertex2f(.4,-.82);
    glVertex2f(.5,-.82);
    glVertex2f(.5,-.8);
    glVertex2f(.4,-.8);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(244, 208, 63  );
    glVertex2f(.8,-.82);
    glVertex2f(.9,-.82);
    glVertex2f(.9,-.8);
    glVertex2f(.8,-.8);
    glEnd();
    //road end------------------------------------------------------------
}


	//1st car-----------------1st car--------------1st car-----------1st car-----------1st car-------
void car1()
{
    glPushMatrix();
    glTranslatef(position1,0.0, 0.0f);
    int i;
    int triangleAmount = 20;
    GLfloat x6=-.8f; GLfloat y6=-.77f; GLfloat r6 =.03f;
	GLfloat twicePie = 2.0f * PI;
        glColor3ub( 0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle

		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(

		            x6 + (r6 * cos(i *  twicePie / triangleAmount)),
			    y6 + (r6 * sin(i * twicePie / triangleAmount))
			);
		}
	glEnd();

	GLfloat x3=-.6f; GLfloat y3=-.77f; GLfloat radius3 =.03f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub( 0, 0, 0);
		glVertex2f(x3, y3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePie / triangleAmount)),
			    y3 + (radius3 * sin(i * twicePie / triangleAmount))
			);
		}
	glEnd();

    glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.87f, -0.75f);
      glVertex2f( -0.55f, -0.75f);
      glVertex2f( -0.55f,  -0.72f);
      glVertex2f(-0.87f,  -0.72f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f( -0.85, -0.72);
    glVertex2f( -0.55,  -0.72);
    glVertex2f(-0.65,-0.68);
    glVertex2f(-0.75,-0.68);
        glEnd();

        glBegin(GL_QUADS);
      glColor3ub(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.78f, -0.69f);
      glVertex2f( -0.73f, -0.69f);
      glVertex2f( -0.73f,  -0.74f);
      glVertex2f(-0.78f,  -0.74f);
    glEnd();

    glBegin(GL_QUADS);
      glColor3ub(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.7f, -0.69f);
      glVertex2f( -0.65f, -0.69f);
      glVertex2f( -0.65f,  -0.74f);
      glVertex2f(-0.7f,  -0.74f);
    glEnd();
    glPopMatrix();
}

// 2nd car-------------------------------------------------------
void car2()
{
    glPushMatrix();
    glTranslatef(position,0.0, 0.0f);
    int i;
    int triangleAmount = 20;
    GLfloat x4=-.8f; GLfloat y4=-.95f; GLfloat r4 =.03f;
    GLfloat twicePie = 2.0f * PI;
    glColor3ub( 0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x4, y4); // center of circle

		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(

		            x4 + (r4 * cos(i *  twicePie / triangleAmount)),
			    y4 + (r4 * sin(i * twicePie / triangleAmount))
			);
		}
	glEnd();
	GLfloat x5=-.6f; GLfloat y5=-.95f; GLfloat radius5 =.03f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub( 0, 0, 0);
		glVertex2f(x5, y5); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x5 + (radius5 * cos(i *  twicePie / triangleAmount)),
			    y5 + (radius5 * sin(i * twicePie / triangleAmount))
			);
		}
	glEnd();

glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.87f, -0.93f);
      glVertex2f( -0.55f, -0.93f);
      glVertex2f( -0.55f,  -0.9f);
      glVertex2f(-0.87f,  -0.9f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f( -0.85, -0.9);
    glVertex2f( -0.55,  -0.9);
    glVertex2f(-0.65,-0.85);
    glVertex2f(-0.75,-0.85);
        glEnd();

        glBegin(GL_QUADS);
      glColor3ub(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.78f, -0.86f);
      glVertex2f( -0.73f, -0.86f);
      glVertex2f( -0.73f,  -0.92f);
      glVertex2f(-0.78f,  -0.92f);
    glEnd();

    glBegin(GL_QUADS);
      glColor3ub(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.7f, -0.86f);
      glVertex2f( -0.65f, -0.86f);
      glVertex2f( -0.65f,  -0.92f);
      glVertex2f(-0.7f,  -0.92f);
    glEnd();
    glPopMatrix();
    }

void car3()
{
    glPushMatrix();
    glTranslatef(position6,0.0, 0.0f);
    int i;
    int triangleAmount = 20;
    GLfloat x6=.8f; GLfloat y6=-.77f; GLfloat r6 =.03f;
	GLfloat twicePie = 2.0f * PI;
        glColor3ub( 0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle

		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(

		            x6 + (r6 * cos(i *  twicePie / triangleAmount)),
			    y6 + (r6 * sin(i * twicePie / triangleAmount))
			);
		}
	glEnd();

	GLfloat x3=.6f; GLfloat y3=-.77f; GLfloat radius3 =.03f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub( 0, 0, 0);
		glVertex2f(x3, y3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePie / triangleAmount)),
			    y3 + (radius3 * sin(i * twicePie / triangleAmount))
			);
		}
	glEnd();

    glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(0.87f, -0.75f);
      glVertex2f( 0.55f, -0.75f);
      glVertex2f( 0.55f,  -0.72f);
      glVertex2f(0.87f,  -0.72f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f( 0.85, -0.72);
    glVertex2f( 0.55,  -0.72);
    glVertex2f(0.65,-0.68);
    glVertex2f(0.75,-0.68);
        glEnd();

        glBegin(GL_QUADS);
      glColor3ub(1.0f, 0.0f, 0.0f);
      glVertex2f(0.78f, -0.69f);
      glVertex2f( 0.73f, -0.69f);
      glVertex2f( 0.73f,  -0.74f);
      glVertex2f(0.78f,  -0.74f);
    glEnd();

    glBegin(GL_QUADS);
      glColor3ub(1.0f, 0.0f, 0.0f);
      glVertex2f(0.7f, -0.69f);
      glVertex2f( 0.65f, -0.69f);
      glVertex2f( 0.65f,  -0.74f);
      glVertex2f(0.7f,  -0.74f);
    glEnd();
    glPopMatrix();

}


void car_speed1()
{
    glPushMatrix();
    glTranslatef(position6,0.0, 0.0f);
    int i;
    int triangleAmount = 20;
    GLfloat x6=-.8f; GLfloat y6=-.77f; GLfloat r6 =.03f;
	GLfloat twicePie = 2.0f * PI;
        glColor3ub( 0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x6, y6); // center of circle

		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(

		            x6 + (r6 * cos(i *  twicePie / triangleAmount)),
			    y6 + (r6 * sin(i * twicePie / triangleAmount))
			);
		}
	glEnd();

	GLfloat x3=-.6f; GLfloat y3=-.77f; GLfloat radius3 =.03f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub( 0, 0, 0);
		glVertex2f(x3, y3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePie / triangleAmount)),
			    y3 + (radius3 * sin(i * twicePie / triangleAmount))
			);
		}
	glEnd();

    glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.87f, -0.75f);
      glVertex2f( -0.55f, -0.75f);
      glVertex2f( -0.55f,  -0.72f);
      glVertex2f(-0.87f,  -0.72f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f( -0.85, -0.72);
    glVertex2f( -0.55,  -0.72);
    glVertex2f(-0.65,-0.68);
    glVertex2f(-0.75,-0.68);
        glEnd();

        glBegin(GL_QUADS);
      glColor3ub(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.78f, -0.69f);
      glVertex2f( -0.73f, -0.69f);
      glVertex2f( -0.73f,  -0.74f);
      glVertex2f(-0.78f,  -0.74f);
    glEnd();

    glBegin(GL_QUADS);
      glColor3ub(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.7f, -0.69f);
      glVertex2f( -0.65f, -0.69f);
      glVertex2f( -0.65f,  -0.74f);
      glVertex2f(-0.7f,  -0.74f);
    glEnd();
    glPopMatrix();

}
// 2nd car-------------------------------------------------------
void car_speed2()
{
    glPushMatrix();
    glTranslatef(position3,0.0, 0.0f);
    int i;
    int triangleAmount = 20;
    GLfloat x4=-.8f; GLfloat y4=-.95f; GLfloat r4 =.03f;
    GLfloat twicePie = 2.0f * PI;
    glColor3ub( 0, 0, 0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x4, y4); // center of circle

		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(

		            x4 + (r4 * cos(i *  twicePie / triangleAmount)),
			    y4 + (r4 * sin(i * twicePie / triangleAmount))
			);
		}
	glEnd();
	GLfloat x5=-.6f; GLfloat y5=-.95f; GLfloat radius5 =.03f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub( 0, 0, 0);
		glVertex2f(x5, y5); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x5 + (radius5 * cos(i *  twicePie / triangleAmount)),
			    y5 + (radius5 * sin(i * twicePie / triangleAmount))
			);
		}
	glEnd();

glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.87f, -0.93f);
      glVertex2f( -0.55f, -0.93f);
      glVertex2f( -0.55f,  -0.9f);
      glVertex2f(-0.87f,  -0.9f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f( -0.85, -0.9);
    glVertex2f( -0.55,  -0.9);
    glVertex2f(-0.65,-0.85);
    glVertex2f(-0.75,-0.85);
        glEnd();

        glBegin(GL_QUADS);
      glColor3ub(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.78f, -0.86f);
      glVertex2f( -0.73f, -0.86f);
      glVertex2f( -0.73f,  -0.92f);
      glVertex2f(-0.78f,  -0.92f);
    glEnd();

    glBegin(GL_QUADS);
      glColor3ub(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.7f, -0.86f);
      glVertex2f( -0.65f, -0.86f);
      glVertex2f( -0.65f,  -0.92f);
      glVertex2f(-0.7f,  -0.92f);
    glEnd();
    glPopMatrix();
    }

    //road Ralling---------------------road Ralling----------------road Ralling------------road Ralling
void ralling()
{
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(1.0,-.9);
    glVertex2f(-1.0,-.9);
	glEnd();

 glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(1.0,-1.0);
    glVertex2f(1.0,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.95,-1.0);
    glVertex2f(0.95,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.9,-1.0);
    glVertex2f(0.9,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.85,-1.0);
    glVertex2f(0.85,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.8,-1.0);
    glVertex2f(0.8,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.75,-1.0);
    glVertex2f(0.75,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.7,-1.0);
    glVertex2f(0.7,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.65,-1.0);
    glVertex2f(0.65,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.6,-1.0);
    glVertex2f(0.6,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.55,-1.0);
    glVertex2f(0.55,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.5,-1.0);
    glVertex2f(0.5,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.45,-1.0);
    glVertex2f(0.45,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.4,-1.0);
    glVertex2f(0.4,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.35,-1.0);
    glVertex2f(0.35,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.3,-1.0);
    glVertex2f(0.3,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.25,-1.0);
    glVertex2f(0.25,-.9);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.2,-1.0);
    glVertex2f(0.2,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.15,-1.0);
    glVertex2f(0.15,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.1,-1.0);
    glVertex2f(0.1,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.05,-1.0);
    glVertex2f(0.05,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(.00,-1.0);
    glVertex2f(0.00,-.9);
	glEnd();
//--------------------------------
glBegin(GL_LINES);

    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-1.0,-1.0);
    glVertex2f(-1.0,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.95,-1.0);
    glVertex2f(-0.95,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.9,-1.0);
    glVertex2f(-0.9,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.85,-1.0);
    glVertex2f(-0.85,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.8,-1.0);
    glVertex2f(-0.8,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.75,-1.0);
    glVertex2f(-0.75,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.7,-1.0);
    glVertex2f(-0.7,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.65,-1.0);
    glVertex2f(-0.65,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.6,-1.0);
    glVertex2f(-0.6,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.55,-1.0);
    glVertex2f(-0.55,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.5,-1.0);
    glVertex2f(-0.5,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.45,-1.0);
    glVertex2f(-0.45,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.4,-1.0);
    glVertex2f(-0.4,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.35,-1.0);
    glVertex2f(-0.35,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(-0.0f, 0.0f, 0.0f);
	glVertex2f(-.3,-1.0);
    glVertex2f(-0.3,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(-0.0f, 0.0f, 0.0f);
	glVertex2f(-.25,-1.0);
    glVertex2f(-0.25,-.9);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(-0.0f, 0.0f, 0.0f);
	glVertex2f(-.2,-1.0);
    glVertex2f(-0.2,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.15,-1.0);
    glVertex2f(-0.15,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.1,-1.0);
    glVertex2f(-0.1,-.9);
	glEnd();
    glBegin(GL_LINES);
	glColor3ub(0.0f, 0.0f, 0.0f);
	glVertex2f(-.05,-1.0);
    glVertex2f(-0.05,-.9);
	glEnd();
}


//PLANE-----------------PLANE----------PLANE-----------PLANE------------------------PLANE-
void plane()
{
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glColor3ub(0.5,0.5,0.5);
    glScalef(1.5,1,0);
    glRotatef(-20,0,0,1);
    glTranslatef(-.75,0.55,0);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(0,-0.1);
    glVertex2f(0.04,-0.02);
    glVertex2f(0.08,-0.02);
    glVertex2f(0.1,0);
    glVertex2f(0.08,0.02);
    glVertex2f(0.04,0.02);
    glVertex2f(0,0.1);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.09,0.01);
    glVertex2f(-0.1,0);
    glVertex2f(-0.09,-0.01);
    glVertex2f(-0.09,-0.06);
    glVertex2f(-0.07,-0.01);
    glVertex2f(0,-0.02);
    glVertex2f(0,0.02);
    glVertex2f(-0.07,0.01);
    glVertex2f(-0.09,0.06);
    glEnd();
    glPopMatrix();
}

//boat------------------------------boat------------------boat--------------------boat-------
void boat()
{
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glScalef(0.4,0.2,0);
    glTranslatef(0.0,-0.95,0.0);
     glBegin(GL_QUADS);
	glColor3f(0.1f, 0.2f, 0.0f);
	glVertex2f(-0.5f, 0.0f);
	glVertex2f(-0.3f, -0.5f);
	glVertex2f(0.3f, -0.5f);
	glVertex2f(0.5f, 0.0f);
	glEnd();

     glBegin(GL_QUADS);
	glColor3f(0.2f, 1.0f, 0.0f);
	glVertex2f(-0.4f, 0.05f);
	glVertex2f(-0.4f, 0.0f);
	glVertex2f(0.4f, 0.0f);
	glVertex2f(0.4f, 0.05f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.3f, 0.3f);
	glVertex2f(-0.3f, 0.1f);
	glVertex2f(-0.3f, 0.05f);
	glVertex2f(0.3f, 0.05f);
	glVertex2f(0.3f, 0.1f);

	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.345f, 0.123f);
	glVertex2f(-0.22f, 0.4f);
	glVertex2f(-0.22f, 0.1f);
	glVertex2f(-0.12f, 0.1f);
	glVertex2f(-0.12f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.43f, 0.8f);
	glVertex2f(0.43f, 0.0f);
	glVertex2f(0.45f, 0.0f);
	glVertex2f(0.45f, 0.8f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.38f, 0.7f);
	glVertex2f(0.38f, 0.6f);
	glVertex2f(0.5f, 0.6f);
	glVertex2f(0.5f, 0.7f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.43f, 0.6f);
	glVertex2f(0.22f, 0.1f);
	glEnd();
    glPopMatrix();
    }

void boat2()
{
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(222, 66, 24);
	glVertex2f(0.5f, -0.38f);
	glVertex2f(0.4f, -0.45f);
	glVertex2f(0.3f, -0.45f);
    glVertex2f(0.2f, -0.38f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(242, 238, 20  );
    glVertex2f(0.43f, -0.3f);
    glVertex2f(0.43f, -0.38f);
    glVertex2f(0.28f, -0.38);
    glVertex2f(0.28f, -0.3f);
    glEnd();
    glPopMatrix();
}

void boat3()
{
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
       glBegin(GL_POLYGON);
    glColor3ub(222, 66, 24);
	glVertex2f(0.5f, -0.18f);
	glVertex2f(0.4f, -0.25f);
	glVertex2f(0.3f, -0.25f);
    glVertex2f(0.2f, -0.18f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(242, 238, 20  );
    glVertex2f(0.43f, -0.1f);
    glVertex2f(0.43f, -0.18f);
    glVertex2f(0.28f, -0.18);
    glVertex2f(0.28f, -0.1f);
    glEnd();
    glPopMatrix();
}

 //tree create left-----------------------------------------
 void left_tree()
 {
    glBegin(GL_TRIANGLES);
    glColor3ub(30, 132, 73);
    glVertex2f(-1.2,-.45);
    glVertex2f(-0.7,-0.45);
    glVertex2f(-0.88,-0.35);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(30, 132, 73);
    glVertex2f(-1.2,-.36);
    glVertex2f(-0.7,-0.36);
    glVertex2f(-0.88,-0.25);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(30, 132, 73);
    glVertex2f(-1.2,-.27);
    glVertex2f(-0.7,-0.27);
    glVertex2f(-0.88,-0.17);
    glEnd();


    glBegin(GL_QUADS);
   glColor3ub(192, 57, 43);
    glVertex2f(-.9,-.57);
    glVertex2f(-.88,-0.57);
    glVertex2f(-.88,-.45);
    glVertex2f(-.9,-0.45);
    glEnd();
}

 //tree create right--------------------------------------
void right_tree()
{
    glBegin(GL_TRIANGLES);
    glColor3ub(30, 132, 73);
    glVertex2f(1.2,-.45);
    glVertex2f(0.7,-0.45);
    glVertex2f(0.88,-0.35);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(30, 132, 73);
    glVertex2f(1.2,-.36);
    glVertex2f(0.7,-0.36);
    glVertex2f(0.88,-0.25);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(30, 132, 73);
    glVertex2f(1.2,-.27);
    glVertex2f(0.7,-0.27);
    glVertex2f(0.88,-0.17);
    glEnd();

    glBegin(GL_QUADS);
   glColor3ub(192, 57, 43);
    glVertex2f(.9,-.57);
    glVertex2f(.88,-0.57);
    glVertex2f(.88,-.45);
    glVertex2f(.9,-0.45);
    glEnd();
    }

     //lamp post-----------lamp post------------lamp post-----------------lamp post--------
void lamp1()
{
    glBegin(GL_QUADS);
   glColor3ub(0, 0, 2);
    glVertex2f(.75,-.62);
    glVertex2f(.8,-0.62);
    glVertex2f(.8,-.58);
    glVertex2f(.75,-0.58);
    glEnd();
    glBegin(GL_QUADS);
   glColor3ub(0, 0, 2);
    glVertex2f(.77,-.58);
    glVertex2f(.79,-0.58);
    glVertex2f(.79,-.38);
    glVertex2f(.77,-0.38);
    glEnd();
    glBegin(GL_QUADS);
   glColor3ub(0, 0, 2);
    glVertex2f(.79,-.38);
    glVertex2f(.69,-0.38);
    glVertex2f(.69,-.36);
    glVertex2f(.79,-0.36);
    glEnd();
}
    //night light---------night light-----
void L1NL1()
{
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 2);
    glVertex2f(.75,-.38);
    glVertex2f(.69,-0.38);
    glVertex2f(.69,-.42);
    glVertex2f(.75,-0.42);
    glEnd();
}

//2nd lamp-------------
void lamp2()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 2);
    glVertex2f(-.35,-.62);
    glVertex2f(-.3,-0.62);
    glVertex2f(-.3,-.58);
    glVertex2f(-.35,-0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 2);
    glVertex2f(-.34,-.58);
    glVertex2f(-.32,-0.58);
    glVertex2f(-.32,-.38);
    glVertex2f(-.34,-0.38);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 2);
    glVertex2f(-.32,-.38);
    glVertex2f(-.42,-0.38);
    glVertex2f(-.42,-.36);
    glVertex2f(-.32,-0.36);
    glEnd();
}
    //night light---------night light-----
void L2NL2()
{
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 2);
    glVertex2f(-.35,-.38);
    glVertex2f(-.42,-0.38);
    glVertex2f(-.42,-.42);
    glVertex2f(-.35,-0.42);
    glEnd();
}


//3rd lamp-------------
void lamp3()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 2);
    glVertex2f(.24,-1.0);
    glVertex2f(.22,-1.0);
    glVertex2f(.22,-.75);
    glVertex2f(.24,-0.75);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 2);
    glVertex2f(.24,-.75);
    glVertex2f(.14,-0.75);
    glVertex2f(.14,-.74);
    glVertex2f(.24,-0.74);
    glEnd();
}
    //night light---------night light-----
void L3NL3()
{
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 2);
    glVertex2f(.14,-.75);
    glVertex2f(.2,-0.75);
    glVertex2f(.2,-.78);
    glVertex2f(.14,-0.78);
    glEnd();
}

//4th  lamp-------------
void lamp4()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 2);
    glVertex2f(-.92,-1.0);
    glVertex2f(-.9,-1.0);
    glVertex2f(-.9,-.75);
    glVertex2f(-.92,-0.75);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 2);
    glVertex2f(-.9,-.75);
    glVertex2f(-.98,-0.75);
    glVertex2f(-.98,-.74);
    glVertex2f(-.9,-0.74);
    glEnd();
}
void L4NL4()
{
    //night light---------night light-----
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 2);
    glVertex2f(-.92,-.75);
    glVertex2f(-.98,-0.75);
    glVertex2f(-.98,-.78);
    glVertex2f(-.92,-0.78);
    glEnd();
}



//rain_______________----rain-------------------rain---------------------rain-------------
void rain()
{
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,position7, 0.0f);
    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-9.0f,3.6f);
    glVertex2f(-.95f,3.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.9f,3.2f);
    glVertex2f(-.95f,3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.9f,2.8f);
    glVertex2f(-.95f,2.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.9f,2.4f);
    glVertex2f(-.95f,2.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.9f,2.0f);
    glVertex2f(-.95f,1.8f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.9f,1.6f);
    glVertex2f(-.95f,1.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.9f,1.2f);
    glVertex2f(-.95f,1.0f);
    glEnd();
    /////////////////////////////////////////////////////rain 2


    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.8f,3.6f);
    glVertex2f(-.85f,3.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.85f,3.2f);
    glVertex2f(-.85f,3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.8f,2.8f);
    glVertex2f(-.85f,2.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.8f,2.4f);
    glVertex2f(-.85f,2.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.8f,2.0f);
    glVertex2f(-.85f,1.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.8f,1.6f);
    glVertex2f(-.85f,1.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.8f,1.2f);
    glVertex2f(-.85f,1.0f);
    glEnd();



    ////////////////////////////////////////////rain 3

     glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.65f,3.6f);
    glVertex2f(-.6f,3.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.6f,3.2f);
    glVertex2f(-.65f,3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.6f,2.8f);
    glVertex2f(-.65f,2.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.6f,2.4f);
    glVertex2f(-.65f,2.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.6f,2.0f);
    glVertex2f(-.65f,1.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.6f,1.6f);
    glVertex2f(-.65f,1.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.6f,1.2f);
    glVertex2f(-.65f,1.0f);
    glEnd();


    /////////////////////////////////////////////////rain 4

     glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.4f,3.6f);
    glVertex2f(-.45f,3.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.4f,3.2f);
    glVertex2f(-.45f,3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.4f,2.8f);
    glVertex2f(-.45f,2.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.4f,2.4f);
    glVertex2f(-.45f,2.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.4f,2.0f);
    glVertex2f(-.45f,1.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.4f,1.6f);
    glVertex2f(-.45f,1.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.4f,1.2f);
    glVertex2f(-.45f,1.0f);
    glEnd();



    ////////////////////////////////////////////////////

       glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.2f,3.6f);
    glVertex2f(-.25f,3.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.2f,3.2f);
    glVertex2f(-.25f,3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.2f,2.8f);
    glVertex2f(-.25f,2.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.2f,2.4f);
    glVertex2f(-.25f,2.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.2f,2.0f);
    glVertex2f(-.25f,1.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.2f,1.6f);
    glVertex2f(-.25f,1.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(-.2f,1.2f);
    glVertex2f(-.25f,1.0f);
    glEnd();


    /////////////////////////////////////////////rain 5

     glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.0f,3.6f);
    glVertex2f(-.05f,3.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.0f,3.2f);
    glVertex2f(-.05f,3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.0f,2.8f);
    glVertex2f(-.05f,2.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.0f,2.4f);
    glVertex2f(-.05f,2.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.0f,2.0f);
    glVertex2f(-.05f,1.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.0f,1.6f);
    glVertex2f(-.05f,1.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.0f,1.2f);
    glVertex2f(-.05f,1.0f);
    glEnd();


     /////////////////////////////////////////

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.2f,3.6f);
    glVertex2f(.15f,3.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.2f,3.2f);
    glVertex2f(.15f,3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.2f,2.8f);
    glVertex2f(.15f,2.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.2f,2.4f);
    glVertex2f(.15f,2.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.2f,2.0f);
    glVertex2f(.15f,1.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.2f,1.6f);
    glVertex2f(.15f,1.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.2f,1.2f);
    glVertex2f(.15f,1.0f);
    glEnd();


    ///////////////////////////////////////////

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.4f,3.6f);
    glVertex2f(.35f,3.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.4f,3.2f);
    glVertex2f(.35f,3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.4f,2.8f);
    glVertex2f(.35f,2.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.4f,2.4f);
    glVertex2f(.35f,2.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.4f,2.0f);
    glVertex2f(.35f,1.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.4f,1.6f);
    glVertex2f(.35f,1.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.4f,1.2f);
    glVertex2f(.35f,1.0f);
    glEnd();


    ///////////////////////////////////////////////

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.6f,3.6f);
    glVertex2f(.55f,3.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.6f,3.2f);
    glVertex2f(.55f,3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.6f,2.8f);
    glVertex2f(.55f,2.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.6f,2.4f);
    glVertex2f(.55f,2.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.6f,2.0f);
    glVertex2f(.55f,1.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.6f,1.6f);
    glVertex2f(.55f,1.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.6f,1.2f);
    glVertex2f(.55f,1.0f);
    glEnd();


    ///////////////////////////////////////////

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.8f,3.6f);
    glVertex2f(.75f,3.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.8f,3.2f);
    glVertex2f(.75f,3.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.8f,2.8f);
    glVertex2f(.75f,2.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.8f,2.4f);
    glVertex2f(.75f,2.2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.8f,2.0f);
    glVertex2f(.75f,1.8f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.8f,1.6f);
    glVertex2f(.75f,1.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(212, 206, 234);
    glVertex2f(.8f,1.2f);
    glVertex2f(.75f,1.0f);
    glEnd();
    glPopMatrix();

    ///rain--------------------------------------------------------------------------
}


void display();

void display12(int val) {

 glutDisplayFunc(display);

}

void display11()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glEnable(GL_LIGHTING);
    GLfloat global_ambient1[] = {0.0,0.0,1.0,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);
    sky();//---------------------------------------------------
    glDisable(GL_LIGHTING);



    glEnable(GL_LIGHTING);
    GLfloat global_ambient2[] = {255,255,255,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient2);
    sun();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient3[] = {1.9,1.9,1.9,1.9};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient3);
    cloud1();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient4[] = {1.9,1.9,1.9,1.9};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient4);
    cloud2();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient12[] = {1.0,1.0,1.0,0.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient12);
    Building1();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient13[] = {1.0,1.0,1.0,0.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient13);
    Building2();//---------------------------------------------------
    glDisable(GL_LIGHTING);
    glEnable(GL_LIGHTING);
    GLfloat global_ambient14[] = {1.0,1.0,1.0,0.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient14);
    Building3();//---------------------------------------------------
    glDisable(GL_LIGHTING);
    glEnable(GL_LIGHTING);
    GLfloat global_ambient15[] = {1.0,1.0,1.0,0.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient15);
    Building4();//---------------------------------------------------
    glDisable(GL_LIGHTING);
    glEnable(GL_LIGHTING);
    GLfloat global_ambient16[] = {1.0,1.0,1.0,0.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient16);
    building5();//---------------------------------------------------
    glDisable(GL_LIGHTING);



    glEnable(GL_LIGHTING);
    GLfloat global_ambient17[] = {255,255,255,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient17);
    building_window();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient18[] = {255,255,255,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient18);
    Building1_glass();//---------------------------------------------------
    glDisable(GL_LIGHTING);





    glEnable(GL_LIGHTING);
    GLfloat global_ambient11[] = {0.9,0.9,100.0,0.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient11);
    river();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient6[] = {1.0,1.0,1.0,0.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient6);
    lower_footpath();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient7[] = {0.0,0.0,0.0,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient7);
    ralling_lower();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient8[] = {1.0,1.0,1.0,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient8);
    footpath_upper();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient9[] = {0.0,0.0,1.0,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient9);
    field();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    //---------------------------------------------------
    glEnable(GL_LIGHTING);
    GLfloat global_ambient10[] = {0.0,0.0,1.0,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient10);
    boat();
    glDisable(GL_LIGHTING);

    glPushMatrix();
    glTranslatef(position,0.0, 0.0f);
    glBegin(GL_TRIANGLES);
     glColor3ub(255, 255, 155);
    glVertex2f(0.18,-0.2);
    glVertex2f(.4,-.15);
    glVertex2f(.45,-0.3);
    glEnd();
    glPopMatrix();

    glEnable(GL_LIGHTING);
    GLfloat global_ambient21[] = {1.9,1.9,1.9,1.9};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient21);
    left_tree();//---------------------------------------------------
    glDisable(GL_LIGHTING);
    glEnable(GL_LIGHTING);
    GLfloat global_ambient22[] = {1.9,1.9,1.9,1.9};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient22);
    right_tree();//---------------------------------------------------
    glDisable(GL_LIGHTING);
    glPushMatrix();



//road---------road--------------road---------------road-------------road------------road--
{
    glBegin(GL_QUADS);
    glColor3ub(26, 26, 26);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,-.6);
    glVertex2f(-1.0,-.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244, 208, 155  );
    glVertex2f(-.8,-.82);
    glVertex2f(-.7,-.82);
    glVertex2f(-.7,-.8);
    glVertex2f(-.8,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244, 208, 155  );
    glVertex2f(-.4,-.82);
    glVertex2f(-.3,-.82);
    glVertex2f(-.3,-.8);
    glVertex2f(-.4,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244, 208, 155 );
    glVertex2f(0,-.82);
    glVertex2f(.1,-.82);
    glVertex2f(.1,-.8);
    glVertex2f(0,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244, 208, 155 );
    glVertex2f(.4,-.82);
    glVertex2f(.5,-.82);
    glVertex2f(.5,-.8);
    glVertex2f(.4,-.8);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(244, 208, 155);
    glVertex2f(.8,-.82);
    glVertex2f(.9,-.82);
    glVertex2f(.9,-.8);
    glVertex2f(.8,-.8);
    glEnd();
    //road end------------------------------------------------------------
}
//lamp light -----------------------------------------------
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 155);
    glVertex2f(0.0,-1.0);
    glVertex2f(0.3,-1.0);
    glVertex2f(0.16,-0.76);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 155);
    glVertex2f(-1.0,-.9);
    glVertex2f(-1.0,-1.0);
    glVertex2f(-0.8,-1.0);
    glVertex2f(-.93,-0.76);
    glEnd();
    car1();
    glPushMatrix();
    glTranslatef(position1,0.0, 0.0f);
    glBegin(GL_TRIANGLES);
     glColor3ub(255, 255, 155);
    glVertex2f(-0.88,-0.75);
    glVertex2f(-1.0,-.9);
    glVertex2f(-1.0,-0.68);
    glEnd();
    glPopMatrix();
    car2();
    glPushMatrix();
    glTranslatef(position,0.0, 0.0f);
    glBegin(GL_TRIANGLES);
     glColor3ub(255, 255, 155);
    glVertex2f(-0.55,-0.92);
    glVertex2f(-0.3,-.99);
    glVertex2f(-0.3,-0.8);
    glEnd();
    glPopMatrix();
    //lamp---------------------------------------------------------
    lamp1();
    {glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(.75,-.38);
    glVertex2f(.69,-0.38);
    glVertex2f(.69,-.42);
    glVertex2f(.75,-0.42);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 155);
    glVertex2f(.5,-.66);
    glVertex2f(0.8,-0.66);
    glVertex2f(0.72,-0.42);
    glEnd();
}
    lamp2();
     {
     glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-.35,-.38);
    glVertex2f(-.42,-0.38);
    glVertex2f(-.42,-.42);
    glVertex2f(-.35,-0.42);
    glEnd();
    glBegin(GL_TRIANGLES);
     glColor3ub(255, 255, 155);
    glVertex2f(-.6,-.66);
    glVertex2f(-0.3,-0.66);
    glVertex2f(-0.39,-0.42);
    glEnd();
}
    lamp3();
    {  glBegin(GL_QUADS);
   glColor3ub(255, 255, 255);
    glVertex2f(.14,-.75);
    glVertex2f(.2,-0.75);
    glVertex2f(.2,-.78);
    glVertex2f(.14,-0.78);
    glEnd();

 }
    lamp4();
 {
        glBegin(GL_QUADS);
   glColor3ub(255, 255, 255);
    glVertex2f(-.92,-.75);
    glVertex2f(-.98,-0.75);
    glVertex2f(-.98,-.78);
    glVertex2f(-.92,-0.78);
    glEnd();
 }
    rain();

  // glutTimerFunc(15000,display12,0);

    glFlush();
}

void display10(int val) {


 glutDisplayFunc(display11);

}

//------nightview------------------nightview---------------
void display9()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //glLoadIdentity();
    glEnable(GL_LIGHTING);
    GLfloat global_ambient1[] = {0.0,0.0,1.0,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);
    sky();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient2[] = {255,255,255,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient2);
    sun();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient3[] = {1.9,1.9,1.9,1.9};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient3);
    cloud1();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient4[] = {1.9,1.9,1.9,1.9};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient4);
    cloud2();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient12[] = {1.0,1.0,1.0,0.0};

    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient12);
    Building1();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient13[] = {1.0,1.0,1.0,0.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient13);
    Building2();//---------------------------------------------------
    glDisable(GL_LIGHTING);
    glEnable(GL_LIGHTING);
    GLfloat global_ambient14[] = {1.0,1.0,1.0,0.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient14);
    Building3();//---------------------------------------------------
    glDisable(GL_LIGHTING);
    glEnable(GL_LIGHTING);
    GLfloat global_ambient15[] = {1.0,1.0,1.0,0.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient15);
    Building4();//---------------------------------------------------
    glDisable(GL_LIGHTING);
    glEnable(GL_LIGHTING);
    GLfloat global_ambient16[] = {1.0,1.0,1.0,0.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient16);
    building5();//---------------------------------------------------
    glDisable(GL_LIGHTING);



    glEnable(GL_LIGHTING);
    GLfloat global_ambient17[] = {255,255,255,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient17);
    building_window();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient18[] = {255,255,255,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient18);
    Building1_glass();//---------------------------------------------------
    glDisable(GL_LIGHTING);


    glEnable(GL_LIGHTING);
    GLfloat global_ambient11[] = {0.9,0.9,100.0,0.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient11);
    river();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient6[] = {1.0,1.0,1.0,0.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient6);
    lower_footpath();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient7[] = {0.0,0.0,0.0,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient7);
    ralling_lower();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient8[] = {1.0,1.0,1.0,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient8);
    footpath_upper();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient9[] = {0.0,0.0,1.0,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient9);
    field();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient25[] = {0.0,0.0,1.0,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient25);
//    boatspeed();
       // boat3();
    glDisable(GL_LIGHTING);
   //---------------------------------------------------
    glEnable(GL_LIGHTING);
    GLfloat global_ambient24[] = {0.0,0.0,1.0,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient24);
//    boatspeed();
    boat();
    boat2();
    glDisable(GL_LIGHTING);

    glPushMatrix();
    glTranslatef(position,0.0, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 155);
    glVertex2f(0.18,-0.2);
    glVertex2f(.4,-.15);
    glVertex2f(.45,-0.3);
    glEnd();
    glPopMatrix();

   glEnable(GL_LIGHTING);
    GLfloat global_ambient10[] = {0.0,0.0,1.0,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient10);
//    boatspeed();
        boat2();
    glDisable(GL_LIGHTING);

    glEnable(GL_LIGHTING);
    GLfloat global_ambient21[] = {1.9,1.9,1.9,1.9};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient21);
    left_tree();//---------------------------------------------------
    glDisable(GL_LIGHTING);
    glEnable(GL_LIGHTING);
    GLfloat global_ambient22[] = {1.9,1.9,1.9,1.9};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient22);
    right_tree();//---------------------------------------------------
    glDisable(GL_LIGHTING);
    glPushMatrix();



//road---------road--------------road---------------road-------------road------------road--
{
    glBegin(GL_QUADS);
    glColor3ub(26, 26, 26);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,-.6);
    glVertex2f(-1.0,-.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244, 208, 155  );
    glVertex2f(-.8,-.82);
    glVertex2f(-.7,-.82);
    glVertex2f(-.7,-.8);
    glVertex2f(-.8,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244, 208, 155  );
    glVertex2f(-.4,-.82);
    glVertex2f(-.3,-.82);
    glVertex2f(-.3,-.8);
    glVertex2f(-.4,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244, 208, 155 );
    glVertex2f(0,-.82);
    glVertex2f(.1,-.82);
    glVertex2f(.1,-.8);
    glVertex2f(0,-.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(244, 208, 155 );
    glVertex2f(.4,-.82);
    glVertex2f(.5,-.82);
    glVertex2f(.5,-.8);
    glVertex2f(.4,-.8);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(244, 208, 155);
    glVertex2f(.8,-.82);
    glVertex2f(.9,-.82);
    glVertex2f(.9,-.8);
    glVertex2f(.8,-.8);
    glEnd();
    //road end------------------------------------------------------------
}
//lamp light -----------------------------------------------
    glBegin(GL_TRIANGLES);
     glColor3ub(255, 255, 155);
    glVertex2f(0.0,-1.0);
    glVertex2f(0.3,-1.0);
    glVertex2f(0.16,-0.76);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 155);
    glVertex2f(-1.0,-.9);
    glVertex2f(-1.0,-1.0);
    glVertex2f(-0.8,-1.0);
    glVertex2f(-.93,-0.76);
    glEnd();

    car_speed1();
    glPushMatrix();
    glTranslatef(position6,0.0, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 155);
    glVertex2f(-0.88,-0.75);
    glVertex2f(-1.0,-.9);
    glVertex2f(-1.0,-0.68);
    glEnd();
    glPopMatrix();
    car_speed2();
    glPushMatrix();
    glTranslatef(position3,0.0, 0.0f);
    glBegin(GL_TRIANGLES);
     glColor3ub(255, 255, 155);
    glVertex2f(-0.55,-0.92);
    glVertex2f(-0.3,-.99);
    glVertex2f(-0.3,-0.8);
    glEnd();
    glPopMatrix();

    car3();
    glPushMatrix();
    glTranslatef(position6,0.0, 0.0f);
    glBegin(GL_TRIANGLES);
     glColor3ub(255, 255, 155);
    glVertex2f(0.25,-0.7);
    glVertex2f(0.25,-.8);
    glVertex2f(0.55,-0.75);
    glEnd();
    glPopMatrix();
//lamp---------------------------------------------------------
    lamp1();
{   glBegin(GL_QUADS);
   glColor3ub(255, 255, 255);
    glVertex2f(.75,-.38);
    glVertex2f(.69,-0.38);
    glVertex2f(.69,-.42);
    glVertex2f(.75,-0.42);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 155);
    glVertex2f(.5,-.66);
    glVertex2f(0.8,-0.66);
    glVertex2f(0.72,-0.42);
    glEnd();
}
    lamp2();
{
     glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-.35,-.38);
    glVertex2f(-.42,-0.38);
    glVertex2f(-.42,-.42);
    glVertex2f(-.35,-0.42);
    glEnd();
    glBegin(GL_TRIANGLES);
     glColor3ub(255, 255, 155);
    glVertex2f(-.6,-.66);
    glVertex2f(-0.3,-0.66);
    glVertex2f(-0.39,-0.42);
    glEnd();
}
    lamp3();
{
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(.14,-.75);
    glVertex2f(.2,-0.75);
    glVertex2f(.2,-.78);
    glVertex2f(.14,-0.78);
    glEnd();

 }

    lamp4();

{
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-.92,-.75);
    glVertex2f(-.98,-0.75);
    glVertex2f(-.98,-.78);
    glVertex2f(-.92,-0.78);
    glEnd();

}

   glutTimerFunc(10000,display10,0);
   glFlush();

}

void display8(int val) {

 glutDisplayFunc(display9);

}

void display7() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glEnable(GL_LIGHTING);
    GLfloat global_ambient19[] = {20,10,0,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient19);
    sky();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glPushMatrix();
    glTranslatef(0.0,position2, 0.0f);
    glEnable(GL_LIGHTING);
    GLfloat global_ambient20[] = {1.9,0.0,0.0,0.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient20);
    sun();//---------------------------------------------------
    glDisable(GL_LIGHTING);
    glPopMatrix();
    cloud1();
    cloud2();
    birds();
    river();
    lower_footpath();
    ralling_lower();
    footpath_upper();
    field();
    Building1();
    Building1_glass();
    Building2();
    Building3();
    Building4();
    building5();
    building_window();
    road();
    car_speed1();
    car_speed2();
    car3();
    ralling();
    plane();
    boat3();
    boat();
    //        boatspeed();
    boat2();
    right_tree();
    left_tree();
    lamp1();
    L1NL1();
    lamp2();
    L2NL2();
    lamp3();
    L3NL3();
    lamp4();
    L4NL4();
    glBegin(GL_QUADS);

    glEnd();
    glutTimerFunc(10000,display8,0);
    glFlush();
}


void display6(int val) {

    glutDisplayFunc(display7);

}

void display5() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    sky();
    glPushMatrix();
    glTranslatef(0.0,position2, 0.0f);
    sun();
    glPopMatrix();
    cloud1();
    cloud2();
    birds();
    river();
    lower_footpath();
    ralling_lower();
    footpath_upper();
    field();
    Building1();
    Building1_glass();
    Building2();
    Building3();
    Building4();
    building5();
    building_window();
    road();

    car_speed1();
    car_speed2();
    car3();
    ralling();
    plane();
    boat3();
    boat();
    boat2();

    right_tree();
    left_tree();
    lamp1();
    L1NL1();
    lamp2();
    L2NL2();
    lamp3();
    L3NL3();
    lamp4();
    L4NL4();

    glutTimerFunc(15000,display6,0);
   glFlush();
}




void display4(int val) {

 glutDisplayFunc(display5);


}

void display3() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    sky();//---------------------------------------------------

    glPushMatrix();
    glTranslatef(0.0,position8, 0.0f);
    sun2();
    glPopMatrix();
    cloud1();
    cloud2();
    birds();
    river();
    lower_footpath();
    ralling_lower();
    footpath_upper();
    field();
    Building1();
    Building1_glass();
    Building2();
    Building3();
    Building4();
    building5();
    building_window();
    road();
    car1();
    car2();
    ralling();
    plane();
    boat();
    boat2();
    boat3();
    right_tree();
    left_tree();
    lamp1();
    L1NL1();
    lamp2();
    L2NL2();
    lamp3();
    L3NL3();
    lamp4();
    L4NL4();

    glutTimerFunc(20000,display4,0);
    glFlush();
}

void display2(int val) {

    glutDisplayFunc(display3);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glEnable(GL_LIGHTING);
    GLfloat global_ambient19[] = {20,10,0,1.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient19);
    sky();//---------------------------------------------------
    glDisable(GL_LIGHTING);

    glPushMatrix();
    glTranslatef(0.0,position8, 0.0f);
    glEnable(GL_LIGHTING);
    GLfloat global_ambient20[] = {1.9,0.0,0.0,0.0};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient20);

    sun2();//---------------------------------------------------
    glDisable(GL_LIGHTING);
    glPopMatrix();
    cloud1();
    cloud2();
    birds();
    river();
    lower_footpath();
    ralling_lower();
    footpath_upper();
    field();
    Building1();
    Building1_glass();
    Building2();
    Building3();
    Building4();
    building5();
    building_window();
    road();
    //car1();
    car2();
    ralling();
    //plane();
    boat();
    right_tree();
    left_tree();
    lamp1();
    L1NL1();
    lamp2();
    L2NL2();
    lamp3();
    L3NL3();
    lamp4();
    L4NL4();

    glutTimerFunc(15000,display2,0);
    glFlush();
}

void handleKeypress(unsigned char key, int x, int y) {

    switch (key) {

        case 'a':
            speed = 0.0f;
            break;

        case 'd':
            speed = 0.08f;
            break;

        case 's':
            speed=0.2f;
            speed ++;
            break;

            case 'w':
            glutDisplayFunc(display);
            break;

        glutPostRedisplay();
    }
}

void sound()
{

    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME);
    PlaySound("street.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 420);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("City View");
    glutDisplayFunc(display);
    init();

    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(200, update, 0);

    sound();
    glutTimerFunc(200, update1, 0);
    glutTimerFunc(500, update2, 0);
    glutTimerFunc(100, update3, 0);


    glutTimerFunc(400, update4, 0);
    glutTimerFunc(400, update5, 0);
    glutTimerFunc(100, update6, 0);
    glutTimerFunc(100, update7, 0);

    glutTimerFunc(100, update8, 0);


    glutMainLoop();
    return 0;
}
