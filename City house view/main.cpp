#include <windows.h>
#include<bits/stdc++.h>
#include <GL/glut.h>
# define PI   3.14159265358979323846


GLfloat k = 0.0f;
GLfloat r = 0.0f ,r1 = 0.0f,r2 = 0.0f;

void Idle()
{
    glutPostRedisplay();
}
GLfloat position = 0.0f;
GLfloat speed = 0.07f;

void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
GLfloat position6 = 0.0f;
GLfloat speed6 = 0.07f;

void update6(int value) {

    if(position6 >1.0)
        position6 = -1.0f;

    position6 += speed6; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update6, 0);
}
GLfloat position1 = 0.0f;
GLfloat speed1 = 0.1f;
GLfloat speed2 = 0.1f;

void update1(int value) {

    if(position1 <-1.0)
        position1 =1.0f;

    position1 -= speed1; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}


void update2(int value) {

    if(position1 <-1.0)
        position1 = 1.0f;

    position1 -= speed2; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}
GLfloat position3 = 0.0f;
GLfloat speed3 = 0.1f;
void update3(int value) {

    if(position3 <-1.0)
        position3 = 1.0f;

    position3 -= speed3; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}


void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed += 0.1f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed -= 0.1f;
			}
	glutPostRedisplay();}



void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'p':
    speed = 0.0f;
    break;
case 's':
    speed = 0.1f;
    break;
glutPostRedisplay();
	}
}


void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
speed1=.5;
break;
case GLUT_KEY_DOWN:
speed1=0.0;
break;
case GLUT_KEY_LEFT:
    speed1=0.05;
break;
case GLUT_KEY_RIGHT:
break;}
glutPostRedisplay();}


void day() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.3);
int i;



//road
glBegin(GL_QUADS);
    glColor3ub(102, 102, 153);
    glVertex2f(-1.0f, 0.15f);
    glVertex2f(-1.0f, -0.15f);
    glVertex2f(1.0f, -0.15f);
    glVertex2f(1.0f, 0.15f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-.6f, 0.0f);



    glVertex2f(-0.4f, 0.0f);
    glVertex2f(-0.1f, 0.0f);



    glVertex2f(.1f, 0.0f);
    glVertex2f(.4f, 0.0f);
    glVertex2f(0.6f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glEnd();


//road end




//sky


glBegin(GL_QUADS);
    glColor3ub(51, 204, 255);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.15f);
    glVertex2f(1.0f, 0.15f);
    glVertex2f(1.0f, 1.0f);
    glEnd();



    //sky end



//floor


glBegin(GL_QUADS);
    glColor3ub(153, 102, 0);
    glVertex2f(-1.0f, -0.15f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.15f);
    glEnd();
//floor end




//sun



GLfloat x1=-0.5f; GLfloat y1=0.7f; GLfloat radius1 =.15f;
    int triangleAmount = 20;


    GLfloat twicePi1 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,0,0);
        glVertex2f(x1, y1);
        for(i = 0; i <=triangleAmount;i++) {
            glVertex2f(
                    x1 + (radius1 * cos(i *  twicePi1 / triangleAmount)),
                y1 + (radius1 * sin(i * twicePi1 / triangleAmount))
            );
        }
    glEnd();


//sun end


//plane

glPushMatrix();

       glTranslatef(position1,0.0f, 0.0f);
       glScalef(1.5,1.5,0);
       glBegin(GL_QUADS);
     glColor3ub(255, 204, 255);
      glVertex2f(-0.05f, 0.60f);
      glVertex2f( -0.05f,0.56f);
      glVertex2f( 0.05f, 0.56f);
      glVertex2f( 0.05f,  0.60f);

      glEnd();

      glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.01f, 0.56f);
      glVertex2f( 0.02f,0.52f);
      glVertex2f( 0.04f, 0.51f);
      glVertex2f( 0.01f,  0.56f);

      glEnd();


      glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.01f, 0.60f);
      glVertex2f( 0.01f,0.62f);
      glVertex2f( 0.02f, 0.63f);
      glVertex2f( 0.01f,  0.60f);

      glEnd();


       glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(0.04f, 0.60f);
      glVertex2f( 0.05f,0.60f);
      glVertex2f( 0.05f, 0.62f);

      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.05f, 0.60f);
      glVertex2f( -0.05f,0.56f);
      glVertex2f( -0.06f, 0.57f);

      glEnd();
 glLoadIdentity();
glPopMatrix();


//end plane



//cloud


//1
glPushMatrix();
glTranslatef(position,0,0);
GLfloat x111=0.5f; GLfloat y222=0.7f; GLfloat radius333 =.06f;
    int triangleAmount555 = 20;


    GLfloat twicePi444 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x111, y222);
        for(i = 0; i <=triangleAmount555;i++) {
            glVertex2f(
                    x111 + (radius333* cos(i *  twicePi444 / triangleAmount555)),
                y222 + (radius333 * sin(i * twicePi444 / triangleAmount555))
            );
        }
    glEnd();

GLfloat x1111=0.6f; GLfloat y2222=0.7f; GLfloat radius3333 =.06f;
    int triangleAmount5555 = 20;



    GLfloat twicePi4444 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x1111, y2222);
        for(i = 0; i <=triangleAmount5555;i++) {
            glVertex2f(
                    x1111 + (radius3333* cos(i *  twicePi4444 / triangleAmount5555)),
                y2222 + (radius3333 * sin(i * twicePi4444 / triangleAmount5555))
            );
        }
    glEnd();

GLfloat x11111=0.55f; GLfloat y22222=0.75f; GLfloat radius33333 =.06f;
    int triangleAmount55555 = 20;



    GLfloat twicePi44444 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x11111, y22222);
        for(i = 0; i <=triangleAmount55555;i++) {
            glVertex2f(
                    x11111 + (radius33333* cos(i *  twicePi44444 / triangleAmount55555)),
                y22222 + (radius33333 * sin(i * twicePi44444 / triangleAmount55555))
            );
        }
    glEnd();

//1 end

//2
GLfloat x101=-0.4f; GLfloat y102=0.77f; GLfloat radius103 =.06f;
    int triangleAmount104 = 20;



    GLfloat twicePi105 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x101, y102);
        for(i = 0; i <=triangleAmount104;i++) {
            glVertex2f(
                    x101 + (radius103* cos(i *  twicePi105 / triangleAmount104)),
                y102 + (radius103 * sin(i * twicePi105 / triangleAmount104))
            );
        }
    glEnd();

GLfloat x1001=-0.3f; GLfloat y1002=0.77f; GLfloat radius1003 =.06f;
    int triangleAmount1004 = 20;



    GLfloat twicePi1005 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x1001, y1002);
        for(i = 0; i <=triangleAmount1004;i++) {
            glVertex2f(
                    x1001 + (radius1003* cos(i *  twicePi1005 / triangleAmount1004)),
                y1002 + (radius1003 * sin(i * twicePi1005 / triangleAmount1004))
            );
        }
    glEnd();

GLfloat x10001=-0.35f; GLfloat y10002=0.82f; GLfloat radius10003 =.06f;
    int triangleAmount10004 = 20;



    GLfloat twicePi10005 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x10001, y10002);
        for(i = 0; i <=triangleAmount10004;i++) {
            glVertex2f(
                    x10001 + (radius10003* cos(i *  twicePi10005 / triangleAmount10004)),
                y10002 + (radius10003 * sin(i * twicePi10005 / triangleAmount10004))
            );
        }
    glEnd();

glPopMatrix();

//2 end

//cloud end


//building 1


glBegin(GL_QUADS);
    glColor3ub(153, 255, 102);
    glVertex2f(-0.85f, 0.15f);
    glVertex2f(-0.55f, 0.15f);
    glVertex2f(-0.55f, 0.7f);
    glVertex2f(-0.85f, 0.7f);



    //1
    glColor3ub(255, 255, 255);
    glVertex2f(-0.82f, 0.6f);
    glVertex2f(-0.82f, 0.55f);
    glVertex2f(-0.78f, 0.55f);
    glVertex2f(-0.78f, 0.6f);



    //2
    glColor3ub(255, 255, 255);
    glVertex2f(-0.82f, 0.3f);
    glVertex2f(-0.82f, 0.25f);
    glVertex2f(-0.78f, 0.25f);
    glVertex2f(-0.78f, 0.3f);



    //3
glColor3ub(255, 255, 255);
    glVertex2f(-0.62f, 0.6f);
    glVertex2f(-0.62f, 0.55f);
    glVertex2f(-0.58f, 0.55f);
    glVertex2f(-0.58f, 0.6f);



    //4
glColor3ub(255, 255, 255);
    glVertex2f(-0.62f, 0.3f);
    glVertex2f(-0.62f, 0.25f);
    glVertex2f(-0.58f, 0.25f);
    glVertex2f(-0.58f, 0.3f);



    glEnd();




//end building 1



//building 2




glBegin(GL_QUADS);
    glColor3ub(255, 255, 153);
    glVertex2f(-0.55f, 0.55f);
    glVertex2f(-0.55f, 0.15f);
    glVertex2f(-0.25f, 0.15f);
    glVertex2f(-0.25f, 0.55f);
 glEnd();



 //1



 glBegin(GL_QUADS);
    glColor3ub(102, 255, 153);
    glVertex2f(-0.49f, 0.45f);
    glVertex2f(-0.49f, 0.38f);
    glVertex2f(-0.43f, 0.38f);
    glVertex2f(-0.43f, 0.45f);
 glEnd();



 //2



 glBegin(GL_QUADS);
    glColor3ub(102, 255, 153);
    glVertex2f(-0.49f, 0.33f);
    glVertex2f(-0.49f, 0.25f);
    glVertex2f(-0.43f, 0.25f);
    glVertex2f(-0.43f, 0.33f);
 glEnd();



//3




glBegin(GL_QUADS);
    glColor3ub(102, 255, 153);
    glVertex2f(-0.37f, 0.45f);
    glVertex2f(-0.37f, 0.38f);
    glVertex2f(-0.31f, 0.38f);
    glVertex2f(-0.31f, 0.45f);
 glEnd();



 //4



 glBegin(GL_QUADS);
    glColor3ub(102, 255, 153);
    glVertex2f(-0.37f, 0.33f);
    glVertex2f(-0.37f, 0.25f);
    glVertex2f(-0.31f, 0.25f);
    glVertex2f(-0.31f, 0.33f);
 glEnd();




//end building 2
//building 3



glBegin(GL_QUADS);
    glColor3ub(153, 255, 102);
    glVertex2f(0.85f, 0.15f);
    glVertex2f(0.55f, 0.15f);
    glVertex2f(0.55f, 0.7f);
    glVertex2f(0.85f, 0.7f);



    //1
    glColor3ub(255, 255, 255);
    glVertex2f(0.82f, 0.6f);
    glVertex2f(0.82f, 0.55f);
    glVertex2f(0.78f, 0.55f);
    glVertex2f(0.78f, 0.6f);



    //2
    glColor3ub(255, 255, 255);
    glVertex2f(0.82f, 0.3f);
    glVertex2f(0.82f, 0.25f);
    glVertex2f(0.78f, 0.25f);
    glVertex2f(0.78f, 0.3f);



    //3
glColor3ub(255, 255, 255);
    glVertex2f(0.62f, 0.6f);
    glVertex2f(0.62f, 0.55f);
    glVertex2f(0.58f, 0.55f);
    glVertex2f(0.58f, 0.6f);



    //4
glColor3ub(255, 255, 255);
    glVertex2f(0.62f, 0.3f);
    glVertex2f(0.62f, 0.25f);
    glVertex2f(0.58f, 0.25f);
    glVertex2f(0.58f, 0.3f);



    glEnd();




//end building 3



//car



glPushMatrix();
glTranslatef(position6,0,0);
   glBegin(GL_QUADS);
GLfloat x11=.4f; GLfloat y11=-.067f;
GLfloat radius211 =.04f;
GLfloat twicePi31 = 2.0f * PI;
int triangleAmount11 = 20;
glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x11, y11);
        for(i = 0; i <= triangleAmount11;i++) {
            glVertex2f(
                    x11+ (radius211* cos(i *  twicePi31 / triangleAmount11)),
                y11+ (radius211* sin(i * twicePi31 / triangleAmount11))
            );
        }



    glEnd();





    GLfloat x2=.65f; GLfloat y2=-.067f;
GLfloat radius24 =.04f;
GLfloat twicePi4 = 2.0f * PI;
int triangleAmount2 = 20;
glColor3ub(0, 0, 0); // Red
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x2, y2); // center of circle
        for(i = 0; i <= triangleAmount2;i++) {
            glVertex2f(
                    x2+ (radius24* cos(i *  twicePi4 / triangleAmount2)),
                y2+ (radius24* sin(i * twicePi4 / triangleAmount2))
            );
        }



    glEnd();




    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(0.3f, -0.039f);
    glVertex2f(0.7f, -0.039f);
    glVertex2f(.7f, 0.15f);
    glVertex2f(0.3f, .15f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.3f, .15f);
    glVertex2f(.7f, 0.15f);
    glEnd();



        glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(.7f, 0.15f);
    glVertex2f(0.7f, -0.039f);
    glVertex2f(0.78f, -0.039f);
    glVertex2f(0.78f, 0.12f);
    glEnd();



glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.3f, .15f);
    glVertex2f(0.3f, .15f);
    glVertex2f(.7f, 0.15f);
    glVertex2f(.7f, 0.15f);
     glVertex2f(0.6f, 0.3f);



     glVertex2f(.5f, 0.3f);
     glVertex2f(0.5f, 0.15f);




    glEnd();

glPopMatrix();



//end car



//traffic signal



//ex STAND



glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.0,0.15);
    glVertex2f(0.03,0.15);
    glVertex2f(0.015,0.8);
    glEnd();



glBegin(GL_POLYGON);
    glColor3ub(153, 102, 51);
    glVertex2f(-0.01f, 0.8f);
    glVertex2f(-0.01f, 0.45f);
    glVertex2f(0.037f, 0.45f);
    glVertex2f(0.037f, 0.8f);
    glEnd();






    //TRAFFIC LIGHT





    GLfloat x10=.0135f; GLfloat y10=0.65f;
GLfloat radius210 =.023f;
GLfloat twicePi30 = 2.0f * PI;
int triangleAmount10 = 20;
glColor3ub(255, 255, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x10, y10);
        for(i = 0; i <= triangleAmount10;i++) {
            glVertex2f(
                    x10+ (radius210* cos(i *  twicePi30 / triangleAmount10)),
                y10+ (radius210* sin(i * twicePi30 / triangleAmount10))
            );
        }



    glEnd();





    GLfloat x20=.0135f; GLfloat y20=.75f;
GLfloat radius240 =.023f;
GLfloat twicePi40 = 2.0f * PI;
int triangleAmount20 = 20;
glColor3ub(255, 0, 0); // Red
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x20, y20); // center of circle
        for(i = 0; i <= triangleAmount20;i++) {
            glVertex2f(
                    x20+ (radius240* cos(i *  twicePi40 / triangleAmount20)),
                y20+ (radius240* sin(i * twicePi40 / triangleAmount20))
            );
        }



    glEnd();



    GLfloat x200=.0135f; GLfloat y200=.55f;
GLfloat radius2400 =.023f;
GLfloat twicePi400 = 2.0f * PI;
int triangleAmount200 = 20;
glColor3ub(0, 255, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x200, y200); // center of circle
        for(i = 0; i <= triangleAmount20;i++) {
            glVertex2f(
                    x200+ (radius2400* cos(i *  twicePi400 / triangleAmount200)),
                y200+ (radius2400* sin(i * twicePi400 / triangleAmount200))
            );
        }



    glEnd();
//traffic signal end


//tree




    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.85f, -0.45f);
    glVertex2f(-0.85f, -0.8f);
    glVertex2f(-.8f, -0.8f);
    glVertex2f(-0.8f, -.45f);
    glEnd();






GLfloat x2001=-.875f; GLfloat y2001=-.45f;
GLfloat radius24001 =.07f;
GLfloat twicePi4001 = 2.0f * PI;
int triangleAmount2001 = 20;
glColor3ub(0, 153, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x2001, y2001); // center of circle
        for(i = 0; i <= triangleAmount2001;i++) {
            glVertex2f(
                    x2001+ (radius24001* cos(i *  twicePi4001 / triangleAmount2001)),
                y2001+ (radius24001* sin(i * twicePi4001 / triangleAmount2001))
            );
        }



    glEnd();




GLfloat x2002=-.775f; GLfloat y2002=-.45f;
GLfloat radius24002 =.07f;
GLfloat twicePi4002 = 2.0f * PI;
int triangleAmount2002 = 20;
glColor3ub(0, 153, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x2002, y2002); // center of circle
        for(i = 0; i <= triangleAmount2002;i++) {
            glVertex2f(
                    x2002+ (radius24002* cos(i *  twicePi4002 / triangleAmount2002)),
                y2002+ (radius24002* sin(i * twicePi4002 / triangleAmount2002))
            );
        }



    glEnd();






GLfloat x2003=-.825f; GLfloat y2003=-.37f;
GLfloat radius24003 =.07f;
GLfloat twicePi4003 = 2.0f * PI;
int triangleAmount2003 = 20;
glColor3ub(0, 153, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x2003, y2003); // center of circle
        for(i = 0; i <= triangleAmount2003;i++) {
            glVertex2f(
                    x2003+ (radius24003* cos(i *  twicePi4003 / triangleAmount2003)),
                y2003+ (radius24003* sin(i * twicePi4003 / triangleAmount2003))
            );
        }



    glEnd();
    //end tree


    //fence




glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.5f, -0.9f);
     glVertex2f(0.7f, -0.5f);
    glVertex2f(0.7f, -0.9f);
     glVertex2f(0.9f, -0.5f);
    glVertex2f(0.9f, -0.9f);




       glVertex2f(0.45f, -0.6f);
    glVertex2f(0.95f, -0.6f);



    glVertex2f(0.45f, -0.7f);
    glVertex2f(0.95f, -0.7f);



    glVertex2f(0.45f, -0.8f);
    glVertex2f(0.95f, -0.8f);






    glEnd();




//end fence


//wind mill rotation

  glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.75,-0.15);
    glVertex2f(-0.71,-0.15);
    glVertex2f(-0.71,0.5);
    glVertex2f(-0.75,0.5);
    glEnd();

glPushMatrix();
glTranslatef(-.73,.5, 0);
 glRotatef(k,0.0,0.0,.1);
      glBegin(GL_TRIANGLES);
    glColor3ub(128,0, 0);
    glVertex2f(0,0);
    glVertex2f(.1,0.2);
    glVertex2f(-.1,.2);
    glEnd();


      glBegin(GL_TRIANGLES);
glColor3ub(128,0, 0);
    glVertex2f(0,0);
    glVertex2f(-.2,.1);
    glVertex2f(-.2,-.1);
    glEnd();


      glBegin(GL_TRIANGLES);

    glColor3ub(128,0,0);
    glVertex2f(0,0);
    glVertex2f(.2,-.1);
    glVertex2f(.2,.1);

glEnd();

  glPopMatrix();
   k-=0.1f;
 glLoadIdentity();

    //end windmill rotation

    //adding clock

 glBegin(GL_QUADS);
    glColor3ub(102, 255, 255);
    glVertex2f(0.75,-0.15);
    glVertex2f(0.71,-0.15);
    glVertex2f(0.71,0.5);
    glVertex2f(0.75,0.5);
    glEnd();




glTranslatef(.73,.5,0);
   glScalef(.15,.15,0);

//cover
GLfloat x100=0.0f; GLfloat y100=0.0f; GLfloat radius100 =0.9f;
 triangleAmount = 20;

GLfloat twicePi10 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 153);
glVertex2f(x100, y100);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
           x100 + (radius100 * cos(i *  twicePi10 / triangleAmount)),
   y100 + (radius100 * sin(i * twicePi10 / triangleAmount))
);
}
glEnd();




GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =.85f;
triangleAmount = 20;

GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
glVertex2f(x, y);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();


GLfloat x5=0.0f; GLfloat y5=0.0f; GLfloat radius5 =.8f;
triangleAmount = 20;

GLfloat twicePi5 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(204, 204, 255);
glVertex2f(x5, y5);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
           x5 + (radius5 * cos(i *  twicePi5 / triangleAmount)),
   y5+ (radius5 * sin(i * twicePi5 / triangleAmount))
);
}
glEnd();


 // TIME

glBegin(GL_LINES);
glLineWidth(5);
glColor3ub(0, 204, 153);
glVertex2f(0.0f, .8f);
glVertex2f(0.0f, .7f);
glEnd();



glBegin(GL_LINES);
glLineWidth(5);
glColor3ub(0, 204, 153);
glVertex2f(0.0f, -.8f);
glVertex2f(0.0f, -.7f);
glEnd();


glBegin(GL_LINES);
glLineWidth(5);
glColor3ub(0, 204, 153);
glVertex2f(.7f, 0.0f);
glVertex2f(.8f, 0.0f);
glEnd();


    glBegin(GL_LINES);
glLineWidth(5);
glColor3ub(0, 204, 153);
glVertex2f(-.7f, 0.0f);
glVertex2f(-.8f, 0.0f);
glEnd();


//end TIME

   glPushMatrix();

   //hour

    glRotatef(r,0.0,0.0,1.0);
glBegin(GL_POLYGON);
glColor3ub(255, 51, 0);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(.05f, .25f);
     glVertex2f(0.0f, .45f);
    glVertex2f(-.05f, .25f);
    glEnd();





//minute

   glRotatef(r1,0.0,0.0,1.0);
   glBegin(GL_POLYGON);
   glColor3ub(102, 102, 51);
   glVertex2f(0.0f, 0.0f);
   glVertex2f(.03f, -.03f);
   glVertex2f(0.0f, -.6f);
   glVertex2f(-.03f, -.3f);
   glEnd();
//second
    glRotatef(r2,0.0,0.0,1.0);
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(153, 51, 153);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-.68f, 0.0f);
    glEnd();

glPopMatrix();
   r-=0.005f,r1-=0.01f, r2-=0.05f;
 glLoadIdentity();

 glLoadIdentity();



    glFlush();
}

void night() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.3);
int i;



//road
glBegin(GL_QUADS);
    glColor3ub(102, 102, 153);
    glVertex2f(-1.0f, 0.15f);
    glVertex2f(-1.0f, -0.15f);
    glVertex2f(1.0f, -0.15f);
    glVertex2f(1.0f, 0.15f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-.6f, 0.0f);



    glVertex2f(-0.4f, 0.0f);
    glVertex2f(-0.1f, 0.0f);



    glVertex2f(.1f, 0.0f);
    glVertex2f(.4f, 0.0f);
    glVertex2f(0.6f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glEnd();


//road end




//sky


glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.15f);
    glVertex2f(1.0f, 0.15f);
    glVertex2f(1.0f, 1.0f);
    glEnd();



    //sky end



//floor


glBegin(GL_QUADS);
    glColor3ub(153, 102, 0);
    glVertex2f(-1.0f, -0.15f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.15f);
    glEnd();
//floor end




//sun



GLfloat x1=-0.5f; GLfloat y1=0.7f; GLfloat radius1 =.15f;
    int triangleAmount = 20;


    GLfloat twicePi1 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x1, y1);
        for(i = 0; i <=triangleAmount;i++) {
            glVertex2f(
                    x1 + (radius1 * cos(i *  twicePi1 / triangleAmount)),
                y1 + (radius1 * sin(i * twicePi1 / triangleAmount))
            );
        }
    glEnd();


//sun end


//plane

glPushMatrix();

       glTranslatef(position1,0.0f, 0.0f);
       glScalef(1.5,1.5,0);
       glBegin(GL_QUADS);
     glColor3ub(255, 204, 255);
      glVertex2f(-0.05f, 0.60f);
      glVertex2f( -0.05f,0.56f);
      glVertex2f( 0.05f, 0.56f);
      glVertex2f( 0.05f,  0.60f);

      glEnd();

      glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.01f, 0.56f);
      glVertex2f( 0.02f,0.52f);
      glVertex2f( 0.04f, 0.51f);
      glVertex2f( 0.01f,  0.56f);

      glEnd();


      glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.01f, 0.60f);
      glVertex2f( 0.01f,0.62f);
      glVertex2f( 0.02f, 0.63f);
      glVertex2f( 0.01f,  0.60f);

      glEnd();


       glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(0.04f, 0.60f);
      glVertex2f( 0.05f,0.60f);
      glVertex2f( 0.05f, 0.62f);

      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.05f, 0.60f);
      glVertex2f( -0.05f,0.56f);
      glVertex2f( -0.06f, 0.57f);

      glEnd();
 glLoadIdentity();
glPopMatrix();


//end plane



//cloud
/*

//1
glPushMatrix();
glTranslatef(position,0,0);
GLfloat x111=0.5f; GLfloat y222=0.7f; GLfloat radius333 =.06f;
    int triangleAmount555 = 20;


    GLfloat twicePi444 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x111, y222);
        for(i = 0; i <=triangleAmount555;i++) {
            glVertex2f(
                    x111 + (radius333* cos(i *  twicePi444 / triangleAmount555)),
                y222 + (radius333 * sin(i * twicePi444 / triangleAmount555))
            );
        }
    glEnd();

GLfloat x1111=0.6f; GLfloat y2222=0.7f; GLfloat radius3333 =.06f;
    int triangleAmount5555 = 20;



    GLfloat twicePi4444 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x1111, y2222);
        for(i = 0; i <=triangleAmount5555;i++) {
            glVertex2f(
                    x1111 + (radius3333* cos(i *  twicePi4444 / triangleAmount5555)),
                y2222 + (radius3333 * sin(i * twicePi4444 / triangleAmount5555))
            );
        }
    glEnd();

GLfloat x11111=0.55f; GLfloat y22222=0.75f; GLfloat radius33333 =.06f;
    int triangleAmount55555 = 20;



    GLfloat twicePi44444 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x11111, y22222);
        for(i = 0; i <=triangleAmount55555;i++) {
            glVertex2f(
                    x11111 + (radius33333* cos(i *  twicePi44444 / triangleAmount55555)),
                y22222 + (radius33333 * sin(i * twicePi44444 / triangleAmount55555))
            );
        }
    glEnd();

//1 end

//2
GLfloat x101=-0.4f; GLfloat y102=0.77f; GLfloat radius103 =.06f;
    int triangleAmount104 = 20;



    GLfloat twicePi105 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x101, y102);
        for(i = 0; i <=triangleAmount104;i++) {
            glVertex2f(
                    x101 + (radius103* cos(i *  twicePi105 / triangleAmount104)),
                y102 + (radius103 * sin(i * twicePi105 / triangleAmount104))
            );
        }
    glEnd();

GLfloat x1001=-0.3f; GLfloat y1002=0.77f; GLfloat radius1003 =.06f;
    int triangleAmount1004 = 20;



    GLfloat twicePi1005 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x1001, y1002);
        for(i = 0; i <=triangleAmount1004;i++) {
            glVertex2f(
                    x1001 + (radius1003* cos(i *  twicePi1005 / triangleAmount1004)),
                y1002 + (radius1003 * sin(i * twicePi1005 / triangleAmount1004))
            );
        }
    glEnd();

GLfloat x10001=-0.35f; GLfloat y10002=0.82f; GLfloat radius10003 =.06f;
    int triangleAmount10004 = 20;



    GLfloat twicePi10005 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x10001, y10002);
        for(i = 0; i <=triangleAmount10004;i++) {
            glVertex2f(
                    x10001 + (radius10003* cos(i *  twicePi10005 / triangleAmount10004)),
                y10002 + (radius10003 * sin(i * twicePi10005 / triangleAmount10004))
            );
        }
    glEnd();

glPopMatrix();

//2 end

//cloud end
*/

//building 1


glBegin(GL_QUADS);
    glColor3ub(153, 255, 102);
    glVertex2f(-0.85f, 0.15f);
    glVertex2f(-0.55f, 0.15f);
    glVertex2f(-0.55f, 0.7f);
    glVertex2f(-0.85f, 0.7f);



    //1
    glColor3ub(255, 255, 255);
    glVertex2f(-0.82f, 0.6f);
    glVertex2f(-0.82f, 0.55f);
    glVertex2f(-0.78f, 0.55f);
    glVertex2f(-0.78f, 0.6f);



    //2
    glColor3ub(255, 255, 255);
    glVertex2f(-0.82f, 0.3f);
    glVertex2f(-0.82f, 0.25f);
    glVertex2f(-0.78f, 0.25f);
    glVertex2f(-0.78f, 0.3f);



    //3
glColor3ub(255, 255, 255);
    glVertex2f(-0.62f, 0.6f);
    glVertex2f(-0.62f, 0.55f);
    glVertex2f(-0.58f, 0.55f);
    glVertex2f(-0.58f, 0.6f);



    //4
glColor3ub(255, 255, 255);
    glVertex2f(-0.62f, 0.3f);
    glVertex2f(-0.62f, 0.25f);
    glVertex2f(-0.58f, 0.25f);
    glVertex2f(-0.58f, 0.3f);



    glEnd();




//end building 1



//building 2




glBegin(GL_QUADS);
    glColor3ub(255, 255, 153);
    glVertex2f(-0.55f, 0.55f);
    glVertex2f(-0.55f, 0.15f);
    glVertex2f(-0.25f, 0.15f);
    glVertex2f(-0.25f, 0.55f);
 glEnd();



 //1



 glBegin(GL_QUADS);
    glColor3ub(102, 255, 153);
    glVertex2f(-0.49f, 0.45f);
    glVertex2f(-0.49f, 0.38f);
    glVertex2f(-0.43f, 0.38f);
    glVertex2f(-0.43f, 0.45f);
 glEnd();



 //2



 glBegin(GL_QUADS);
    glColor3ub(102, 255, 153);
    glVertex2f(-0.49f, 0.33f);
    glVertex2f(-0.49f, 0.25f);
    glVertex2f(-0.43f, 0.25f);
    glVertex2f(-0.43f, 0.33f);
 glEnd();



//3




glBegin(GL_QUADS);
    glColor3ub(102, 255, 153);
    glVertex2f(-0.37f, 0.45f);
    glVertex2f(-0.37f, 0.38f);
    glVertex2f(-0.31f, 0.38f);
    glVertex2f(-0.31f, 0.45f);
 glEnd();



 //4



 glBegin(GL_QUADS);
    glColor3ub(102, 255, 153);
    glVertex2f(-0.37f, 0.33f);
    glVertex2f(-0.37f, 0.25f);
    glVertex2f(-0.31f, 0.25f);
    glVertex2f(-0.31f, 0.33f);
 glEnd();




//end building 2
//building 3



glBegin(GL_QUADS);
    glColor3ub(153, 255, 102);
    glVertex2f(0.85f, 0.15f);
    glVertex2f(0.55f, 0.15f);
    glVertex2f(0.55f, 0.7f);
    glVertex2f(0.85f, 0.7f);



    //1
    glColor3ub(255, 255, 255);
    glVertex2f(0.82f, 0.6f);
    glVertex2f(0.82f, 0.55f);
    glVertex2f(0.78f, 0.55f);
    glVertex2f(0.78f, 0.6f);



    //2
    glColor3ub(255, 255, 255);
    glVertex2f(0.82f, 0.3f);
    glVertex2f(0.82f, 0.25f);
    glVertex2f(0.78f, 0.25f);
    glVertex2f(0.78f, 0.3f);



    //3
glColor3ub(255, 255, 255);
    glVertex2f(0.62f, 0.6f);
    glVertex2f(0.62f, 0.55f);
    glVertex2f(0.58f, 0.55f);
    glVertex2f(0.58f, 0.6f);



    //4
glColor3ub(255, 255, 255);
    glVertex2f(0.62f, 0.3f);
    glVertex2f(0.62f, 0.25f);
    glVertex2f(0.58f, 0.25f);
    glVertex2f(0.58f, 0.3f);



    glEnd();




//end building 3



//car



glPushMatrix();
glTranslatef(position6,0,0);
   glBegin(GL_QUADS);
GLfloat x11=.4f; GLfloat y11=-.067f;
GLfloat radius211 =.04f;
GLfloat twicePi31 = 2.0f * PI;
int triangleAmount11 = 20;
glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x11, y11);
        for(i = 0; i <= triangleAmount11;i++) {
            glVertex2f(
                    x11+ (radius211* cos(i *  twicePi31 / triangleAmount11)),
                y11+ (radius211* sin(i * twicePi31 / triangleAmount11))
            );
        }



    glEnd();





    GLfloat x2=.65f; GLfloat y2=-.067f;
GLfloat radius24 =.04f;
GLfloat twicePi4 = 2.0f * PI;
int triangleAmount2 = 20;
glColor3ub(0, 0, 0); // Red
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x2, y2); // center of circle
        for(i = 0; i <= triangleAmount2;i++) {
            glVertex2f(
                    x2+ (radius24* cos(i *  twicePi4 / triangleAmount2)),
                y2+ (radius24* sin(i * twicePi4 / triangleAmount2))
            );
        }



    glEnd();




    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(0.3f, -0.039f);
    glVertex2f(0.7f, -0.039f);
    glVertex2f(.7f, 0.15f);
    glVertex2f(0.3f, .15f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.3f, .15f);
    glVertex2f(.7f, 0.15f);
    glEnd();



        glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(.7f, 0.15f);
    glVertex2f(0.7f, -0.039f);
    glVertex2f(0.78f, -0.039f);
    glVertex2f(0.78f, 0.12f);
    glEnd();



glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.3f, .15f);
    glVertex2f(0.3f, .15f);
    glVertex2f(.7f, 0.15f);
    glVertex2f(.7f, 0.15f);
     glVertex2f(0.6f, 0.3f);



     glVertex2f(.5f, 0.3f);
     glVertex2f(0.5f, 0.15f);




    glEnd();

glPopMatrix();



//end car



//traffic signal



//ex STAND



glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.0,0.15);
    glVertex2f(0.03,0.15);
    glVertex2f(0.015,0.8);
    glEnd();



glBegin(GL_POLYGON);
    glColor3ub(153, 102, 51);
    glVertex2f(-0.01f, 0.8f);
    glVertex2f(-0.01f, 0.45f);
    glVertex2f(0.037f, 0.45f);
    glVertex2f(0.037f, 0.8f);
    glEnd();






    //TRAFFIC LIGHT





    GLfloat x10=.0135f; GLfloat y10=0.65f;
GLfloat radius210 =.023f;
GLfloat twicePi30 = 2.0f * PI;
int triangleAmount10 = 20;
glColor3ub(255, 255, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x10, y10);
        for(i = 0; i <= triangleAmount10;i++) {
            glVertex2f(
                    x10+ (radius210* cos(i *  twicePi30 / triangleAmount10)),
                y10+ (radius210* sin(i * twicePi30 / triangleAmount10))
            );
        }



    glEnd();





    GLfloat x20=.0135f; GLfloat y20=.75f;
GLfloat radius240 =.023f;
GLfloat twicePi40 = 2.0f * PI;
int triangleAmount20 = 20;
glColor3ub(255, 0, 0); // Red
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x20, y20); // center of circle
        for(i = 0; i <= triangleAmount20;i++) {
            glVertex2f(
                    x20+ (radius240* cos(i *  twicePi40 / triangleAmount20)),
                y20+ (radius240* sin(i * twicePi40 / triangleAmount20))
            );
        }



    glEnd();



    GLfloat x200=.0135f; GLfloat y200=.55f;
GLfloat radius2400 =.023f;
GLfloat twicePi400 = 2.0f * PI;
int triangleAmount200 = 20;
glColor3ub(0, 255, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x200, y200); // center of circle
        for(i = 0; i <= triangleAmount20;i++) {
            glVertex2f(
                    x200+ (radius2400* cos(i *  twicePi400 / triangleAmount200)),
                y200+ (radius2400* sin(i * twicePi400 / triangleAmount200))
            );
        }



    glEnd();
//traffic signal end


//tree




    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.85f, -0.45f);
    glVertex2f(-0.85f, -0.8f);
    glVertex2f(-.8f, -0.8f);
    glVertex2f(-0.8f, -.45f);
    glEnd();






GLfloat x2001=-.875f; GLfloat y2001=-.45f;
GLfloat radius24001 =.07f;
GLfloat twicePi4001 = 2.0f * PI;
int triangleAmount2001 = 20;
glColor3ub(0, 153, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x2001, y2001); // center of circle
        for(i = 0; i <= triangleAmount2001;i++) {
            glVertex2f(
                    x2001+ (radius24001* cos(i *  twicePi4001 / triangleAmount2001)),
                y2001+ (radius24001* sin(i * twicePi4001 / triangleAmount2001))
            );
        }



    glEnd();




GLfloat x2002=-.775f; GLfloat y2002=-.45f;
GLfloat radius24002 =.07f;
GLfloat twicePi4002 = 2.0f * PI;
int triangleAmount2002 = 20;
glColor3ub(0, 153, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x2002, y2002); // center of circle
        for(i = 0; i <= triangleAmount2002;i++) {
            glVertex2f(
                    x2002+ (radius24002* cos(i *  twicePi4002 / triangleAmount2002)),
                y2002+ (radius24002* sin(i * twicePi4002 / triangleAmount2002))
            );
        }



    glEnd();






GLfloat x2003=-.825f; GLfloat y2003=-.37f;
GLfloat radius24003 =.07f;
GLfloat twicePi4003 = 2.0f * PI;
int triangleAmount2003 = 20;
glColor3ub(0, 153, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x2003, y2003); // center of circle
        for(i = 0; i <= triangleAmount2003;i++) {
            glVertex2f(
                    x2003+ (radius24003* cos(i *  twicePi4003 / triangleAmount2003)),
                y2003+ (radius24003* sin(i * twicePi4003 / triangleAmount2003))
            );
        }



    glEnd();
    //end tree


    //fence




glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.5f, -0.9f);
     glVertex2f(0.7f, -0.5f);
    glVertex2f(0.7f, -0.9f);
     glVertex2f(0.9f, -0.5f);
    glVertex2f(0.9f, -0.9f);




       glVertex2f(0.45f, -0.6f);
    glVertex2f(0.95f, -0.6f);



    glVertex2f(0.45f, -0.7f);
    glVertex2f(0.95f, -0.7f);



    glVertex2f(0.45f, -0.8f);
    glVertex2f(0.95f, -0.8f);






    glEnd();




//end fence


//wind mill rotation

  glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.75,-0.15);
    glVertex2f(-0.71,-0.15);
    glVertex2f(-0.71,0.5);
    glVertex2f(-0.75,0.5);
    glEnd();

glPushMatrix();
glTranslatef(-.73,.5, 0);
 glRotatef(k,0.0,0.0,.1);
      glBegin(GL_TRIANGLES);
    glColor3ub(128,0, 0);
    glVertex2f(0,0);
    glVertex2f(.1,0.2);
    glVertex2f(-.1,.2);
    glEnd();


      glBegin(GL_TRIANGLES);
glColor3ub(128,0, 0);
    glVertex2f(0,0);
    glVertex2f(-.2,.1);
    glVertex2f(-.2,-.1);
    glEnd();


      glBegin(GL_TRIANGLES);

    glColor3ub(128,0,0);
    glVertex2f(0,0);
    glVertex2f(.2,-.1);
    glVertex2f(.2,.1);

glEnd();

  glPopMatrix();
   k-=0.1f;
 glLoadIdentity();

    //end windmill rotation

    //adding clock

 glBegin(GL_QUADS);
    glColor3ub(102, 255, 255);
    glVertex2f(0.75,-0.15);
    glVertex2f(0.71,-0.15);
    glVertex2f(0.71,0.5);
    glVertex2f(0.75,0.5);
    glEnd();




glTranslatef(.73,.5,0);
   glScalef(.15,.15,0);

//cover
GLfloat x100=0.0f; GLfloat y100=0.0f; GLfloat radius100 =0.9f;
 triangleAmount = 20;

GLfloat twicePi10 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 153);
glVertex2f(x100, y100);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
           x100 + (radius100 * cos(i *  twicePi10 / triangleAmount)),
   y100 + (radius100 * sin(i * twicePi10 / triangleAmount))
);
}
glEnd();




GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =.85f;
triangleAmount = 20;

GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
glVertex2f(x, y);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();


GLfloat x5=0.0f; GLfloat y5=0.0f; GLfloat radius5 =.8f;
triangleAmount = 20;

GLfloat twicePi5 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(204, 204, 255);
glVertex2f(x5, y5);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
           x5 + (radius5 * cos(i *  twicePi5 / triangleAmount)),
   y5+ (radius5 * sin(i * twicePi5 / triangleAmount))
);
}
glEnd();


 // TIME

glBegin(GL_LINES);
glLineWidth(5);
glColor3ub(0, 204, 153);
glVertex2f(0.0f, .8f);
glVertex2f(0.0f, .7f);
glEnd();



glBegin(GL_LINES);
glLineWidth(5);
glColor3ub(0, 204, 153);
glVertex2f(0.0f, -.8f);
glVertex2f(0.0f, -.7f);
glEnd();


glBegin(GL_LINES);
glLineWidth(5);
glColor3ub(0, 204, 153);
glVertex2f(.7f, 0.0f);
glVertex2f(.8f, 0.0f);
glEnd();


    glBegin(GL_LINES);
glLineWidth(5);
glColor3ub(0, 204, 153);
glVertex2f(-.7f, 0.0f);
glVertex2f(-.8f, 0.0f);
glEnd();


//end TIME

   glPushMatrix();

   //hour

    glRotatef(r,0.0,0.0,1.0);
glBegin(GL_POLYGON);
glColor3ub(255, 51, 0);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(.05f, .25f);
     glVertex2f(0.0f, .45f);
    glVertex2f(-.05f, .25f);
    glEnd();





//minute

   glRotatef(r1,0.0,0.0,1.0);
   glBegin(GL_POLYGON);
   glColor3ub(102, 102, 51);
   glVertex2f(0.0f, 0.0f);
   glVertex2f(.03f, -.03f);
   glVertex2f(0.0f, -.6f);
   glVertex2f(-.03f, -.3f);
   glEnd();
//second
    glRotatef(r2,0.0,0.0,1.0);
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(153, 51, 153);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-.68f, 0.0f);
    glEnd();

glPopMatrix();
   r-=0.005f,r1-=0.01f, r2-=0.05f;
 glLoadIdentity();

 glLoadIdentity();



    glFlush();
}
void rain() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.3);
int i;



//road
glBegin(GL_QUADS);
    glColor3ub(102, 102, 153);
    glVertex2f(-1.0f, 0.15f);
    glVertex2f(-1.0f, -0.15f);
    glVertex2f(1.0f, -0.15f);
    glVertex2f(1.0f, 0.15f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-.6f, 0.0f);



    glVertex2f(-0.4f, 0.0f);
    glVertex2f(-0.1f, 0.0f);



    glVertex2f(.1f, 0.0f);
    glVertex2f(.4f, 0.0f);
    glVertex2f(0.6f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glEnd();


//road end




//sky


glBegin(GL_QUADS);
    glColor3ub(51, 204, 255);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.15f);
    glVertex2f(1.0f, 0.15f);
    glVertex2f(1.0f, 1.0f);
    glEnd();



    //sky end



//floor


glBegin(GL_QUADS);
    glColor3ub(153, 102, 0);
    glVertex2f(-1.0f, -0.15f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, -0.15f);
    glEnd();
//floor end




//sun



GLfloat x1=-0.5f; GLfloat y1=0.7f; GLfloat radius1 =.15f;
    int triangleAmount = 20;


    GLfloat twicePi1 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,0,0);
        glVertex2f(x1, y1);
        for(i = 0; i <=triangleAmount;i++) {
            glVertex2f(
                    x1 + (radius1 * cos(i *  twicePi1 / triangleAmount)),
                y1 + (radius1 * sin(i * twicePi1 / triangleAmount))
            );
        }
    glEnd();


//sun end


//plane

glPushMatrix();

       glTranslatef(position1,0.0f, 0.0f);
       glScalef(1.5,1.5,0);
       glBegin(GL_QUADS);
     glColor3ub(255, 204, 255);
      glVertex2f(-0.05f, 0.60f);
      glVertex2f( -0.05f,0.56f);
      glVertex2f( 0.05f, 0.56f);
      glVertex2f( 0.05f,  0.60f);

      glEnd();

      glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.01f, 0.56f);
      glVertex2f( 0.02f,0.52f);
      glVertex2f( 0.04f, 0.51f);
      glVertex2f( 0.01f,  0.56f);

      glEnd();


      glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.01f, 0.60f);
      glVertex2f( 0.01f,0.62f);
      glVertex2f( 0.02f, 0.63f);
      glVertex2f( 0.01f,  0.60f);

      glEnd();


       glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(0.04f, 0.60f);
      glVertex2f( 0.05f,0.60f);
      glVertex2f( 0.05f, 0.62f);

      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.05f, 0.60f);
      glVertex2f( -0.05f,0.56f);
      glVertex2f( -0.06f, 0.57f);

      glEnd();
 glLoadIdentity();
glPopMatrix();


//end plane



//cloud


//1
glPushMatrix();
glTranslatef(position,0,0);
GLfloat x111=0.5f; GLfloat y222=0.7f; GLfloat radius333 =.06f;
    int triangleAmount555 = 20;


    GLfloat twicePi444 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x111, y222);
        for(i = 0; i <=triangleAmount555;i++) {
            glVertex2f(
                    x111 + (radius333* cos(i *  twicePi444 / triangleAmount555)),
                y222 + (radius333 * sin(i * twicePi444 / triangleAmount555))
            );
        }
    glEnd();

GLfloat x1111=0.6f; GLfloat y2222=0.7f; GLfloat radius3333 =.06f;
    int triangleAmount5555 = 20;



    GLfloat twicePi4444 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x1111, y2222);
        for(i = 0; i <=triangleAmount5555;i++) {
            glVertex2f(
                    x1111 + (radius3333* cos(i *  twicePi4444 / triangleAmount5555)),
                y2222 + (radius3333 * sin(i * twicePi4444 / triangleAmount5555))
            );
        }
    glEnd();

GLfloat x11111=0.55f; GLfloat y22222=0.75f; GLfloat radius33333 =.06f;
    int triangleAmount55555 = 20;



    GLfloat twicePi44444 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x11111, y22222);
        for(i = 0; i <=triangleAmount55555;i++) {
            glVertex2f(
                    x11111 + (radius33333* cos(i *  twicePi44444 / triangleAmount55555)),
                y22222 + (radius33333 * sin(i * twicePi44444 / triangleAmount55555))
            );
        }
    glEnd();

//1 end

//2
GLfloat x101=-0.4f; GLfloat y102=0.77f; GLfloat radius103 =.06f;
    int triangleAmount104 = 20;



    GLfloat twicePi105 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x101, y102);
        for(i = 0; i <=triangleAmount104;i++) {
            glVertex2f(
                    x101 + (radius103* cos(i *  twicePi105 / triangleAmount104)),
                y102 + (radius103 * sin(i * twicePi105 / triangleAmount104))
            );
        }
    glEnd();

GLfloat x1001=-0.3f; GLfloat y1002=0.77f; GLfloat radius1003 =.06f;
    int triangleAmount1004 = 20;



    GLfloat twicePi1005 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x1001, y1002);
        for(i = 0; i <=triangleAmount1004;i++) {
            glVertex2f(
                    x1001 + (radius1003* cos(i *  twicePi1005 / triangleAmount1004)),
                y1002 + (radius1003 * sin(i * twicePi1005 / triangleAmount1004))
            );
        }
    glEnd();

GLfloat x10001=-0.35f; GLfloat y10002=0.82f; GLfloat radius10003 =.06f;
    int triangleAmount10004 = 20;



    GLfloat twicePi10005 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x10001, y10002);
        for(i = 0; i <=triangleAmount10004;i++) {
            glVertex2f(
                    x10001 + (radius10003* cos(i *  twicePi10005 / triangleAmount10004)),
                y10002 + (radius10003 * sin(i * twicePi10005 / triangleAmount10004))
            );
        }
    glEnd();

glPopMatrix();

//2 end

//cloud end


//building 1


glBegin(GL_QUADS);
    glColor3ub(153, 255, 102);
    glVertex2f(-0.85f, 0.15f);
    glVertex2f(-0.55f, 0.15f);
    glVertex2f(-0.55f, 0.7f);
    glVertex2f(-0.85f, 0.7f);



    //1
    glColor3ub(255, 255, 255);
    glVertex2f(-0.82f, 0.6f);
    glVertex2f(-0.82f, 0.55f);
    glVertex2f(-0.78f, 0.55f);
    glVertex2f(-0.78f, 0.6f);



    //2
    glColor3ub(255, 255, 255);
    glVertex2f(-0.82f, 0.3f);
    glVertex2f(-0.82f, 0.25f);
    glVertex2f(-0.78f, 0.25f);
    glVertex2f(-0.78f, 0.3f);



    //3
glColor3ub(255, 255, 255);
    glVertex2f(-0.62f, 0.6f);
    glVertex2f(-0.62f, 0.55f);
    glVertex2f(-0.58f, 0.55f);
    glVertex2f(-0.58f, 0.6f);



    //4
glColor3ub(255, 255, 255);
    glVertex2f(-0.62f, 0.3f);
    glVertex2f(-0.62f, 0.25f);
    glVertex2f(-0.58f, 0.25f);
    glVertex2f(-0.58f, 0.3f);



    glEnd();




//end building 1



//building 2




glBegin(GL_QUADS);
    glColor3ub(255, 255, 153);
    glVertex2f(-0.55f, 0.55f);
    glVertex2f(-0.55f, 0.15f);
    glVertex2f(-0.25f, 0.15f);
    glVertex2f(-0.25f, 0.55f);
 glEnd();



 //1



 glBegin(GL_QUADS);
    glColor3ub(102, 255, 153);
    glVertex2f(-0.49f, 0.45f);
    glVertex2f(-0.49f, 0.38f);
    glVertex2f(-0.43f, 0.38f);
    glVertex2f(-0.43f, 0.45f);
 glEnd();



 //2



 glBegin(GL_QUADS);
    glColor3ub(102, 255, 153);
    glVertex2f(-0.49f, 0.33f);
    glVertex2f(-0.49f, 0.25f);
    glVertex2f(-0.43f, 0.25f);
    glVertex2f(-0.43f, 0.33f);
 glEnd();



//3




glBegin(GL_QUADS);
    glColor3ub(102, 255, 153);
    glVertex2f(-0.37f, 0.45f);
    glVertex2f(-0.37f, 0.38f);
    glVertex2f(-0.31f, 0.38f);
    glVertex2f(-0.31f, 0.45f);
 glEnd();



 //4



 glBegin(GL_QUADS);
    glColor3ub(102, 255, 153);
    glVertex2f(-0.37f, 0.33f);
    glVertex2f(-0.37f, 0.25f);
    glVertex2f(-0.31f, 0.25f);
    glVertex2f(-0.31f, 0.33f);
 glEnd();




//end building 2
//building 3



glBegin(GL_QUADS);
    glColor3ub(153, 255, 102);
    glVertex2f(0.85f, 0.15f);
    glVertex2f(0.55f, 0.15f);
    glVertex2f(0.55f, 0.7f);
    glVertex2f(0.85f, 0.7f);



    //1
    glColor3ub(255, 255, 255);
    glVertex2f(0.82f, 0.6f);
    glVertex2f(0.82f, 0.55f);
    glVertex2f(0.78f, 0.55f);
    glVertex2f(0.78f, 0.6f);



    //2
    glColor3ub(255, 255, 255);
    glVertex2f(0.82f, 0.3f);
    glVertex2f(0.82f, 0.25f);
    glVertex2f(0.78f, 0.25f);
    glVertex2f(0.78f, 0.3f);



    //3
glColor3ub(255, 255, 255);
    glVertex2f(0.62f, 0.6f);
    glVertex2f(0.62f, 0.55f);
    glVertex2f(0.58f, 0.55f);
    glVertex2f(0.58f, 0.6f);



    //4
glColor3ub(255, 255, 255);
    glVertex2f(0.62f, 0.3f);
    glVertex2f(0.62f, 0.25f);
    glVertex2f(0.58f, 0.25f);
    glVertex2f(0.58f, 0.3f);



    glEnd();




//end building 3



//car



glPushMatrix();
glTranslatef(position6,0,0);
   glBegin(GL_QUADS);
GLfloat x11=.4f; GLfloat y11=-.067f;
GLfloat radius211 =.04f;
GLfloat twicePi31 = 2.0f * PI;
int triangleAmount11 = 20;
glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x11, y11);
        for(i = 0; i <= triangleAmount11;i++) {
            glVertex2f(
                    x11+ (radius211* cos(i *  twicePi31 / triangleAmount11)),
                y11+ (radius211* sin(i * twicePi31 / triangleAmount11))
            );
        }



    glEnd();





    GLfloat x2=.65f; GLfloat y2=-.067f;
GLfloat radius24 =.04f;
GLfloat twicePi4 = 2.0f * PI;
int triangleAmount2 = 20;
glColor3ub(0, 0, 0); // Red
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x2, y2); // center of circle
        for(i = 0; i <= triangleAmount2;i++) {
            glVertex2f(
                    x2+ (radius24* cos(i *  twicePi4 / triangleAmount2)),
                y2+ (radius24* sin(i * twicePi4 / triangleAmount2))
            );
        }



    glEnd();




    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(0.3f, -0.039f);
    glVertex2f(0.7f, -0.039f);
    glVertex2f(.7f, 0.15f);
    glVertex2f(0.3f, .15f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.3f, .15f);
    glVertex2f(.7f, 0.15f);
    glEnd();



        glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);
    glVertex2f(.7f, 0.15f);
    glVertex2f(0.7f, -0.039f);
    glVertex2f(0.78f, -0.039f);
    glVertex2f(0.78f, 0.12f);
    glEnd();



glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.3f, .15f);
    glVertex2f(0.3f, .15f);
    glVertex2f(.7f, 0.15f);
    glVertex2f(.7f, 0.15f);
     glVertex2f(0.6f, 0.3f);



     glVertex2f(.5f, 0.3f);
     glVertex2f(0.5f, 0.15f);




    glEnd();

glPopMatrix();



//end car



//traffic signal



//ex STAND



glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.0,0.15);
    glVertex2f(0.03,0.15);
    glVertex2f(0.015,0.8);
    glEnd();



glBegin(GL_POLYGON);
    glColor3ub(153, 102, 51);
    glVertex2f(-0.01f, 0.8f);
    glVertex2f(-0.01f, 0.45f);
    glVertex2f(0.037f, 0.45f);
    glVertex2f(0.037f, 0.8f);
    glEnd();






    //TRAFFIC LIGHT





    GLfloat x10=.0135f; GLfloat y10=0.65f;
GLfloat radius210 =.023f;
GLfloat twicePi30 = 2.0f * PI;
int triangleAmount10 = 20;
glColor3ub(255, 255, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x10, y10);
        for(i = 0; i <= triangleAmount10;i++) {
            glVertex2f(
                    x10+ (radius210* cos(i *  twicePi30 / triangleAmount10)),
                y10+ (radius210* sin(i * twicePi30 / triangleAmount10))
            );
        }



    glEnd();





    GLfloat x20=.0135f; GLfloat y20=.75f;
GLfloat radius240 =.023f;
GLfloat twicePi40 = 2.0f * PI;
int triangleAmount20 = 20;
glColor3ub(255, 0, 0); // Red
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x20, y20); // center of circle
        for(i = 0; i <= triangleAmount20;i++) {
            glVertex2f(
                    x20+ (radius240* cos(i *  twicePi40 / triangleAmount20)),
                y20+ (radius240* sin(i * twicePi40 / triangleAmount20))
            );
        }



    glEnd();



    GLfloat x200=.0135f; GLfloat y200=.55f;
GLfloat radius2400 =.023f;
GLfloat twicePi400 = 2.0f * PI;
int triangleAmount200 = 20;
glColor3ub(0, 255, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x200, y200); // center of circle
        for(i = 0; i <= triangleAmount20;i++) {
            glVertex2f(
                    x200+ (radius2400* cos(i *  twicePi400 / triangleAmount200)),
                y200+ (radius2400* sin(i * twicePi400 / triangleAmount200))
            );
        }



    glEnd();
//traffic signal end


//tree




    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.85f, -0.45f);
    glVertex2f(-0.85f, -0.8f);
    glVertex2f(-.8f, -0.8f);
    glVertex2f(-0.8f, -.45f);
    glEnd();






GLfloat x2001=-.875f; GLfloat y2001=-.45f;
GLfloat radius24001 =.07f;
GLfloat twicePi4001 = 2.0f * PI;
int triangleAmount2001 = 20;
glColor3ub(0, 153, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x2001, y2001); // center of circle
        for(i = 0; i <= triangleAmount2001;i++) {
            glVertex2f(
                    x2001+ (radius24001* cos(i *  twicePi4001 / triangleAmount2001)),
                y2001+ (radius24001* sin(i * twicePi4001 / triangleAmount2001))
            );
        }



    glEnd();




GLfloat x2002=-.775f; GLfloat y2002=-.45f;
GLfloat radius24002 =.07f;
GLfloat twicePi4002 = 2.0f * PI;
int triangleAmount2002 = 20;
glColor3ub(0, 153, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x2002, y2002); // center of circle
        for(i = 0; i <= triangleAmount2002;i++) {
            glVertex2f(
                    x2002+ (radius24002* cos(i *  twicePi4002 / triangleAmount2002)),
                y2002+ (radius24002* sin(i * twicePi4002 / triangleAmount2002))
            );
        }



    glEnd();






GLfloat x2003=-.825f; GLfloat y2003=-.37f;
GLfloat radius24003 =.07f;
GLfloat twicePi4003 = 2.0f * PI;
int triangleAmount2003 = 20;
glColor3ub(0, 153, 0);
glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x2003, y2003); // center of circle
        for(i = 0; i <= triangleAmount2003;i++) {
            glVertex2f(
                    x2003+ (radius24003* cos(i *  twicePi4003 / triangleAmount2003)),
                y2003+ (radius24003* sin(i * twicePi4003 / triangleAmount2003))
            );
        }



    glEnd();
    //end tree


    //fence




glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.5f, -0.9f);
     glVertex2f(0.7f, -0.5f);
    glVertex2f(0.7f, -0.9f);
     glVertex2f(0.9f, -0.5f);
    glVertex2f(0.9f, -0.9f);




       glVertex2f(0.45f, -0.6f);
    glVertex2f(0.95f, -0.6f);



    glVertex2f(0.45f, -0.7f);
    glVertex2f(0.95f, -0.7f);



    glVertex2f(0.45f, -0.8f);
    glVertex2f(0.95f, -0.8f);






    glEnd();




//end fence


//wind mill rotation

  glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.75,-0.15);
    glVertex2f(-0.71,-0.15);
    glVertex2f(-0.71,0.5);
    glVertex2f(-0.75,0.5);
    glEnd();

glPushMatrix();
glTranslatef(-.73,.5, 0);
 glRotatef(k,0.0,0.0,.1);
      glBegin(GL_TRIANGLES);
    glColor3ub(128,0, 0);
    glVertex2f(0,0);
    glVertex2f(.1,0.2);
    glVertex2f(-.1,.2);
    glEnd();


      glBegin(GL_TRIANGLES);
glColor3ub(128,0, 0);
    glVertex2f(0,0);
    glVertex2f(-.2,.1);
    glVertex2f(-.2,-.1);
    glEnd();


      glBegin(GL_TRIANGLES);

    glColor3ub(128,0,0);
    glVertex2f(0,0);
    glVertex2f(.2,-.1);
    glVertex2f(.2,.1);

glEnd();

  glPopMatrix();
   k-=0.1f;
 glLoadIdentity();

    //end windmill rotation

    //adding clock

 glBegin(GL_QUADS);
    glColor3ub(102, 255, 255);
    glVertex2f(0.75,-0.15);
    glVertex2f(0.71,-0.15);
    glVertex2f(0.71,0.5);
    glVertex2f(0.75,0.5);
    glEnd();




glTranslatef(.73,.5,0);
   glScalef(.15,.15,0);

//cover
GLfloat x100=0.0f; GLfloat y100=0.0f; GLfloat radius100 =0.9f;
 triangleAmount = 20;

GLfloat twicePi10 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 153);
glVertex2f(x100, y100);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
           x100 + (radius100 * cos(i *  twicePi10 / triangleAmount)),
   y100 + (radius100 * sin(i * twicePi10 / triangleAmount))
);
}
glEnd();




GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =.85f;
triangleAmount = 20;

GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(0, 0, 0);
glVertex2f(x, y);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();


GLfloat x5=0.0f; GLfloat y5=0.0f; GLfloat radius5 =.8f;
triangleAmount = 20;

GLfloat twicePi5 = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(204, 204, 255);
glVertex2f(x5, y5);
for(i = 0; i <=triangleAmount;i++) {
glVertex2f(
           x5 + (radius5 * cos(i *  twicePi5 / triangleAmount)),
   y5+ (radius5 * sin(i * twicePi5 / triangleAmount))
);
}
glEnd();


 // TIME

glBegin(GL_LINES);
glLineWidth(5);
glColor3ub(0, 204, 153);
glVertex2f(0.0f, .8f);
glVertex2f(0.0f, .7f);
glEnd();



glBegin(GL_LINES);
glLineWidth(5);
glColor3ub(0, 204, 153);
glVertex2f(0.0f, -.8f);
glVertex2f(0.0f, -.7f);
glEnd();


glBegin(GL_LINES);
glLineWidth(5);
glColor3ub(0, 204, 153);
glVertex2f(.7f, 0.0f);
glVertex2f(.8f, 0.0f);
glEnd();


    glBegin(GL_LINES);
glLineWidth(5);
glColor3ub(0, 204, 153);
glVertex2f(-.7f, 0.0f);
glVertex2f(-.8f, 0.0f);
glEnd();


//end TIME

   glPushMatrix();

   //hour

    glRotatef(r,0.0,0.0,1.0);
glBegin(GL_POLYGON);
glColor3ub(255, 51, 0);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(.05f, .25f);
     glVertex2f(0.0f, .45f);
    glVertex2f(-.05f, .25f);
    glEnd();





//minute

   glRotatef(r1,0.0,0.0,1.0);
   glBegin(GL_POLYGON);
   glColor3ub(102, 102, 51);
   glVertex2f(0.0f, 0.0f);
   glVertex2f(.03f, -.03f);
   glVertex2f(0.0f, -.6f);
   glVertex2f(-.03f, -.3f);
   glEnd();
//second
    glRotatef(r2,0.0,0.0,1.0);
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(153, 51, 153);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-.68f, 0.0f);
    glEnd();

glPopMatrix();
   r-=0.005f,r1-=0.01f, r2-=0.05f;
 glLoadIdentity();

 glLoadIdentity();


 //start rain
glPushMatrix();
glTranslatef(position3,position3,0);
 glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.9,1.0);
    glVertex2f(-0.95,0.95);
    glVertex2f(-0.6,1.0);
    glVertex2f(-0.65,0.95);
    glVertex2f(-0.3,1.0);
    glVertex2f(-0.35,0.95);
    glVertex2f(0.3,1.0);
    glVertex2f(0.25,0.95);
    glVertex2f(0.6,1.0);
    glVertex2f(0.55,0.95);
    glVertex2f(0.9,1.0);
    glVertex2f(0.85,0.95);

    glVertex2f(-0.9,0.9);
    glVertex2f(-0.95,0.85);
    glVertex2f(-0.6,0.9);
    glVertex2f(-0.65,0.85);
    glVertex2f(-0.3,0.9);
    glVertex2f(-0.35,0.85);
    glVertex2f(0.3,0.9);
    glVertex2f(0.25,0.85);
    glVertex2f(0.6,0.9);
    glVertex2f(0.55,0.85);
    glVertex2f(0.9,0.9);
    glVertex2f(0.85,0.85);
    glEnd();
    glPopMatrix();



    glFlush();
}

void handleKeypress1(unsigned char key, int x, int y) {


	switch (key) {

    case 'd':
    glutDisplayFunc(day);
    glutPostRedisplay();
    break;
    case 'r':
    glutDisplayFunc(rain);
    glutPostRedisplay();
    break;

    case 'n':
    glutDisplayFunc(night);
    glutPostRedisplay();
    break;


	}
	glutPostRedisplay();
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Setup");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(day);
    glutIdleFunc(Idle);
    glutKeyboardFunc(handleKeypress);
     glutKeyboardFunc(handleKeypress1);
   glutMouseFunc(handleMouse);
glutSpecialFunc(SpecialInput);

     glutTimerFunc(100, update, 0);
     glutTimerFunc(100, update1, 0);
     glutTimerFunc(100, update2, 0);
     glutTimerFunc(100, update3, 0);
     glutTimerFunc(100, update6, 0);
    glutMainLoop();
    return 0;
}
