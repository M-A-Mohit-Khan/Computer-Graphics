//-------------------------------------------------------------------------------- COMPUTER GRAPHICS -------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------- SIXTY DOOM MOSQUE -------------------------------------------------------------------------------------------------




#include <windows.h>  // for MS Windows

#include<bits/stdc++.h>

#include <GL/glut.h>  // GLUT, include glu.h and gl.h

# define PI   3.14159265358979323846


/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */



GLfloat position_bird = 0.0f;

GLfloat speed_bird = 0.01f;


void update_bird(int value) {


    if(position_bird >1.0)

        position_bird = -1.0f;



    position_bird += speed_bird;


      glutPostRedisplay();



      glutTimerFunc(100, update_bird, 0);

}


//Rain
GLfloat i = 0.f, rainX = 1., rainY = 1.;



void update_rain (int value) {

    rainX -= 0.1f;

    rainY -= 0.1f;



    if (rainX < -0.1f) {

      rainX = 0.1f;

      rainY = 0.1f;

    }

    glutTimerFunc(100, update_rain, 0);

}


void drawLine (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat a, GLfloat b, GLfloat c , int w) {


    glLineWidth(w);

    glBegin(GL_LINES);

    glColor3f(a, b, c);

    glVertex2f(x1, y1);

    glVertex2f(x2, y2);

    glEnd();

}

//Rain

//Plane

GLfloat position1 = 0.0f;

GLfloat speed1 = 0.07f;


void update1(int value) {


    if(position1 <-1.0)


        position1 = 1.0f;


    position1 -= speed1; //position=position-speed;1-.1=.9


      glutPostRedisplay();


      glutTimerFunc(100, update1, 0);

}

//Sun

GLfloat position2 = 0.0f;

GLfloat speed2 = 0.01f;


void update2(int value) {


    if(position2 >1.0)


        position2 = -1.0f;


    position2 += speed2; //position=position-speed;1-.1=.9


      glutPostRedisplay();


      glutTimerFunc(100, update2, 0);

}

//Cloud

GLfloat position3 = 0.0f;

GLfloat speed3 = 0.01f;

void update3(int value) {


    if(position3 < -1.0)


        position3 = 1.0f;


    position3 -= speed3; //position=position-speed;1-.1=.9


      glutPostRedisplay();


      glutTimerFunc(100, update3, 0);

}





//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



//Day Mood



void day() {

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)



    //Back field

    glBegin(GL_QUADS);
    glColor3ub(0, 255, 0);
    glVertex2f(-1.0f, -0.05f);
    glVertex2f(-1.0f, -0.15f);
    glVertex2f(1.0f, -0.15f);
     glVertex2f(1.0f, -0.05f);
    glEnd();



    //Back field wall

    glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-1.0f, -0.05f);
    glVertex2f(1.0f, -0.05f);
     glVertex2f(1.0f, 0.0f);
    glEnd();



    //Sky

    glBegin(GL_QUADS);
    glColor3ub(77, 195, 255);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, 1.0f);
    glEnd();



 //Back green environment


    glBegin(GL_QUADS);
    glColor3ub(0, 102, 0);
    glVertex2f(-1.0f, 0.1f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
     glVertex2f(1.0f, 0.1f);
    glEnd();



//sun

glPushMatrix();

glTranslatef(0,position2,0);


GLfloat x=-0.6f; GLfloat y=0.8f; GLfloat radius =.11f;
    int triangleAmount = 20;



    GLfloat twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,0,0);
        glVertex2f(x, y);
        for(int i = 0; i <=triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

glPopMatrix();


//sun end



//Road beside mosque


	glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(-1.0f, -0.15f);
    glVertex2f(-1.0f, -0.20f);
    glVertex2f(1.0f, -0.20f);
    glVertex2f(1.0f, -0.15f);
    glEnd();



//Front field


    glBegin(GL_QUADS);
    glColor3ub(0, 255, 0);
    glVertex2f(-1.0f, -0.20f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
     glVertex2f(1.0f, -0.20f);
    glEnd();


//cloud



//1

glPushMatrix();

glTranslatef(position3,0,0);

GLfloat x111=0.5f; GLfloat y222=0.7f; GLfloat radius333 =.06f;

    int triangleAmount555 = 20;


    GLfloat twicePi444 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x111, y222);
        for(int i = 0; i <=triangleAmount555;i++) {
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

        for(int i = 0; i <=triangleAmount5555;i++) {

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

        for(int i = 0; i <=triangleAmount55555;i++) {
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

        for(int i = 0; i <=triangleAmount104;i++) {
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

        for(int i = 0; i <=triangleAmount1004;i++) {
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

        for(int i = 0; i <=triangleAmount10004;i++) {
            glVertex2f(
                    x10001 + (radius10003* cos(i *  twicePi10005 / triangleAmount10004)),
                y10002 + (radius10003 * sin(i * twicePi10005 / triangleAmount10004))

            );
        }
    glEnd();


glPopMatrix();


//2 end

//cloud end



//Plane

glPushMatrix();


        glTranslatef(position1,0.0f, 0.0f);
        glScalef(1.2,1.5,0);
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



    //Front road of mosque


    glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(-0.30f, -1.0f);
    glVertex2f(0.30f, -1.0f);
    glVertex2f(0.10f, -0.20f);
    glVertex2f(-0.10f, -0.20f);
    glEnd();


    //Left field


    //Green beside road
    glBegin(GL_QUADS);
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, -0.98f);
    glVertex2f(-0.35f, -0.98f);
    glVertex2f(-0.12f, -0.21f);
    glVertex2f(-0.18f, -0.21f);
    glEnd();


    //Small tree



//Stick


    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.6f, -0.45f);
    glVertex2f(-0.65f, -0.6f);
    glVertex2f(-0.45f, -0.6f);
    glVertex2f(-0.5f, -0.45f);




    glEnd();


    //1


GLfloat x31=-0.6f; GLfloat y31=-0.45f; GLfloat radius31 =.06f;
    int triangleAmount31 = 20;



    GLfloat twicePi31 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 77, 0);
        glVertex2f(x31, y31);
        for(int i = 0; i <=triangleAmount31;i++) {
            glVertex2f(
                    x31 + (radius31* cos(i *  twicePi31 / triangleAmount31)),
                y31 + (radius31 * sin(i * twicePi31 / triangleAmount31))
            );
        }
    glEnd();




GLfloat x30=-0.65f; GLfloat y30=-0.5f; GLfloat radius30 =.06f;

    int triangleAmount30 = 20;



    GLfloat twicePi30 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
        glVertex2f(x30, y30);
        for(int i = 0; i <=triangleAmount30;i++) {
            glVertex2f(
                    x30 + (radius30* cos(i *  twicePi30 / triangleAmount30)),
                y30 + (radius30 * sin(i * twicePi30 / triangleAmount30))
            );
        }
    glEnd();


GLfloat x27=-0.55f; GLfloat y27=-0.5f; GLfloat radius27 =.06f;

    int triangleAmount27 = 20;


    GLfloat twicePi27 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 153, 0);
        glVertex2f(x27, y27);
        for(int i = 0; i <=triangleAmount27;i++) {
            glVertex2f(
                    x27 + (radius27* cos(i *  twicePi27 / triangleAmount27)),
                y27 + (radius27 * sin(i * twicePi27 / triangleAmount27))
            );
        }
    glEnd();


GLfloat x29=-0.5f; GLfloat y29=-0.45f; GLfloat radius29 =.06f;

    int triangleAmount29 = 20;



    GLfloat twicePi29 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 153, 0);
        glVertex2f(x29, y29);
        for(int i = 0; i <=triangleAmount29;i++) {
            glVertex2f(
                    x29 + (radius29* cos(i *  twicePi29 / triangleAmount29)),
                y29 + (radius29 * sin(i * twicePi29 / triangleAmount29))
            );
        }
    glEnd();



GLfloat x28=-0.45f; GLfloat y28=-0.5f; GLfloat radius28 =.06f;

    int triangleAmount28 = 20;



    GLfloat twicePi28 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 153, 0);
        glVertex2f(x28, y28);
        for(int i = 0; i <=triangleAmount28;i++) {
            glVertex2f(
                    x28 + (radius28* cos(i *  twicePi28 / triangleAmount28)),
                y28 + (radius28 * sin(i * twicePi28 / triangleAmount28))
            );
        }
    glEnd();




//1 end



    //Fence


//Horizon


    glBegin(GL_LINES);

    glColor3ub(102, 26, 0);

    glVertex2f(-0.99f, -0.5f);
    glVertex2f(-0.99f, -0.65f);

    glVertex2f(-0.98f, -0.5f);
    glVertex2f(-0.98f, -0.65f);

    glVertex2f(-0.97f, -0.5f);
    glVertex2f(-0.97f, -0.65f);

    glVertex2f(-0.96f, -0.5f);
    glVertex2f(-0.96f, -0.65f);

    glVertex2f(-0.95f, -0.5f);
    glVertex2f(-0.95f, -0.65f);

    glVertex2f(-0.94f, -0.5f);
    glVertex2f(-0.94f, -0.65f);

    glVertex2f(-0.93f, -0.5f);
    glVertex2f(-0.93f, -0.65f);

    glVertex2f(-0.92f, -0.5f);
    glVertex2f(-0.92f, -0.65f);

    glVertex2f(-0.91f, -0.5f);
    glVertex2f(-0.91f, -0.65f);

    glVertex2f(-0.90f, -0.5f);
    glVertex2f(-0.90f, -0.65f);

    glVertex2f(-0.89f, -0.5f);
    glVertex2f(-0.89f, -0.65f);

    glVertex2f(-0.88f, -0.5f);
    glVertex2f(-0.88f, -0.65f);

    glVertex2f(-0.87f, -0.5f);
    glVertex2f(-0.87f, -0.65f);


//Middle fence


    glVertex2f(-0.99f, -0.575f);
    glVertex2f(-0.87f, -0.575f);



//Vertical


    glVertex2f(-0.875f, -0.51f);
    glVertex2f(-0.875f, -0.66f);

    glVertex2f(-0.885f, -0.52f);
    glVertex2f(-0.885f, -0.67f);

    glVertex2f(-0.895f, -0.53f);
    glVertex2f(-0.895f, -0.685f);

    glVertex2f(-0.905f, -0.54f);
    glVertex2f(-0.905f, -0.695f);

    glVertex2f(-0.915f, -0.55f);
    glVertex2f(-0.915f, -0.715f);

    glVertex2f(-0.925f, -0.56f);
    glVertex2f(-0.925f, -0.73f);

    glVertex2f(-0.935f, -0.57f);
    glVertex2f(-0.935f, -0.745f);

    glVertex2f(-0.945f, -0.58f);
    glVertex2f(-0.945f, -0.765f);

    glVertex2f(-0.955f, -0.59f);
    glVertex2f(-0.955f, -0.785f);

    glVertex2f(-0.965f, -0.60f);
    glVertex2f(-0.965f, -0.805f);


    glVertex2f(-0.975f, -0.61f);
    glVertex2f(-0.975f, -0.83f);


    glVertex2f(-0.985f, -0.62f);
    glVertex2f(-0.985f, -0.855);




    glEnd();


    //Right field


    //Green beside road

    glBegin(GL_QUADS);

    glColor3ub(0, 179, 60);

    glVertex2f(0.48f, -0.98f);
    glVertex2f(0.35f, -0.98f);
    glVertex2f(0.12f, -0.21f);
    glVertex2f(0.18f, -0.21f);
    glEnd();


glBegin(GL_QUADS);

    glColor3ub(102, 51, 0);

    glVertex2f(0.6f, -0.45f);
    glVertex2f(0.65f, -0.6f);
    glVertex2f(0.45f, -0.6f);
    glVertex2f(0.5f, -0.45f);




    glEnd();


    //1


GLfloat x32=0.6f; GLfloat y32=-0.45f; GLfloat radius32 =.06f;

    int triangleAmount32 = 20;




    GLfloat twicePi32 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 77, 0);
        glVertex2f(x32, y32);
        for(int i = 0; i <=triangleAmount32;i++) {
            glVertex2f(
                    x32 + (radius32* cos(i *  twicePi32 / triangleAmount32)),
                y32 + (radius32 * sin(i * twicePi32 / triangleAmount32))

            );
        }
    glEnd();



GLfloat x33=0.65f; GLfloat y33=-0.5f; GLfloat radius33 =.06f;

    int triangleAmount33 = 20;



    GLfloat twicePi33 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
        glVertex2f(x33, y33);
        for(int i = 0; i <=triangleAmount33;i++) {
            glVertex2f(
                    x33 + (radius33* cos(i *  twicePi33 / triangleAmount33)),
                y33 + (radius33 * sin(i * twicePi33 / triangleAmount33))

            );

        }
    glEnd();


GLfloat x34=0.55f; GLfloat y34=-0.5f; GLfloat radius34 =.06f;

    int triangleAmount34 = 20;


    GLfloat twicePi34 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 153, 0);
        glVertex2f(x34, y34);
        for(int i = 0; i <=triangleAmount34;i++) {
            glVertex2f(
                    x34 + (radius34* cos(i *  twicePi34 / triangleAmount34)),
                y34 + (radius34 * sin(i * twicePi34 / triangleAmount34))
            );
        }
    glEnd();


GLfloat x35=0.5f; GLfloat y35=-0.45f; GLfloat radius35 =.06f;

    int triangleAmount35 = 20;



    GLfloat twicePi35 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(0, 153, 0);

        glVertex2f(x35, y35);
        for(int i = 0; i <=triangleAmount35;i++) {
            glVertex2f(
                    x35 + (radius35* cos(i *  twicePi35 / triangleAmount35)),
                y35 + (radius35 * sin(i * twicePi35 / triangleAmount35))

            );
        }
    glEnd();



GLfloat x36=0.45f; GLfloat y36=-0.5f; GLfloat radius36 =.06f;

    int triangleAmount36 = 20;



    GLfloat twicePi36 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(0, 153, 0);

        glVertex2f(x36, y36);
        for(int i = 0; i <=triangleAmount36;i++) {
            glVertex2f(
                    x36 + (radius36* cos(i *  twicePi36 / triangleAmount36)),
                y36 + (radius36 * sin(i * twicePi36 / triangleAmount36))

            );
        }
    glEnd();




//1 end



//dooms of the mosque


    //Behind 1

    GLfloat x8=-0.52f; GLfloat y8=0.30f; GLfloat radius8 =.10f;

    int triangleAmount8 = 20;



    GLfloat twicePi8 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 184, 77);

        glVertex2f(x8, y8);
        for(int i = 0; i <=triangleAmount8;i++) {
            glVertex2f(
                    x8 + (radius8 * cos(i *  twicePi8 / triangleAmount8)),
                y8 + (radius8 * sin(i * twicePi8 / triangleAmount8))

            );
        }
    glEnd();


    //Behind 2

    GLfloat x9=-0.33f; GLfloat y9=0.315f; GLfloat radius9 =.10f;

    int triangleAmount9 = 20;



    GLfloat twicePi9 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 184, 77);

        glVertex2f(x9, y9);
        for(int i = 0; i <=triangleAmount9;i++) {
            glVertex2f(
                    x9 + (radius9 * cos(i *  twicePi9 / triangleAmount9)),
                y9 + (radius9 * sin(i * twicePi9 / triangleAmount9))

            );
        }
    glEnd();


    //Behind 3

    GLfloat x10=-0.15f; GLfloat y10=0.33f; GLfloat radius10 =.10f;

    int triangleAmount10 = 20;



    GLfloat twicePi10 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 184, 77);
        glVertex2f(x10, y10);
        for(int i = 0; i <=triangleAmount10;i++) {
            glVertex2f(
                    x10 + (radius10 * cos(i *  twicePi10 / triangleAmount10)),
                y10 + (radius10 * sin(i * twicePi10 / triangleAmount10))
            );
        }
    glEnd();


    //Behind 4

    GLfloat x11=0.52f; GLfloat y11=0.30f; GLfloat radius11 =.10f;

    int triangleAmount11 = 20;



    GLfloat twicePi11 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 184, 77);
        glVertex2f(x11, y11);
        for(int i = 0; i <=triangleAmount11;i++) {
            glVertex2f(
                    x11 + (radius11 * cos(i *  twicePi11 / triangleAmount11)),
                y11 + (radius11 * sin(i * twicePi11 / triangleAmount11))
            );
        }
    glEnd();


    //Behind 5

    GLfloat x12=0.33f; GLfloat y12=0.315f; GLfloat radius12 =.10f;

    int triangleAmount12 = 20;



    GLfloat twicePi12 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 184, 77);

        glVertex2f(x12, y12);
        for(int i = 0; i <=triangleAmount12;i++) {
            glVertex2f(
                    x12 + (radius12 * cos(i *  twicePi12 / triangleAmount12)),
                y12 + (radius12 * sin(i * twicePi12 / triangleAmount12))
            );
        }
    glEnd();


    //Behind 6

    GLfloat x13=0.15f; GLfloat y13=0.33f; GLfloat radius13 =.10f;

    int triangleAmount13 = 20;




    GLfloat twicePi13 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 184, 77);
        glVertex2f(x13, y13);
        for(int i = 0; i <=triangleAmount13;i++) {
            glVertex2f(
                    x13 + (radius13 * cos(i *  twicePi13 / triangleAmount13)),
                y13 + (radius13 * sin(i * twicePi13 / triangleAmount13))
            );
        }
    glEnd();




    //Front 1

    GLfloat x1=-0.6f; GLfloat y1=0.30f; GLfloat radius1 =.10f;

    int triangleAmount1 = 20;



    GLfloat twicePi1 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x1, y1);
        for(int i = 0; i <=triangleAmount1;i++) {
            glVertex2f(
                    x1 + (radius1 * cos(i *  twicePi1 / triangleAmount1)),
                y1 + (radius1 * sin(i * twicePi1 / triangleAmount1))
            );
        }
    glEnd();


    //Front 2

    GLfloat x2=-0.43f; GLfloat y2=0.315f; GLfloat radius2 =.10f;

    int triangleAmount2 = 20;



    GLfloat twicePi2 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x2, y2);
        for(int i = 0; i <=triangleAmount2;i++) {
            glVertex2f(
                    x2 + (radius2 * cos(i *  twicePi2 / triangleAmount2)),
                y2 + (radius2 * sin(i * twicePi2 / triangleAmount2))
            );
        }
    glEnd();


    //Front 3

    GLfloat x3=-0.26f; GLfloat y3=0.325f; GLfloat radius3 =.10f;

    int triangleAmount3 = 20;



    GLfloat twicePi3 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x3, y3);
        for(int i = 0; i <=triangleAmount2;i++) {
            glVertex2f(
                    x3 + (radius3 * cos(i *  twicePi3 / triangleAmount3)),
                y3 + (radius3 * sin(i * twicePi3 / triangleAmount3))
            );
        }
    glEnd();


    //Front 4

    GLfloat x4=-0.0f; GLfloat y4=0.35f; GLfloat radius4 =.10f;

    int triangleAmount4 = 20;



    GLfloat twicePi4 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x4, y4);
        for(int i = 0; i <=triangleAmount4;i++) {
            glVertex2f(
                    x4 + (radius4 * cos(i *  twicePi4 / triangleAmount4)),
                y4 + (radius4 * sin(i * twicePi4 / triangleAmount4))
            );
        }
    glEnd();



    //Front 5

    GLfloat x5=0.6f; GLfloat y5=0.30f; GLfloat radius5 =.10f;

    int triangleAmount5 = 20;



    GLfloat twicePi5 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x5, y5);
        for(int i = 0; i <=triangleAmount5;i++) {
            glVertex2f(
                    x5 + (radius5 * cos(i *  twicePi5 / triangleAmount5)),
                y5 + (radius5 * sin(i * twicePi5 / triangleAmount5))
            );
        }
    glEnd();



    //Front 6

    GLfloat x6=0.43f; GLfloat y6=0.315f; GLfloat radius6=.10f;

    int triangleAmount6 = 20;



    GLfloat twicePi6 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x6, y6);
        for(int i = 0; i <=triangleAmount6;i++) {
            glVertex2f(
                    x6 + (radius6 * cos(i *  twicePi6 / triangleAmount6)),
                y6 + (radius6 * sin(i * twicePi6 / triangleAmount6))
            );
        }
    glEnd();


    //Front 7


    GLfloat x7=0.26f; GLfloat y7=0.325f; GLfloat radius7 =.10f;

    int triangleAmount7 = 20;




    GLfloat twicePi7 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x7, y7);
        for(int i = 0; i <=triangleAmount7;i++) {
            glVertex2f(
                    x7 + (radius7 * cos(i *  twicePi7 / triangleAmount7)),
                y7 + (radius7 * sin(i * twicePi7 / triangleAmount7))
            );
        }
    glEnd();




    //Body of mosque


//Left


    GLfloat x25=-0.775f; GLfloat y25=0.50f; GLfloat radius25 =.075f;

    int triangleAmount25 = 20;



    GLfloat twicePi25 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 153, 0);
        glVertex2f(x25, y25);
        for(int i = 0; i <=triangleAmount25;i++) {
            glVertex2f(
                    x25 + (radius25 * cos(i *  twicePi25 / triangleAmount25)),
                y25 + (radius25 * sin(i * twicePi25 / triangleAmount25))
            );
        }
    glEnd();


    glBegin(GL_QUADS);

    glColor3ub(204, 122, 0);

    glVertex2f(-0.70f, 0.50f);
    glVertex2f(-0.70f, 0.35f);
    glVertex2f(-0.85f, 0.35f);
    glVertex2f(-0.85f, 0.50f);
    glEnd();


    glBegin(GL_QUADS);

    glColor3ub(255, 133, 51);

    glVertex2f(-0.70f, 0.35f);
    glVertex2f(-0.70f, 0.30f);
    glVertex2f(-0.85f, 0.30f);
    glVertex2f(-0.85f, 0.35f);
    glEnd();


    glBegin(GL_QUADS);

    glColor3ub(204, 122, 0);

    glVertex2f(-0.70f, 0.30f);
    glVertex2f(-0.70f, -0.15f);
    glVertex2f(-0.85f, -0.15f);
    glVertex2f(-0.85f, 0.30f);
    glEnd();



//Right


    GLfloat x26=0.775f; GLfloat y26=0.50f; GLfloat radius26 =.075f;

    int triangleAmount26 = 20;



    GLfloat twicePi26 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 153, 0);
        glVertex2f(x26, y26);
        for(int i = 0; i <=triangleAmount26;i++) {
            glVertex2f(
                    x26 + (radius26 * cos(i *  twicePi26 / triangleAmount26)),
                y26 + (radius26 * sin(i * twicePi26 / triangleAmount26))
            );
        }
    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(204, 122, 0);

    glVertex2f(0.70f, 0.50f);
    glVertex2f(0.70f, 0.35f);
    glVertex2f(0.85f, 0.35f);
    glVertex2f(0.85f, 0.50f);
    glEnd();


    glBegin(GL_QUADS);

    glColor3ub(255, 133, 51);

    glVertex2f(0.70f, 0.35f);
    glVertex2f(0.70f, 0.30f);
    glVertex2f(0.85f, 0.30f);
    glVertex2f(0.85f, 0.35f);
    glEnd();


    glBegin(GL_QUADS);

    glColor3ub(204, 122, 0);

    glVertex2f(0.70f, 0.30f);
    glVertex2f(0.70f, -0.15f);
    glVertex2f(0.85f, -0.15f);
    glVertex2f(0.85f, 0.30f);
    glEnd();


    //Inside

    glBegin(GL_QUADS);

    glColor3ub(230, 138, 0);

    glVertex2f(-0.70f, 0.35f);
    glVertex2f(-0.70f, -0.15f);
    glVertex2f(0.70f, -0.15f);
    glVertex2f(0.70f, 0.35f);
    glEnd();


    //Roof of mosque

    glBegin(GL_QUADS);

    glColor3ub(255, 133, 51);

    glVertex2f(-0.70f, 0.35f);
    glVertex2f(-0.70f, 0.30f);
    glVertex2f(0.0f, 0.35f);
    glVertex2f(0.0f, 0.40f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(255, 133, 51);

    glVertex2f(0.70f, 0.35f);
    glVertex2f(0.70f, 0.30f);
    glVertex2f(0.0f, 0.35f);
    glVertex2f(0.0f, 0.40f);
    glEnd();



//Doors


//Left 1


glBegin(GL_QUADS);

    glColor3ub(0, 0, 0);

    glVertex2f(-0.65f, 0.07f);
    glVertex2f(-0.65f, -0.14f);
    glVertex2f(-0.58f, -0.14f);
    glVertex2f(-0.58f, 0.07f);
    glEnd();


    GLfloat x14=-0.615f; GLfloat y14=0.07f; GLfloat radius14 =.035f;

    int triangleAmount14 = 20;




    GLfloat twicePi14 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x14, y14);
        for(int i = 0; i <=triangleAmount14;i++) {
            glVertex2f(
                    x14 + (radius14 * cos(i *  twicePi14 / triangleAmount14)),
                y14 + (radius14 * sin(i * twicePi14 / triangleAmount14))

            );
        }
    glEnd();



//Left 2

glBegin(GL_QUADS);

    glColor3ub(0, 0, 0);

    glVertex2f(-0.53f, 0.07f);
    glVertex2f(-0.53f, -0.14f);
    glVertex2f(-0.46f, -0.14f);
    glVertex2f(-0.46f, 0.07f);
    glEnd();


     GLfloat x15=-0.495f; GLfloat y15=0.07f; GLfloat radius15 =.035f;

    int triangleAmount15 = 20;



    GLfloat twicePi15 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(0, 0, 0);

        glVertex2f(x15, y15);
        for(int i = 0; i <=triangleAmount15;i++) {
            glVertex2f(
                    x15 + (radius15 * cos(i *  twicePi15 / triangleAmount15)),
                y15 + (radius15 * sin(i * twicePi15 / triangleAmount15))

            );
        }
    glEnd();



//Left 3

glBegin(GL_QUADS);

    glColor3ub(0, 0, 0);

    glVertex2f(-0.41f, 0.07f);
    glVertex2f(-0.41f, -0.14f);
    glVertex2f(-0.34f, -0.14f);
    glVertex2f(-0.34f, 0.07f);
    glEnd();


    GLfloat x16=-0.375f; GLfloat y16=0.07f; GLfloat radius16 =.035f;

    int triangleAmount16 = 20;



    GLfloat twicePi16 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(0, 0, 0);

        glVertex2f(x16, y16);
        for(int i = 0; i <=triangleAmount16;i++) {
            glVertex2f(
                    x16 + (radius15 * cos(i *  twicePi16 / triangleAmount16)),
                y16 + (radius16 * sin(i * twicePi16 / triangleAmount16))
            );
        }
    glEnd();



//Left 4

glBegin(GL_QUADS);

    glColor3ub(0, 0, 0);

    glVertex2f(-0.29f, 0.07f);
    glVertex2f(-0.29f, -0.14f);
    glVertex2f(-0.22f, -0.14f);
    glVertex2f(-0.22f, 0.07f);
    glEnd();

    GLfloat x17=-0.255f; GLfloat y17=0.07f; GLfloat radius17 =.035f;

    int triangleAmount17 = 20;



    GLfloat twicePi17 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(0, 0, 0);

        glVertex2f(x17, y17);
        for(int i = 0; i <=triangleAmount17;i++) {
            glVertex2f(
                    x17 + (radius17 * cos(i *  twicePi17 / triangleAmount17)),
                y17 + (radius17 * sin(i * twicePi17 / triangleAmount17))
            );
        }
    glEnd();



//Left 5

glBegin(GL_QUADS);

    glColor3ub(0, 0, 0);

    glVertex2f(-0.17f, 0.07f);
    glVertex2f(-0.17f, -0.14f);
    glVertex2f(-0.10f, -0.14f);
    glVertex2f(-0.10f, 0.07f);
    glEnd();


    GLfloat x18=-0.135f; GLfloat y18=0.07f; GLfloat radius18 =.035f;

    int triangleAmount18 = 20;



    GLfloat twicePi18 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(0, 0, 0);

        glVertex2f(x18, y18);
        for(int i = 0; i <=triangleAmount18;i++) {
            glVertex2f(
                    x18 + (radius18 * cos(i *  twicePi18 / triangleAmount18)),
                y18 + (radius18 * sin(i * twicePi18 / triangleAmount18))
            );
        }
    glEnd();




//Middle Door

glBegin(GL_QUADS);

    glColor3ub(0, 0, 0);

    glVertex2f(-0.05f, 0.10f);
    glVertex2f(-0.05f, -0.14f);
    glVertex2f(0.05f, -0.14f);
    glVertex2f(0.05f, 0.10f);
    glEnd();


    GLfloat x19=0.0f; GLfloat y19=0.10f; GLfloat radius19 =.047f;

    int triangleAmount19 = 20;



    GLfloat twicePi19 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(0, 0, 0);

        glVertex2f(x19, y19);
        for(int i = 0; i <=triangleAmount19;i++) {
            glVertex2f(
                    x19 + (radius19 * cos(i *  twicePi19 / triangleAmount19)),
                y19 + (radius19 * sin(i * twicePi19 / triangleAmount19))
            );
        }
    glEnd();



//Right 1

glBegin(GL_QUADS);

    glColor3ub(0, 0, 0);

    glVertex2f(0.65f, 0.07f);
    glVertex2f(0.65f, -0.14f);
    glVertex2f(0.58f, -0.14f);
    glVertex2f(0.58f, 0.07f);
    glEnd();


    GLfloat x20=0.615f; GLfloat y20=0.07f; GLfloat radius20 =.035f;

    int triangleAmount20 = 20;



    GLfloat twicePi20 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(0, 0, 0);

        glVertex2f(x20, y20);
        for(int i = 0; i <=triangleAmount20;i++) {
            glVertex2f(
                    x20 + (radius20 * cos(i *  twicePi20 / triangleAmount20)),
                y20 + (radius20 * sin(i * twicePi20 / triangleAmount20))

            );
        }
    glEnd();


//Right 2

glBegin(GL_QUADS);

    glColor3ub(0, 0, 0);

    glVertex2f(0.53f, 0.07f);
    glVertex2f(0.53f, -0.14f);
    glVertex2f(0.46f, -0.14f);
    glVertex2f(0.46f, 0.07f);
    glEnd();


    GLfloat x21=0.495f; GLfloat y21=0.07f; GLfloat radius21 =.035f;

    int triangleAmount21 = 20;



    GLfloat twicePi21 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x21, y21);
        for(int i = 0; i <=triangleAmount21;i++) {
            glVertex2f(
                    x21 + (radius21 * cos(i *  twicePi21 / triangleAmount21)),
                y21 + (radius21 * sin(i * twicePi21 / triangleAmount21))
            );
        }
    glEnd();




//Right 3
glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.41f, 0.07f);
    glVertex2f(0.41f, -0.14f);
    glVertex2f(0.34f, -0.14f);
    glVertex2f(0.34f, 0.07f);
    glEnd();


GLfloat x22=0.375f; GLfloat y22=0.07f; GLfloat radius22 =.035f;
    int triangleAmount22 = 20;



    GLfloat twicePi22 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x22, y22);
        for(int i = 0; i <=triangleAmount22;i++) {
            glVertex2f(
                    x22 + (radius22 * cos(i *  twicePi22 / triangleAmount22)),
                y22 + (radius22 * sin(i * twicePi22 / triangleAmount22))
            );
        }
    glEnd();


//Right 4
glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.29f, 0.07f);
    glVertex2f(0.29f, -0.14f);
    glVertex2f(0.22f, -0.14f);
    glVertex2f(0.22f, 0.07f);
    glEnd();


    GLfloat x23=0.255f; GLfloat y23=0.07f; GLfloat radius23 =.035f;
    int triangleAmount23 = 20;



    GLfloat twicePi23 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x23, y23);
        for(int i = 0; i <=triangleAmount23;i++) {
            glVertex2f(
                    x23 + (radius23 * cos(i *  twicePi23 / triangleAmount23)),
                y23 + (radius23 * sin(i * twicePi23 / triangleAmount23))
            );
        }
    glEnd();



//Right 5
glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.17f, 0.07f);
    glVertex2f(0.17f, -0.14f);
    glVertex2f(0.10f, -0.14f);
    glVertex2f(0.10f, 0.07f);
    glEnd();


 GLfloat x24=0.135f; GLfloat y24=0.07f; GLfloat radius24 =.035f;
    int triangleAmount24 = 20;


    GLfloat twicePi24 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x24, y24);
        for(int i = 0; i <=triangleAmount24;i++) {
            glVertex2f(
                    x24 + (radius24 * cos(i *  twicePi24 / triangleAmount24)),
                y24 + (radius24 * sin(i * twicePi24 / triangleAmount24))
            );
        }
    glEnd();




//Bird
glPushMatrix();

glTranslatef(position_bird,0.0f, 0.0f);


glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);

glEnd();



glTranslatef(0.1f, 0.1f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);

glEnd();


glLoadIdentity();
glTranslatef(position_bird,0.0f, 0.0f);

glTranslatef(0.11f, 0.05f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);

glEnd();



glLoadIdentity();

glTranslatef(position_bird,0.0f, 0.0f);

glTranslatef(1.0f, 0.05f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);

glEnd();



glLoadIdentity();

glTranslatef(position_bird,0.0f, 0.0f);

glTranslatef(1.1f, 0.05f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);

glEnd();

glPopMatrix();

glLoadIdentity();



//birds end

//Human


//1
GLfloat x50=-0.1f; GLfloat y50=-0.40f; GLfloat radius50 =.035f;
    int triangleAmount50 = 20;


    GLfloat twicePi50 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x50, y50);
        for(int i = 0; i <=triangleAmount50;i++) {
            glVertex2f(
                    x50 + (radius50 * cos(i *  twicePi50 / triangleAmount50)),
                y50 + (radius50 * sin(i * twicePi50 / triangleAmount50))
            );
        }
    glEnd();


//Body

    glBegin(GL_QUADS);
    glColor3ub(153, 235, 255);
    glVertex2f(-0.15f, -0.43f);
    glVertex2f(-0.15f, -0.60f);
    glVertex2f(-0.05f, -0.60f);
    glVertex2f(-0.05f, -0.43f);
    glEnd();

//Legs

    glBegin(GL_QUADS);
    glColor3ub(96, 64, 32);
    glVertex2f(-0.15f, -0.60f);
    glVertex2f(-0.15f, -0.70f);
    glVertex2f(-0.11f, -0.70f);
    glVertex2f(-0.11f, -0.60f);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(96, 64, 32);
    glVertex2f(-0.09f, -0.60f);
    glVertex2f(-0.09f, -0.70f);
    glVertex2f(-0.05f, -0.70f);
    glVertex2f(-0.05f, -0.60f);
    glEnd();



//Hand

    glBegin(GL_QUADS);
    glColor3ub(153, 235, 255);
    glVertex2f(-0.18f, -0.43f);
    glVertex2f(-0.18f, -0.47f);
    glVertex2f(-0.155f, -0.47f);
    glVertex2f(-0.155f, -0.43f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 179);
    glVertex2f(-0.18f, -0.47f);
    glVertex2f(-0.18f, -0.54f);
    glVertex2f(-0.155f, -0.54f);
    glVertex2f(-0.155f, -0.47f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 235, 255);
    glVertex2f(-0.045f, -0.43f);
    glVertex2f(-0.045f, -0.47f);
    glVertex2f(-0.015f, -0.47f);
    glVertex2f(-0.015f, -0.43f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 179);
    glVertex2f(-0.045f, -0.47f);
    glVertex2f(-0.045f, -0.54f);
    glVertex2f(-0.015f, -0.54f);
    glVertex2f(-0.015f, -0.47f);
    glEnd();



	glFlush();  // Render now
}




//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



//Rainy Mood



void rain(){


glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)



    //Back field

    glBegin(GL_QUADS);
    glColor3ub(0, 255, 0);
    glVertex2f(-1.0f, -0.05f);
    glVertex2f(-1.0f, -0.15f);
    glVertex2f(1.0f, -0.15f);
     glVertex2f(1.0f, -0.05f);
    glEnd();



    //Back field wall

    glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-1.0f, -0.05f);
    glVertex2f(1.0f, -0.05f);
     glVertex2f(1.0f, 0.0f);
    glEnd();



    //Sky

    glBegin(GL_QUADS);
    glColor3ub(0, 77, 153);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, 1.0f);
    glEnd();



 //Back green environment


    glBegin(GL_QUADS);
    glColor3ub(0, 102, 0);
    glVertex2f(-1.0f, 0.1f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
     glVertex2f(1.0f, 0.1f);
    glEnd();





//Road beside mosque

	glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(-1.0f, -0.15f);
    glVertex2f(-1.0f, -0.20f);
    glVertex2f(1.0f, -0.20f);
    glVertex2f(1.0f, -0.15f);
    glEnd();



//Front field

    glBegin(GL_QUADS);
    glColor3ub(0, 255, 0);
    glVertex2f(-1.0f, -0.20f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
     glVertex2f(1.0f, -0.20f);
    glEnd();


//cloud


//1
glPushMatrix();

glTranslatef(position3,0,0);

GLfloat x111=0.5f; GLfloat y222=0.7f; GLfloat radius333 =.06f;
    int triangleAmount555 = 20;


    GLfloat twicePi444 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(92, 138, 138);
        glVertex2f(x111, y222);
        for(int i = 0; i <=triangleAmount555;i++) {
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
    glColor3ub(92, 138, 138);
        glVertex2f(x1111, y2222);
        for(int i = 0; i <=triangleAmount5555;i++) {
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
    glColor3ub(92, 138, 138);
        glVertex2f(x11111, y22222);
        for(int i = 0; i <=triangleAmount55555;i++) {
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
    glColor3ub(92, 138, 138);
        glVertex2f(x101, y102);
        for(int i = 0; i <=triangleAmount104;i++) {
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
    glColor3ub(92, 138, 138);
        glVertex2f(x1001, y1002);
        for(int i = 0; i <=triangleAmount1004;i++) {
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
    glColor3ub(92, 138, 138);
        glVertex2f(x10001, y10002);
        for(int i = 0; i <=triangleAmount10004;i++) {
            glVertex2f(
                    x10001 + (radius10003* cos(i *  twicePi10005 / triangleAmount10004)),
                y10002 + (radius10003 * sin(i * twicePi10005 / triangleAmount10004))
            );
        }
    glEnd();

glPopMatrix();

//2 end

//cloud end

//Plane

glPushMatrix();


       glTranslatef(position1,0.0f, 0.0f);
       glScalef(1.2,1.5,0);
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


    //Front road of mosque


    glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(-0.30f, -1.0f);
    glVertex2f(0.30f, -1.0f);
    glVertex2f(0.10f, -0.20f);
    glVertex2f(-0.10f, -0.20f);
    glEnd();


    //Left field


    //Green beside road
    glBegin(GL_QUADS);
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, -0.98f);
    glVertex2f(-0.35f, -0.98f);
    glVertex2f(-0.12f, -0.21f);
    glVertex2f(-0.18f, -0.21f);
    glEnd();


    //Small tree


//Stick


    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.6f, -0.45f);
    glVertex2f(-0.65f, -0.6f);
    glVertex2f(-0.45f, -0.6f);
    glVertex2f(-0.5f, -0.45f);




    glEnd();


    //1


GLfloat x31=-0.6f; GLfloat y31=-0.45f; GLfloat radius31 =.06f;
    int triangleAmount31 = 20;



    GLfloat twicePi31 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 77, 0);
        glVertex2f(x31, y31);
        for(int i = 0; i <=triangleAmount31;i++) {
            glVertex2f(
                    x31 + (radius31* cos(i *  twicePi31 / triangleAmount31)),
                y31 + (radius31 * sin(i * twicePi31 / triangleAmount31))
            );
        }
    glEnd();



GLfloat x30=-0.65f; GLfloat y30=-0.5f; GLfloat radius30 =.06f;
    int triangleAmount30 = 20;



    GLfloat twicePi30 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
        glVertex2f(x30, y30);
        for(int i = 0; i <=triangleAmount30;i++) {
            glVertex2f(
                    x30 + (radius30* cos(i *  twicePi30 / triangleAmount30)),
                y30 + (radius30 * sin(i * twicePi30 / triangleAmount30))
            );
        }
    glEnd();


GLfloat x27=-0.55f; GLfloat y27=-0.5f; GLfloat radius27 =.06f;
    int triangleAmount27 = 20;


    GLfloat twicePi27 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 153, 0);
        glVertex2f(x27, y27);
        for(int i = 0; i <=triangleAmount27;i++) {
            glVertex2f(
                    x27 + (radius27* cos(i *  twicePi27 / triangleAmount27)),
                y27 + (radius27 * sin(i * twicePi27 / triangleAmount27))
            );
        }
    glEnd();


GLfloat x29=-0.5f; GLfloat y29=-0.45f; GLfloat radius29 =.06f;
    int triangleAmount29 = 20;



    GLfloat twicePi29 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 153, 0);
        glVertex2f(x29, y29);
        for(int i = 0; i <=triangleAmount29;i++) {
            glVertex2f(
                    x29 + (radius29* cos(i *  twicePi29 / triangleAmount29)),
                y29 + (radius29 * sin(i * twicePi29 / triangleAmount29))
            );
        }
    glEnd();



GLfloat x28=-0.45f; GLfloat y28=-0.5f; GLfloat radius28 =.06f;
    int triangleAmount28 = 20;



    GLfloat twicePi28 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 153, 0);
        glVertex2f(x28, y28);
        for(int i = 0; i <=triangleAmount28;i++) {
            glVertex2f(
                    x28 + (radius28* cos(i *  twicePi28 / triangleAmount28)),
                y28 + (radius28 * sin(i * twicePi28 / triangleAmount28))
            );
        }
    glEnd();




//1 end



    //Fence


//Horizon
    glBegin(GL_LINES);
    glColor3ub(102, 26, 0);
    glVertex2f(-0.99f, -0.5f);
    glVertex2f(-0.99f, -0.65f);

    glVertex2f(-0.98f, -0.5f);
    glVertex2f(-0.98f, -0.65f);

    glVertex2f(-0.97f, -0.5f);
    glVertex2f(-0.97f, -0.65f);

    glVertex2f(-0.96f, -0.5f);
    glVertex2f(-0.96f, -0.65f);

    glVertex2f(-0.95f, -0.5f);
    glVertex2f(-0.95f, -0.65f);

    glVertex2f(-0.94f, -0.5f);
    glVertex2f(-0.94f, -0.65f);

    glVertex2f(-0.93f, -0.5f);
    glVertex2f(-0.93f, -0.65f);

    glVertex2f(-0.92f, -0.5f);
    glVertex2f(-0.92f, -0.65f);

    glVertex2f(-0.91f, -0.5f);
    glVertex2f(-0.91f, -0.65f);

    glVertex2f(-0.90f, -0.5f);
    glVertex2f(-0.90f, -0.65f);

    glVertex2f(-0.89f, -0.5f);
    glVertex2f(-0.89f, -0.65f);

    glVertex2f(-0.88f, -0.5f);
    glVertex2f(-0.88f, -0.65f);

    glVertex2f(-0.87f, -0.5f);
    glVertex2f(-0.87f, -0.65f);


//Middle fence


    glVertex2f(-0.99f, -0.575f);
    glVertex2f(-0.87f, -0.575f);



//Vertical

    glVertex2f(-0.875f, -0.51f);
    glVertex2f(-0.875f, -0.66f);

    glVertex2f(-0.885f, -0.52f);
    glVertex2f(-0.885f, -0.67f);

    glVertex2f(-0.895f, -0.53f);
    glVertex2f(-0.895f, -0.685f);

    glVertex2f(-0.905f, -0.54f);
    glVertex2f(-0.905f, -0.695f);

    glVertex2f(-0.915f, -0.55f);
    glVertex2f(-0.915f, -0.715f);

    glVertex2f(-0.925f, -0.56f);
    glVertex2f(-0.925f, -0.73f);

    glVertex2f(-0.935f, -0.57f);
    glVertex2f(-0.935f, -0.745f);

    glVertex2f(-0.945f, -0.58f);
    glVertex2f(-0.945f, -0.765f);

    glVertex2f(-0.955f, -0.59f);
    glVertex2f(-0.955f, -0.785f);

    glVertex2f(-0.965f, -0.60f);
    glVertex2f(-0.965f, -0.805f);


    glVertex2f(-0.975f, -0.61f);
    glVertex2f(-0.975f, -0.83f);


    glVertex2f(-0.985f, -0.62f);
    glVertex2f(-0.985f, -0.855);




    glEnd();


    //Right field


    //Green beside road
    glBegin(GL_QUADS);
    glColor3ub(0, 179, 60);
    glVertex2f(0.48f, -0.98f);
    glVertex2f(0.35f, -0.98f);
    glVertex2f(0.12f, -0.21f);
    glVertex2f(0.18f, -0.21f);
    glEnd();


glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(0.6f, -0.45f);
    glVertex2f(0.65f, -0.6f);
    glVertex2f(0.45f, -0.6f);
    glVertex2f(0.5f, -0.45f);




    glEnd();


    //1


GLfloat x32=0.6f; GLfloat y32=-0.45f; GLfloat radius32 =.06f;
    int triangleAmount32 = 20;



    GLfloat twicePi32 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 77, 0);
        glVertex2f(x32, y32);
        for(int i = 0; i <=triangleAmount32;i++) {
            glVertex2f(
                    x32 + (radius32* cos(i *  twicePi32 / triangleAmount32)),
                y32 + (radius32 * sin(i * twicePi32 / triangleAmount32))
            );
        }
    glEnd();



GLfloat x33=0.65f; GLfloat y33=-0.5f; GLfloat radius33 =.06f;
    int triangleAmount33 = 20;



    GLfloat twicePi33 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
        glVertex2f(x33, y33);
        for(int i = 0; i <=triangleAmount33;i++) {
            glVertex2f(
                    x33 + (radius33* cos(i *  twicePi33 / triangleAmount33)),
                y33 + (radius33 * sin(i * twicePi33 / triangleAmount33))
            );
        }
    glEnd();


GLfloat x34=0.55f; GLfloat y34=-0.5f; GLfloat radius34 =.06f;
    int triangleAmount34 = 20;


    GLfloat twicePi34 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 153, 0);
        glVertex2f(x34, y34);
        for(int i = 0; i <=triangleAmount34;i++) {
            glVertex2f(
                    x34 + (radius34* cos(i *  twicePi34 / triangleAmount34)),
                y34 + (radius34 * sin(i * twicePi34 / triangleAmount34))
            );
        }
    glEnd();


GLfloat x35=0.5f; GLfloat y35=-0.45f; GLfloat radius35 =.06f;
    int triangleAmount35 = 20;



    GLfloat twicePi35 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 153, 0);
        glVertex2f(x35, y35);
        for(int i = 0; i <=triangleAmount35;i++) {
            glVertex2f(
                    x35 + (radius35* cos(i *  twicePi35 / triangleAmount35)),
                y35 + (radius35 * sin(i * twicePi35 / triangleAmount35))
            );
        }
    glEnd();



GLfloat x36=0.45f; GLfloat y36=-0.5f; GLfloat radius36 =.06f;
    int triangleAmount36 = 20;



    GLfloat twicePi36 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 153, 0);
        glVertex2f(x36, y36);
        for(int i = 0; i <=triangleAmount36;i++) {
            glVertex2f(
                    x36 + (radius36* cos(i *  twicePi36 / triangleAmount36)),
                y36 + (radius36 * sin(i * twicePi36 / triangleAmount36))
            );
        }
    glEnd();




//1 end



//dooms of the mosque


    //Behind 1
    GLfloat x8=-0.52f; GLfloat y8=0.30f; GLfloat radius8 =.10f;
    int triangleAmount8 = 20;



    GLfloat twicePi8 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 184, 77);
        glVertex2f(x8, y8);
        for(int i = 0; i <=triangleAmount8;i++) {
            glVertex2f(
                    x8 + (radius8 * cos(i *  twicePi8 / triangleAmount8)),
                y8 + (radius8 * sin(i * twicePi8 / triangleAmount8))
            );
        }
    glEnd();


    //Behind 2
    GLfloat x9=-0.33f; GLfloat y9=0.315f; GLfloat radius9 =.10f;
    int triangleAmount9 = 20;



    GLfloat twicePi9 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 184, 77);
        glVertex2f(x9, y9);
        for(int i = 0; i <=triangleAmount9;i++) {
            glVertex2f(
                    x9 + (radius9 * cos(i *  twicePi9 / triangleAmount9)),
                y9 + (radius9 * sin(i * twicePi9 / triangleAmount9))
            );
        }
    glEnd();


    //Behind 3
    GLfloat x10=-0.15f; GLfloat y10=0.33f; GLfloat radius10 =.10f;
    int triangleAmount10 = 20;



    GLfloat twicePi10 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 184, 77);
        glVertex2f(x10, y10);
        for(int i = 0; i <=triangleAmount10;i++) {
            glVertex2f(
                    x10 + (radius10 * cos(i *  twicePi10 / triangleAmount10)),
                y10 + (radius10 * sin(i * twicePi10 / triangleAmount10))
            );
        }
    glEnd();


    //Behind 4
    GLfloat x11=0.52f; GLfloat y11=0.30f; GLfloat radius11 =.10f;
    int triangleAmount11 = 20;



    GLfloat twicePi11 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 184, 77);
        glVertex2f(x11, y11);
        for(int i = 0; i <=triangleAmount11;i++) {
            glVertex2f(
                    x11 + (radius11 * cos(i *  twicePi11 / triangleAmount11)),
                y11 + (radius11 * sin(i * twicePi11 / triangleAmount11))
            );
        }
    glEnd();


    //Behind 5
    GLfloat x12=0.33f; GLfloat y12=0.315f; GLfloat radius12 =.10f;
    int triangleAmount12 = 20;



    GLfloat twicePi12 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 184, 77);
        glVertex2f(x12, y12);
        for(int i = 0; i <=triangleAmount12;i++) {
            glVertex2f(
                    x12 + (radius12 * cos(i *  twicePi12 / triangleAmount12)),
                y12 + (radius12 * sin(i * twicePi12 / triangleAmount12))
            );
        }
    glEnd();


    //Behind 6
    GLfloat x13=0.15f; GLfloat y13=0.33f; GLfloat radius13 =.10f;
    int triangleAmount13 = 20;



    GLfloat twicePi13 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 184, 77);
        glVertex2f(x13, y13);
        for(int i = 0; i <=triangleAmount13;i++) {
            glVertex2f(
                    x13 + (radius13 * cos(i *  twicePi13 / triangleAmount13)),
                y13 + (radius13 * sin(i * twicePi13 / triangleAmount13))
            );
        }
    glEnd();




    //Front 1
    GLfloat x1=-0.6f; GLfloat y1=0.30f; GLfloat radius1 =.10f;
    int triangleAmount1 = 20;



    GLfloat twicePi1 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x1, y1);
        for(int i = 0; i <=triangleAmount1;i++) {
            glVertex2f(
                    x1 + (radius1 * cos(i *  twicePi1 / triangleAmount1)),
                y1 + (radius1 * sin(i * twicePi1 / triangleAmount1))
            );
        }
    glEnd();

    //Front 2
    GLfloat x2=-0.43f; GLfloat y2=0.315f; GLfloat radius2 =.10f;
    int triangleAmount2 = 20;



    GLfloat twicePi2 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x2, y2);
        for(int i = 0; i <=triangleAmount2;i++) {
            glVertex2f(
                    x2 + (radius2 * cos(i *  twicePi2 / triangleAmount2)),
                y2 + (radius2 * sin(i * twicePi2 / triangleAmount2))
            );
        }
    glEnd();


    //Front 3
    GLfloat x3=-0.26f; GLfloat y3=0.325f; GLfloat radius3 =.10f;
    int triangleAmount3 = 20;



    GLfloat twicePi3 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x3, y3);
        for(int i = 0; i <=triangleAmount2;i++) {
            glVertex2f(
                    x3 + (radius3 * cos(i *  twicePi3 / triangleAmount3)),
                y3 + (radius3 * sin(i * twicePi3 / triangleAmount3))
            );
        }
    glEnd();


    //Front 4
    GLfloat x4=-0.0f; GLfloat y4=0.35f; GLfloat radius4 =.10f;
    int triangleAmount4 = 20;



    GLfloat twicePi4 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x4, y4);
        for(int i = 0; i <=triangleAmount4;i++) {
            glVertex2f(
                    x4 + (radius4 * cos(i *  twicePi4 / triangleAmount4)),
                y4 + (radius4 * sin(i * twicePi4 / triangleAmount4))
            );
        }
    glEnd();

    //Front 5
    GLfloat x5=0.6f; GLfloat y5=0.30f; GLfloat radius5 =.10f;
    int triangleAmount5 = 20;



    GLfloat twicePi5 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x5, y5);
        for(int i = 0; i <=triangleAmount5;i++) {
            glVertex2f(
                    x5 + (radius5 * cos(i *  twicePi5 / triangleAmount5)),
                y5 + (radius5 * sin(i * twicePi5 / triangleAmount5))
            );
        }
    glEnd();

    //Front 6
    GLfloat x6=0.43f; GLfloat y6=0.315f; GLfloat radius6=.10f;
    int triangleAmount6 = 20;



    GLfloat twicePi6 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x6, y6);
        for(int i = 0; i <=triangleAmount6;i++) {
            glVertex2f(
                    x6 + (radius6 * cos(i *  twicePi6 / triangleAmount6)),
                y6 + (radius6 * sin(i * twicePi6 / triangleAmount6))
            );
        }
    glEnd();


    //Front 7
    GLfloat x7=0.26f; GLfloat y7=0.325f; GLfloat radius7 =.10f;
    int triangleAmount7 = 20;



    GLfloat twicePi7 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x7, y7);
        for(int i = 0; i <=triangleAmount7;i++) {
            glVertex2f(
                    x7 + (radius7 * cos(i *  twicePi7 / triangleAmount7)),
                y7 + (radius7 * sin(i * twicePi7 / triangleAmount7))
            );
        }
    glEnd();




    //Body of mosque


//Left


    GLfloat x25=-0.775f; GLfloat y25=0.50f; GLfloat radius25 =.075f;
    int triangleAmount25 = 20;



    GLfloat twicePi25 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 153, 0);
        glVertex2f(x25, y25);
        for(int i = 0; i <=triangleAmount25;i++) {
            glVertex2f(
                    x25 + (radius25 * cos(i *  twicePi25 / triangleAmount25)),
                y25 + (radius25 * sin(i * twicePi25 / triangleAmount25))
            );
        }
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(204, 122, 0);
    glVertex2f(-0.70f, 0.50f);
    glVertex2f(-0.70f, 0.35f);
    glVertex2f(-0.85f, 0.35f);
    glVertex2f(-0.85f, 0.50f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(-0.70f, 0.35f);
    glVertex2f(-0.70f, 0.30f);
    glVertex2f(-0.85f, 0.30f);
    glVertex2f(-0.85f, 0.35f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(204, 122, 0);
    glVertex2f(-0.70f, 0.30f);
    glVertex2f(-0.70f, -0.15f);
    glVertex2f(-0.85f, -0.15f);
    glVertex2f(-0.85f, 0.30f);
    glEnd();


//Right


    GLfloat x26=0.775f; GLfloat y26=0.50f; GLfloat radius26 =.075f;
    int triangleAmount26 = 20;



    GLfloat twicePi26 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 153, 0);
        glVertex2f(x26, y26);
        for(int i = 0; i <=triangleAmount26;i++) {
            glVertex2f(
                    x26 + (radius26 * cos(i *  twicePi26 / triangleAmount26)),
                y26 + (radius26 * sin(i * twicePi26 / triangleAmount26))
            );
        }
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 122, 0);
    glVertex2f(0.70f, 0.50f);
    glVertex2f(0.70f, 0.35f);
    glVertex2f(0.85f, 0.35f);
    glVertex2f(0.85f, 0.50f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(0.70f, 0.35f);
    glVertex2f(0.70f, 0.30f);
    glVertex2f(0.85f, 0.30f);
    glVertex2f(0.85f, 0.35f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(204, 122, 0);
    glVertex2f(0.70f, 0.30f);
    glVertex2f(0.70f, -0.15f);
    glVertex2f(0.85f, -0.15f);
    glVertex2f(0.85f, 0.30f);
    glEnd();


    //Inside

    glBegin(GL_QUADS);
    glColor3ub(230, 138, 0);
    glVertex2f(-0.70f, 0.35f);
    glVertex2f(-0.70f, -0.15f);
    glVertex2f(0.70f, -0.15f);
    glVertex2f(0.70f, 0.35f);
    glEnd();


    //Roof of mosque

    glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(-0.70f, 0.35f);
    glVertex2f(-0.70f, 0.30f);
    glVertex2f(0.0f, 0.35f);
    glVertex2f(0.0f, 0.40f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(0.70f, 0.35f);
    glVertex2f(0.70f, 0.30f);
    glVertex2f(0.0f, 0.35f);
    glVertex2f(0.0f, 0.40f);
    glEnd();



//Doors


//Left 1


glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.65f, 0.07f);
    glVertex2f(-0.65f, -0.14f);
    glVertex2f(-0.58f, -0.14f);
    glVertex2f(-0.58f, 0.07f);
    glEnd();


    GLfloat x14=-0.615f; GLfloat y14=0.07f; GLfloat radius14 =.035f;
    int triangleAmount14 = 20;



    GLfloat twicePi14 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x14, y14);
        for(int i = 0; i <=triangleAmount14;i++) {
            glVertex2f(
                    x14 + (radius14 * cos(i *  twicePi14 / triangleAmount14)),
                y14 + (radius14 * sin(i * twicePi14 / triangleAmount14))
            );
        }
    glEnd();


//Left 2
glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.53f, 0.07f);
    glVertex2f(-0.53f, -0.14f);
    glVertex2f(-0.46f, -0.14f);
    glVertex2f(-0.46f, 0.07f);
    glEnd();


     GLfloat x15=-0.495f; GLfloat y15=0.07f; GLfloat radius15 =.035f;
    int triangleAmount15 = 20;



    GLfloat twicePi15 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x15, y15);
        for(int i = 0; i <=triangleAmount15;i++) {
            glVertex2f(
                    x15 + (radius15 * cos(i *  twicePi15 / triangleAmount15)),
                y15 + (radius15 * sin(i * twicePi15 / triangleAmount15))
            );
        }
    glEnd();


//Left 3
glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.41f, 0.07f);
    glVertex2f(-0.41f, -0.14f);
    glVertex2f(-0.34f, -0.14f);
    glVertex2f(-0.34f, 0.07f);
    glEnd();


    GLfloat x16=-0.375f; GLfloat y16=0.07f; GLfloat radius16 =.035f;
    int triangleAmount16 = 20;



    GLfloat twicePi16 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x16, y16);
        for(int i = 0; i <=triangleAmount16;i++) {
            glVertex2f(
                    x16 + (radius15 * cos(i *  twicePi16 / triangleAmount16)),
                y16 + (radius16 * sin(i * twicePi16 / triangleAmount16))
            );
        }
    glEnd();


//Left 4
glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.29f, 0.07f);
    glVertex2f(-0.29f, -0.14f);
    glVertex2f(-0.22f, -0.14f);
    glVertex2f(-0.22f, 0.07f);
    glEnd();

    GLfloat x17=-0.255f; GLfloat y17=0.07f; GLfloat radius17 =.035f;
    int triangleAmount17 = 20;



    GLfloat twicePi17 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x17, y17);
        for(int i = 0; i <=triangleAmount17;i++) {
            glVertex2f(
                    x17 + (radius17 * cos(i *  twicePi17 / triangleAmount17)),
                y17 + (radius17 * sin(i * twicePi17 / triangleAmount17))
            );
        }
    glEnd();


//Left 5
glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.17f, 0.07f);
    glVertex2f(-0.17f, -0.14f);
    glVertex2f(-0.10f, -0.14f);
    glVertex2f(-0.10f, 0.07f);
    glEnd();


    GLfloat x18=-0.135f; GLfloat y18=0.07f; GLfloat radius18 =.035f;
    int triangleAmount18 = 20;



    GLfloat twicePi18 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x18, y18);
        for(int i = 0; i <=triangleAmount18;i++) {
            glVertex2f(
                    x18 + (radius18 * cos(i *  twicePi18 / triangleAmount18)),
                y18 + (radius18 * sin(i * twicePi18 / triangleAmount18))
            );
        }
    glEnd();




//Middle Door

glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.05f, 0.10f);
    glVertex2f(-0.05f, -0.14f);
    glVertex2f(0.05f, -0.14f);
    glVertex2f(0.05f, 0.10f);
    glEnd();


    GLfloat x19=0.0f; GLfloat y19=0.10f; GLfloat radius19 =.047f;
    int triangleAmount19 = 20;



    GLfloat twicePi19 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x19, y19);
        for(int i = 0; i <=triangleAmount19;i++) {
            glVertex2f(
                    x19 + (radius19 * cos(i *  twicePi19 / triangleAmount19)),
                y19 + (radius19 * sin(i * twicePi19 / triangleAmount19))
            );
        }
    glEnd();



//Right 1

glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.65f, 0.07f);
    glVertex2f(0.65f, -0.14f);
    glVertex2f(0.58f, -0.14f);
    glVertex2f(0.58f, 0.07f);
    glEnd();


    GLfloat x20=0.615f; GLfloat y20=0.07f; GLfloat radius20 =.035f;
    int triangleAmount20 = 20;



    GLfloat twicePi20 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x20, y20);
        for(int i = 0; i <=triangleAmount20;i++) {
            glVertex2f(
                    x20 + (radius20 * cos(i *  twicePi20 / triangleAmount20)),
                y20 + (radius20 * sin(i * twicePi20 / triangleAmount20))
            );
        }
    glEnd();

//Right 2
glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.53f, 0.07f);
    glVertex2f(0.53f, -0.14f);
    glVertex2f(0.46f, -0.14f);
    glVertex2f(0.46f, 0.07f);
    glEnd();


    GLfloat x21=0.495f; GLfloat y21=0.07f; GLfloat radius21 =.035f;
    int triangleAmount21 = 20;



    GLfloat twicePi21 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x21, y21);
        for(int i = 0; i <=triangleAmount21;i++) {
            glVertex2f(
                    x21 + (radius21 * cos(i *  twicePi21 / triangleAmount21)),
                y21 + (radius21 * sin(i * twicePi21 / triangleAmount21))
            );
        }
    glEnd();




//Right 3
glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.41f, 0.07f);
    glVertex2f(0.41f, -0.14f);
    glVertex2f(0.34f, -0.14f);
    glVertex2f(0.34f, 0.07f);
    glEnd();


GLfloat x22=0.375f; GLfloat y22=0.07f; GLfloat radius22 =.035f;
    int triangleAmount22 = 20;



    GLfloat twicePi22 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x22, y22);
        for(int i = 0; i <=triangleAmount22;i++) {
            glVertex2f(
                    x22 + (radius22 * cos(i *  twicePi22 / triangleAmount22)),
                y22 + (radius22 * sin(i * twicePi22 / triangleAmount22))
            );
        }
    glEnd();

//Right 4
glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.29f, 0.07f);
    glVertex2f(0.29f, -0.14f);
    glVertex2f(0.22f, -0.14f);
    glVertex2f(0.22f, 0.07f);
    glEnd();


    GLfloat x23=0.255f; GLfloat y23=0.07f; GLfloat radius23 =.035f;
    int triangleAmount23 = 20;



    GLfloat twicePi23 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x23, y23);
        for(int i = 0; i <=triangleAmount23;i++) {
            glVertex2f(
                    x23 + (radius23 * cos(i *  twicePi23 / triangleAmount23)),
                y23 + (radius23 * sin(i * twicePi23 / triangleAmount23))
            );
        }
    glEnd();


//Right 5
glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.17f, 0.07f);
    glVertex2f(0.17f, -0.14f);
    glVertex2f(0.10f, -0.14f);
    glVertex2f(0.10f, 0.07f);
    glEnd();


 GLfloat x24=0.135f; GLfloat y24=0.07f; GLfloat radius24 =.035f;
    int triangleAmount24 = 20;


    GLfloat twicePi24 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x24, y24);
        for(int i = 0; i <=triangleAmount24;i++) {
            glVertex2f(
                    x24 + (radius24 * cos(i *  twicePi24 / triangleAmount24)),
                y24 + (radius24 * sin(i * twicePi24 / triangleAmount24))
            );
        }
    glEnd();




//Bird
glPushMatrix();

glTranslatef(position_bird,0.0f, 0.0f);


glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);

glEnd();



glTranslatef(0.1f, 0.1f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);

glEnd();


glLoadIdentity();
glTranslatef(position_bird,0.0f, 0.0f);

glTranslatef(0.11f, 0.05f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);

glEnd();



glLoadIdentity();

glTranslatef(position_bird,0.0f, 0.0f);

glTranslatef(1.0f, 0.05f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);

glEnd();



glLoadIdentity();

glTranslatef(position_bird,0.0f, 0.0f);

glTranslatef(1.1f, 0.05f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);

glEnd();

glPopMatrix();

glLoadIdentity();



//birds end


//Rain
glTranslatef(rainX, rainY, 0);

      for (double i = -1.0f; i < 1.0f; i += 0.15f) {

      for (double j = -1.0f; j < 1.0f; j += 0.15f) {

        drawLine(i, j, i - 0.1f, j - 0.1f, 1, 1, 1, 1);

      }

      }

      glLoadIdentity();

      i += 0.1f;




//Rain end



	glFlush();  // Render now



}






//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



//Night Mood



void night() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)



    //Back field

    glBegin(GL_QUADS);
    glColor3ub(0, 255, 0);
    glVertex2f(-1.0f, -0.05f);
    glVertex2f(-1.0f, -0.15f);
    glVertex2f(1.0f, -0.15f);
     glVertex2f(1.0f, -0.05f);
    glEnd();



    //Back field wall

    glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(-1.0f, -0.05f);
    glVertex2f(1.0f, -0.05f);
     glVertex2f(1.0f, 0.0f);
    glEnd();



    //Sky

    glBegin(GL_QUADS);
    glColor3ub(0, 20, 51);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, 1.0f);
    glEnd();



 //Back green environment


    glBegin(GL_QUADS);
    glColor3ub(0, 102, 0);
    glVertex2f(-1.0f, 0.1f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
     glVertex2f(1.0f, 0.1f);
    glEnd();



//moon

glPushMatrix();
glTranslatef(0,position2,0);


GLfloat x=-0.6f; GLfloat y=0.8f; GLfloat radius =.11f;
    int triangleAmount = 20;



    GLfloat twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x, y);
        for(int i = 0; i <=triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

glPopMatrix();


//Moon end



//Road beside mosque

	glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(-1.0f, -0.15f);
    glVertex2f(-1.0f, -0.20f);
    glVertex2f(1.0f, -0.20f);
    glVertex2f(1.0f, -0.15f);
    glEnd();



//Front field

    glBegin(GL_QUADS);
    glColor3ub(0, 255, 0);
    glVertex2f(-1.0f, -0.20f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
     glVertex2f(1.0f, -0.20f);
    glEnd();


//cloud


//1
glPushMatrix();

glTranslatef(position3,0,0);

GLfloat x111=0.5f; GLfloat y222=0.7f; GLfloat radius333 =.06f;
    int triangleAmount555 = 20;


    GLfloat twicePi444 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
        glVertex2f(x111, y222);
        for(int i = 0; i <=triangleAmount555;i++) {
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
        for(int i = 0; i <=triangleAmount5555;i++) {
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
        for(int i = 0; i <=triangleAmount55555;i++) {
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
        for(int i = 0; i <=triangleAmount104;i++) {
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
        for(int i = 0; i <=triangleAmount1004;i++) {
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
        for(int i = 0; i <=triangleAmount10004;i++) {
            glVertex2f(
                    x10001 + (radius10003* cos(i *  twicePi10005 / triangleAmount10004)),
                y10002 + (radius10003 * sin(i * twicePi10005 / triangleAmount10004))
            );
        }
    glEnd();

glPopMatrix();

//2 end

//cloud end

//Plane

glPushMatrix();


       glTranslatef(position1,0.0f, 0.0f);
       glScalef(1.2,1.5,0);
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


    //Front road of mosque


    glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(-0.30f, -1.0f);
    glVertex2f(0.30f, -1.0f);
    glVertex2f(0.10f, -0.20f);
    glVertex2f(-0.10f, -0.20f);
    glEnd();


    //Left field


    //Green beside road
    glBegin(GL_QUADS);
    glColor3ub(0, 179, 60);
    glVertex2f(-0.48f, -0.98f);
    glVertex2f(-0.35f, -0.98f);
    glVertex2f(-0.12f, -0.21f);
    glVertex2f(-0.18f, -0.21f);
    glEnd();


    //Small tree


//Stick


    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.6f, -0.45f);
    glVertex2f(-0.65f, -0.6f);
    glVertex2f(-0.45f, -0.6f);
    glVertex2f(-0.5f, -0.45f);




    glEnd();


    //1


GLfloat x31=-0.6f; GLfloat y31=-0.45f; GLfloat radius31 =.06f;
    int triangleAmount31 = 20;



    GLfloat twicePi31 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 77, 0);
        glVertex2f(x31, y31);
        for(int i = 0; i <=triangleAmount31;i++) {
            glVertex2f(
                    x31 + (radius31* cos(i *  twicePi31 / triangleAmount31)),
                y31 + (radius31 * sin(i * twicePi31 / triangleAmount31))
            );
        }
    glEnd();



GLfloat x30=-0.65f; GLfloat y30=-0.5f; GLfloat radius30 =.06f;
    int triangleAmount30 = 20;



    GLfloat twicePi30 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
        glVertex2f(x30, y30);
        for(int i = 0; i <=triangleAmount30;i++) {
            glVertex2f(
                    x30 + (radius30* cos(i *  twicePi30 / triangleAmount30)),
                y30 + (radius30 * sin(i * twicePi30 / triangleAmount30))
            );
        }
    glEnd();


GLfloat x27=-0.55f; GLfloat y27=-0.5f; GLfloat radius27 =.06f;
    int triangleAmount27 = 20;


    GLfloat twicePi27 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 153, 0);
        glVertex2f(x27, y27);
        for(int i = 0; i <=triangleAmount27;i++) {
            glVertex2f(
                    x27 + (radius27* cos(i *  twicePi27 / triangleAmount27)),
                y27 + (radius27 * sin(i * twicePi27 / triangleAmount27))
            );
        }
    glEnd();


GLfloat x29=-0.5f; GLfloat y29=-0.45f; GLfloat radius29 =.06f;
    int triangleAmount29 = 20;



    GLfloat twicePi29 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 153, 0);
        glVertex2f(x29, y29);
        for(int i = 0; i <=triangleAmount29;i++) {
            glVertex2f(
                    x29 + (radius29* cos(i *  twicePi29 / triangleAmount29)),
                y29 + (radius29 * sin(i * twicePi29 / triangleAmount29))
            );
        }
    glEnd();



GLfloat x28=-0.45f; GLfloat y28=-0.5f; GLfloat radius28 =.06f;
    int triangleAmount28 = 20;



    GLfloat twicePi28 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 153, 0);
        glVertex2f(x28, y28);
        for(int i = 0; i <=triangleAmount28;i++) {
            glVertex2f(
                    x28 + (radius28* cos(i *  twicePi28 / triangleAmount28)),
                y28 + (radius28 * sin(i * twicePi28 / triangleAmount28))
            );
        }
    glEnd();




//1 end



    //Fence


//Horizon
    glBegin(GL_LINES);
    glColor3ub(102, 26, 0);
    glVertex2f(-0.99f, -0.5f);
    glVertex2f(-0.99f, -0.65f);

    glVertex2f(-0.98f, -0.5f);
    glVertex2f(-0.98f, -0.65f);

    glVertex2f(-0.97f, -0.5f);
    glVertex2f(-0.97f, -0.65f);

    glVertex2f(-0.96f, -0.5f);
    glVertex2f(-0.96f, -0.65f);

    glVertex2f(-0.95f, -0.5f);
    glVertex2f(-0.95f, -0.65f);

    glVertex2f(-0.94f, -0.5f);
    glVertex2f(-0.94f, -0.65f);

    glVertex2f(-0.93f, -0.5f);
    glVertex2f(-0.93f, -0.65f);

    glVertex2f(-0.92f, -0.5f);
    glVertex2f(-0.92f, -0.65f);

    glVertex2f(-0.91f, -0.5f);
    glVertex2f(-0.91f, -0.65f);

    glVertex2f(-0.90f, -0.5f);
    glVertex2f(-0.90f, -0.65f);

    glVertex2f(-0.89f, -0.5f);
    glVertex2f(-0.89f, -0.65f);

    glVertex2f(-0.88f, -0.5f);
    glVertex2f(-0.88f, -0.65f);

    glVertex2f(-0.87f, -0.5f);
    glVertex2f(-0.87f, -0.65f);


//Middle fence


    glVertex2f(-0.99f, -0.575f);
    glVertex2f(-0.87f, -0.575f);



//Vertical

    glVertex2f(-0.875f, -0.51f);
    glVertex2f(-0.875f, -0.66f);

    glVertex2f(-0.885f, -0.52f);
    glVertex2f(-0.885f, -0.67f);

    glVertex2f(-0.895f, -0.53f);
    glVertex2f(-0.895f, -0.685f);

    glVertex2f(-0.905f, -0.54f);
    glVertex2f(-0.905f, -0.695f);

    glVertex2f(-0.915f, -0.55f);
    glVertex2f(-0.915f, -0.715f);

    glVertex2f(-0.925f, -0.56f);
    glVertex2f(-0.925f, -0.73f);

    glVertex2f(-0.935f, -0.57f);
    glVertex2f(-0.935f, -0.745f);

    glVertex2f(-0.945f, -0.58f);
    glVertex2f(-0.945f, -0.765f);

    glVertex2f(-0.955f, -0.59f);
    glVertex2f(-0.955f, -0.785f);

    glVertex2f(-0.965f, -0.60f);
    glVertex2f(-0.965f, -0.805f);


    glVertex2f(-0.975f, -0.61f);
    glVertex2f(-0.975f, -0.83f);


    glVertex2f(-0.985f, -0.62f);
    glVertex2f(-0.985f, -0.855);




    glEnd();


    //Right field


    //Green beside road
    glBegin(GL_QUADS);
    glColor3ub(0, 179, 60);
    glVertex2f(0.48f, -0.98f);
    glVertex2f(0.35f, -0.98f);
    glVertex2f(0.12f, -0.21f);
    glVertex2f(0.18f, -0.21f);
    glEnd();


glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(0.6f, -0.45f);
    glVertex2f(0.65f, -0.6f);
    glVertex2f(0.45f, -0.6f);
    glVertex2f(0.5f, -0.45f);




    glEnd();


    //1


GLfloat x32=0.6f; GLfloat y32=-0.45f; GLfloat radius32 =.06f;
    int triangleAmount32 = 20;



    GLfloat twicePi32 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 77, 0);
        glVertex2f(x32, y32);
        for(int i = 0; i <=triangleAmount32;i++) {
            glVertex2f(
                    x32 + (radius32* cos(i *  twicePi32 / triangleAmount32)),
                y32 + (radius32 * sin(i * twicePi32 / triangleAmount32))
            );
        }
    glEnd();



GLfloat x33=0.65f; GLfloat y33=-0.5f; GLfloat radius33 =.06f;
    int triangleAmount33 = 20;



    GLfloat twicePi33 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 102, 0);
        glVertex2f(x33, y33);
        for(int i = 0; i <=triangleAmount33;i++) {
            glVertex2f(
                    x33 + (radius33* cos(i *  twicePi33 / triangleAmount33)),
                y33 + (radius33 * sin(i * twicePi33 / triangleAmount33))
            );
        }
    glEnd();


GLfloat x34=0.55f; GLfloat y34=-0.5f; GLfloat radius34 =.06f;
    int triangleAmount34 = 20;


    GLfloat twicePi34 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 153, 0);
        glVertex2f(x34, y34);
        for(int i = 0; i <=triangleAmount34;i++) {
            glVertex2f(
                    x34 + (radius34* cos(i *  twicePi34 / triangleAmount34)),
                y34 + (radius34 * sin(i * twicePi34 / triangleAmount34))
            );
        }
    glEnd();


GLfloat x35=0.5f; GLfloat y35=-0.45f; GLfloat radius35 =.06f;
    int triangleAmount35 = 20;



    GLfloat twicePi35 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 153, 0);
        glVertex2f(x35, y35);
        for(int i = 0; i <=triangleAmount35;i++) {
            glVertex2f(
                    x35 + (radius35* cos(i *  twicePi35 / triangleAmount35)),
                y35 + (radius35 * sin(i * twicePi35 / triangleAmount35))
            );
        }
    glEnd();



GLfloat x36=0.45f; GLfloat y36=-0.5f; GLfloat radius36 =.06f;
    int triangleAmount36 = 20;



    GLfloat twicePi36 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 153, 0);
        glVertex2f(x36, y36);
        for(int i = 0; i <=triangleAmount36;i++) {
            glVertex2f(
                    x36 + (radius36* cos(i *  twicePi36 / triangleAmount36)),
                y36 + (radius36 * sin(i * twicePi36 / triangleAmount36))
            );
        }
    glEnd();




//1 end



//dooms of the mosque


    //Behind 1
    GLfloat x8=-0.52f; GLfloat y8=0.30f; GLfloat radius8 =.10f;
    int triangleAmount8 = 20;



    GLfloat twicePi8 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 184, 77);
        glVertex2f(x8, y8);
        for(int i = 0; i <=triangleAmount8;i++) {
            glVertex2f(
                    x8 + (radius8 * cos(i *  twicePi8 / triangleAmount8)),
                y8 + (radius8 * sin(i * twicePi8 / triangleAmount8))
            );
        }
    glEnd();


    //Behind 2
    GLfloat x9=-0.33f; GLfloat y9=0.315f; GLfloat radius9 =.10f;
    int triangleAmount9 = 20;



    GLfloat twicePi9 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 184, 77);
        glVertex2f(x9, y9);
        for(int i = 0; i <=triangleAmount9;i++) {
            glVertex2f(
                    x9 + (radius9 * cos(i *  twicePi9 / triangleAmount9)),
                y9 + (radius9 * sin(i * twicePi9 / triangleAmount9))
            );
        }
    glEnd();


    //Behind 3
    GLfloat x10=-0.15f; GLfloat y10=0.33f; GLfloat radius10 =.10f;
    int triangleAmount10 = 20;



    GLfloat twicePi10 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 184, 77);
        glVertex2f(x10, y10);
        for(int i = 0; i <=triangleAmount10;i++) {
            glVertex2f(
                    x10 + (radius10 * cos(i *  twicePi10 / triangleAmount10)),
                y10 + (radius10 * sin(i * twicePi10 / triangleAmount10))
            );
        }
    glEnd();


    //Behind 4
    GLfloat x11=0.52f; GLfloat y11=0.30f; GLfloat radius11 =.10f;
    int triangleAmount11 = 20;



    GLfloat twicePi11 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 184, 77);
        glVertex2f(x11, y11);
        for(int i = 0; i <=triangleAmount11;i++) {
            glVertex2f(
                    x11 + (radius11 * cos(i *  twicePi11 / triangleAmount11)),
                y11 + (radius11 * sin(i * twicePi11 / triangleAmount11))
            );
        }
    glEnd();


    //Behind 5
    GLfloat x12=0.33f; GLfloat y12=0.315f; GLfloat radius12 =.10f;
    int triangleAmount12 = 20;



    GLfloat twicePi12 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 184, 77);
        glVertex2f(x12, y12);
        for(int i = 0; i <=triangleAmount12;i++) {
            glVertex2f(
                    x12 + (radius12 * cos(i *  twicePi12 / triangleAmount12)),
                y12 + (radius12 * sin(i * twicePi12 / triangleAmount12))
            );
        }
    glEnd();


    //Behind 6
    GLfloat x13=0.15f; GLfloat y13=0.33f; GLfloat radius13 =.10f;
    int triangleAmount13 = 20;



    GLfloat twicePi13 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 184, 77);
        glVertex2f(x13, y13);
        for(int i = 0; i <=triangleAmount13;i++) {
            glVertex2f(
                    x13 + (radius13 * cos(i *  twicePi13 / triangleAmount13)),
                y13 + (radius13 * sin(i * twicePi13 / triangleAmount13))
            );
        }
    glEnd();




    //Front 1
    GLfloat x1=-0.6f; GLfloat y1=0.30f; GLfloat radius1 =.10f;
    int triangleAmount1 = 20;



    GLfloat twicePi1 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x1, y1);
        for(int i = 0; i <=triangleAmount1;i++) {
            glVertex2f(
                    x1 + (radius1 * cos(i *  twicePi1 / triangleAmount1)),
                y1 + (radius1 * sin(i * twicePi1 / triangleAmount1))
            );
        }
    glEnd();

    //Front 2
    GLfloat x2=-0.43f; GLfloat y2=0.315f; GLfloat radius2 =.10f;
    int triangleAmount2 = 20;



    GLfloat twicePi2 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x2, y2);
        for(int i = 0; i <=triangleAmount2;i++) {
            glVertex2f(
                    x2 + (radius2 * cos(i *  twicePi2 / triangleAmount2)),
                y2 + (radius2 * sin(i * twicePi2 / triangleAmount2))
            );
        }
    glEnd();


    //Front 3
    GLfloat x3=-0.26f; GLfloat y3=0.325f; GLfloat radius3 =.10f;
    int triangleAmount3 = 20;



    GLfloat twicePi3 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x3, y3);
        for(int i = 0; i <=triangleAmount2;i++) {
            glVertex2f(
                    x3 + (radius3 * cos(i *  twicePi3 / triangleAmount3)),
                y3 + (radius3 * sin(i * twicePi3 / triangleAmount3))
            );
        }
    glEnd();


    //Front 4
    GLfloat x4=-0.0f; GLfloat y4=0.35f; GLfloat radius4 =.10f;
    int triangleAmount4 = 20;



    GLfloat twicePi4 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x4, y4);
        for(int i = 0; i <=triangleAmount4;i++) {
            glVertex2f(
                    x4 + (radius4 * cos(i *  twicePi4 / triangleAmount4)),
                y4 + (radius4 * sin(i * twicePi4 / triangleAmount4))
            );
        }
    glEnd();

    //Front 5
    GLfloat x5=0.6f; GLfloat y5=0.30f; GLfloat radius5 =.10f;
    int triangleAmount5 = 20;



    GLfloat twicePi5 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x5, y5);
        for(int i = 0; i <=triangleAmount5;i++) {
            glVertex2f(
                    x5 + (radius5 * cos(i *  twicePi5 / triangleAmount5)),
                y5 + (radius5 * sin(i * twicePi5 / triangleAmount5))
            );
        }
    glEnd();

    //Front 6
    GLfloat x6=0.43f; GLfloat y6=0.315f; GLfloat radius6=.10f;
    int triangleAmount6 = 20;



    GLfloat twicePi6 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x6, y6);
        for(int i = 0; i <=triangleAmount6;i++) {
            glVertex2f(
                    x6 + (radius6 * cos(i *  twicePi6 / triangleAmount6)),
                y6 + (radius6 * sin(i * twicePi6 / triangleAmount6))
            );
        }
    glEnd();


    //Front 7
    GLfloat x7=0.26f; GLfloat y7=0.325f; GLfloat radius7 =.10f;
    int triangleAmount7 = 20;



    GLfloat twicePi7 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204, 122, 0);
        glVertex2f(x7, y7);
        for(int i = 0; i <=triangleAmount7;i++) {
            glVertex2f(
                    x7 + (radius7 * cos(i *  twicePi7 / triangleAmount7)),
                y7 + (radius7 * sin(i * twicePi7 / triangleAmount7))
            );
        }
    glEnd();




    //Body of mosque


//Left


    GLfloat x25=-0.775f; GLfloat y25=0.50f; GLfloat radius25 =.075f;
    int triangleAmount25 = 20;



    GLfloat twicePi25 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 153, 0);
        glVertex2f(x25, y25);
        for(int i = 0; i <=triangleAmount25;i++) {
            glVertex2f(
                    x25 + (radius25 * cos(i *  twicePi25 / triangleAmount25)),
                y25 + (radius25 * sin(i * twicePi25 / triangleAmount25))
            );
        }
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(204, 122, 0);
    glVertex2f(-0.70f, 0.50f);
    glVertex2f(-0.70f, 0.35f);
    glVertex2f(-0.85f, 0.35f);
    glVertex2f(-0.85f, 0.50f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(-0.70f, 0.35f);
    glVertex2f(-0.70f, 0.30f);
    glVertex2f(-0.85f, 0.30f);
    glVertex2f(-0.85f, 0.35f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(204, 122, 0);
    glVertex2f(-0.70f, 0.30f);
    glVertex2f(-0.70f, -0.15f);
    glVertex2f(-0.85f, -0.15f);
    glVertex2f(-0.85f, 0.30f);
    glEnd();


//Right


    GLfloat x26=0.775f; GLfloat y26=0.50f; GLfloat radius26 =.075f;
    int triangleAmount26 = 20;



    GLfloat twicePi26 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 153, 0);
        glVertex2f(x26, y26);
        for(int i = 0; i <=triangleAmount26;i++) {
            glVertex2f(
                    x26 + (radius26 * cos(i *  twicePi26 / triangleAmount26)),
                y26 + (radius26 * sin(i * twicePi26 / triangleAmount26))
            );
        }
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 122, 0);
    glVertex2f(0.70f, 0.50f);
    glVertex2f(0.70f, 0.35f);
    glVertex2f(0.85f, 0.35f);
    glVertex2f(0.85f, 0.50f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(0.70f, 0.35f);
    glVertex2f(0.70f, 0.30f);
    glVertex2f(0.85f, 0.30f);
    glVertex2f(0.85f, 0.35f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(204, 122, 0);
    glVertex2f(0.70f, 0.30f);
    glVertex2f(0.70f, -0.15f);
    glVertex2f(0.85f, -0.15f);
    glVertex2f(0.85f, 0.30f);
    glEnd();


    //Inside

    glBegin(GL_QUADS);
    glColor3ub(230, 138, 0);
    glVertex2f(-0.70f, 0.35f);
    glVertex2f(-0.70f, -0.15f);
    glVertex2f(0.70f, -0.15f);
    glVertex2f(0.70f, 0.35f);
    glEnd();


    //Roof of mosque

    glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(-0.70f, 0.35f);
    glVertex2f(-0.70f, 0.30f);
    glVertex2f(0.0f, 0.35f);
    glVertex2f(0.0f, 0.40f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 133, 51);
    glVertex2f(0.70f, 0.35f);
    glVertex2f(0.70f, 0.30f);
    glVertex2f(0.0f, 0.35f);
    glVertex2f(0.0f, 0.40f);
    glEnd();



//Doors


//Left 1


glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.65f, 0.07f);
    glVertex2f(-0.65f, -0.14f);
    glVertex2f(-0.58f, -0.14f);
    glVertex2f(-0.58f, 0.07f);
    glEnd();


    GLfloat x14=-0.615f; GLfloat y14=0.07f; GLfloat radius14 =.035f;
    int triangleAmount14 = 20;



    GLfloat twicePi14 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x14, y14);
        for(int i = 0; i <=triangleAmount14;i++) {
            glVertex2f(
                    x14 + (radius14 * cos(i *  twicePi14 / triangleAmount14)),
                y14 + (radius14 * sin(i * twicePi14 / triangleAmount14))
            );
        }
    glEnd();


//Left 2
glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.53f, 0.07f);
    glVertex2f(-0.53f, -0.14f);
    glVertex2f(-0.46f, -0.14f);
    glVertex2f(-0.46f, 0.07f);
    glEnd();


     GLfloat x15=-0.495f; GLfloat y15=0.07f; GLfloat radius15 =.035f;
    int triangleAmount15 = 20;



    GLfloat twicePi15 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x15, y15);
        for(int i = 0; i <=triangleAmount15;i++) {
            glVertex2f(
                    x15 + (radius15 * cos(i *  twicePi15 / triangleAmount15)),
                y15 + (radius15 * sin(i * twicePi15 / triangleAmount15))
            );
        }
    glEnd();


//Left 3
glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.41f, 0.07f);
    glVertex2f(-0.41f, -0.14f);
    glVertex2f(-0.34f, -0.14f);
    glVertex2f(-0.34f, 0.07f);
    glEnd();


    GLfloat x16=-0.375f; GLfloat y16=0.07f; GLfloat radius16 =.035f;
    int triangleAmount16 = 20;



    GLfloat twicePi16 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x16, y16);
        for(int i = 0; i <=triangleAmount16;i++) {
            glVertex2f(
                    x16 + (radius15 * cos(i *  twicePi16 / triangleAmount16)),
                y16 + (radius16 * sin(i * twicePi16 / triangleAmount16))
            );
        }
    glEnd();


//Left 4
glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.29f, 0.07f);
    glVertex2f(-0.29f, -0.14f);
    glVertex2f(-0.22f, -0.14f);
    glVertex2f(-0.22f, 0.07f);
    glEnd();

    GLfloat x17=-0.255f; GLfloat y17=0.07f; GLfloat radius17 =.035f;
    int triangleAmount17 = 20;



    GLfloat twicePi17 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x17, y17);
        for(int i = 0; i <=triangleAmount17;i++) {
            glVertex2f(
                    x17 + (radius17 * cos(i *  twicePi17 / triangleAmount17)),
                y17 + (radius17 * sin(i * twicePi17 / triangleAmount17))
            );
        }
    glEnd();


//Left 5
glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.17f, 0.07f);
    glVertex2f(-0.17f, -0.14f);
    glVertex2f(-0.10f, -0.14f);
    glVertex2f(-0.10f, 0.07f);
    glEnd();


    GLfloat x18=-0.135f; GLfloat y18=0.07f; GLfloat radius18 =.035f;
    int triangleAmount18 = 20;



    GLfloat twicePi18 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x18, y18);
        for(int i = 0; i <=triangleAmount18;i++) {
            glVertex2f(
                    x18 + (radius18 * cos(i *  twicePi18 / triangleAmount18)),
                y18 + (radius18 * sin(i * twicePi18 / triangleAmount18))
            );
        }
    glEnd();




//Middle Door

glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.05f, 0.10f);
    glVertex2f(-0.05f, -0.14f);
    glVertex2f(0.05f, -0.14f);
    glVertex2f(0.05f, 0.10f);
    glEnd();


    GLfloat x19=0.0f; GLfloat y19=0.10f; GLfloat radius19 =.047f;
    int triangleAmount19 = 20;



    GLfloat twicePi19 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x19, y19);
        for(int i = 0; i <=triangleAmount19;i++) {
            glVertex2f(
                    x19 + (radius19 * cos(i *  twicePi19 / triangleAmount19)),
                y19 + (radius19 * sin(i * twicePi19 / triangleAmount19))
            );
        }
    glEnd();



//Right 1

glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.65f, 0.07f);
    glVertex2f(0.65f, -0.14f);
    glVertex2f(0.58f, -0.14f);
    glVertex2f(0.58f, 0.07f);
    glEnd();


    GLfloat x20=0.615f; GLfloat y20=0.07f; GLfloat radius20 =.035f;
    int triangleAmount20 = 20;



    GLfloat twicePi20 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x20, y20);
        for(int i = 0; i <=triangleAmount20;i++) {
            glVertex2f(
                    x20 + (radius20 * cos(i *  twicePi20 / triangleAmount20)),
                y20 + (radius20 * sin(i * twicePi20 / triangleAmount20))
            );
        }
    glEnd();



//Right 2
glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.53f, 0.07f);
    glVertex2f(0.53f, -0.14f);
    glVertex2f(0.46f, -0.14f);
    glVertex2f(0.46f, 0.07f);
    glEnd();


    GLfloat x21=0.495f; GLfloat y21=0.07f; GLfloat radius21 =.035f;
    int triangleAmount21 = 20;



    GLfloat twicePi21 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x21, y21);
        for(int i = 0; i <=triangleAmount21;i++) {
            glVertex2f(
                    x21 + (radius21 * cos(i *  twicePi21 / triangleAmount21)),
                y21 + (radius21 * sin(i * twicePi21 / triangleAmount21))
            );
        }
    glEnd();




//Right 3

glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.41f, 0.07f);
    glVertex2f(0.41f, -0.14f);
    glVertex2f(0.34f, -0.14f);
    glVertex2f(0.34f, 0.07f);
    glEnd();


GLfloat x22=0.375f; GLfloat y22=0.07f; GLfloat radius22 =.035f;
    int triangleAmount22 = 20;



    GLfloat twicePi22 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x22, y22);
        for(int i = 0; i <=triangleAmount22;i++) {
            glVertex2f(
                    x22 + (radius22 * cos(i *  twicePi22 / triangleAmount22)),
                y22 + (radius22 * sin(i * twicePi22 / triangleAmount22))
            );
        }
    glEnd();



//Right 4

glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.29f, 0.07f);
    glVertex2f(0.29f, -0.14f);
    glVertex2f(0.22f, -0.14f);
    glVertex2f(0.22f, 0.07f);
    glEnd();


    GLfloat x23=0.255f; GLfloat y23=0.07f; GLfloat radius23 =.035f;
    int triangleAmount23 = 20;



    GLfloat twicePi23 = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x23, y23);
        for(int i = 0; i <=triangleAmount23;i++) {
            glVertex2f(
                    x23 + (radius23 * cos(i *  twicePi23 / triangleAmount23)),
                y23 + (radius23 * sin(i * twicePi23 / triangleAmount23))
            );
        }
    glEnd();



//Right 5


glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.17f, 0.07f);
    glVertex2f(0.17f, -0.14f);
    glVertex2f(0.10f, -0.14f);
    glVertex2f(0.10f, 0.07f);
    glEnd();


 GLfloat x24=0.135f; GLfloat y24=0.07f; GLfloat radius24 =.035f;
    int triangleAmount24 = 20;


    GLfloat twicePi24 = 2.0f * PI;


    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
        glVertex2f(x24, y24);
        for(int i = 0; i <=triangleAmount24;i++) {
            glVertex2f(
                    x24 + (radius24 * cos(i *  twicePi24 / triangleAmount24)),
                y24 + (radius24 * sin(i * twicePi24 / triangleAmount24))
            );
        }
    glEnd();




//Bird

glPushMatrix();


glTranslatef(position_bird,0.0f, 0.0f);


glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);

glEnd();



glTranslatef(0.1f, 0.1f, 0.0f);


glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);


glEnd();



glLoadIdentity();
glTranslatef(position_bird,0.0f, 0.0f);


glTranslatef(0.11f, 0.05f, 0.0f);


glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);


glEnd();



glLoadIdentity();

glTranslatef(position_bird,0.0f, 0.0f);

glTranslatef(1.0f, 0.05f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);


glEnd();



glLoadIdentity();

glTranslatef(position_bird,0.0f, 0.0f);

glTranslatef(1.1f, 0.05f, 0.0f);

glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);

glEnd();

glPopMatrix();

glLoadIdentity();



//birds end





	glFlush();  // Render now
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






//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Working Principles

//There are 3 different moods in our project-

//1. Day mood--> Press D button in the keyboard to get the Day Mood.

//2. Rainy mood--> Press R button in the keyboard to get the Rainy Mood.

//3. Night mood--> Press N button in the keyboard to get the Night Mood.








//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



/* Main function: GLUT runs as a console application starting at main()  */



int main(int argc, char** argv) {

	glutInit(&argc, argv);                 // Initialize GLUT

	glutCreateWindow("OpenGL Setup");      // Create a window with the given title

	glutInitWindowSize(320, 320);          // Set the window's initial width & height

	glutDisplayFunc(day);                  // Register display callback handler for window re-paint

	glutTimerFunc(100, update1, 0);        // Plane

	glutTimerFunc(100, update2, 0);        // Sun

	glutTimerFunc(100, update3, 0);        // Cloud

	glutTimerFunc(100, update_rain, 0);    // Rain

	glutTimerFunc(100, update_bird, 0);    // Bird

	glutKeyboardFunc(handleKeypress1);     // Key Board

	glutMainLoop();                        // Enter the event-processing loop

	return 0;
}




//--------------------------------------------------------------------------------------- THANK YOU -------------------------------------------------------------------------------------------------
