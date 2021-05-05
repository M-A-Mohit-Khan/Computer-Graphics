#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.14159265358979323846

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    gluOrtho2D(0,100,-10,100);

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255); // Hook Box
    glVertex2f(0.0,0.0);
    glVertex2f(100.0,.0);
    glVertex2f(100.0,100.0);
    glVertex2f(0.0,100.0);
    glEnd();


glBegin(GL_LINES);

    glColor3ub(255, 255, 255); // Hook Box
    glVertex2f(15.0,10.0);
    glVertex2f(91.0,10.0);

    glEnd();

glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Hook Box
    glVertex2f(50.0,35.0);
    glVertex2f(50.0,21.0);
    glVertex2f(60.0,21.0);
     glVertex2f(60.0,31.0);
     glVertex2f(56.0,35.0);
    glEnd();


    //BOX

 glBegin(GL_QUADS);
    glColor3ub(0, 0, 0); // Hook Box
    glVertex2f(85.0,33.0);
    glVertex2f(85.0,21.0);
    glVertex2f(89.0,21.0);
    glVertex2f(89.0,33.0);
    glEnd();

    glBegin(GL_LINES);

    glColor3ub(255, 255, 255); // Hook Box
    glVertex2f(85.0,30.0);
    glVertex2f(89.0,30.0);
    glVertex2f(85.0,27.0);
    glVertex2f(89.0,27.0);
    glVertex2f(85.0,24.0);
    glVertex2f(89.0,24.0);

    glEnd();
//END BOX



glBegin(GL_QUADS);
    glColor3ub(0, 0, 0); // Hook Box
    glVertex2f(61.0,33.0);
    glVertex2f(61.0,21.0);
    glVertex2f(79.0,21.0);
    glVertex2f(79.0,33.0);
    glEnd();

    glBegin(GL_LINES);

    glColor3ub(255, 255, 255); // Hook Box
    glVertex2f(61.0,30.0);
    glVertex2f(79.0,30.0);
    glVertex2f(61.0,27.0);
    glVertex2f(79.0,27.0);
    glVertex2f(61.0,24.0);
    glVertex2f(79.0,24.0);


     // Hook Box
    glVertex2f(65.5,33.0);
    glVertex2f(65.5,21.0);
    glVertex2f(70.0,33.0);
    glVertex2f(70.0,21.0);
    glVertex2f(74.5,33.0);
    glVertex2f(74.5,21.0);

    glEnd();
//END BOX



glBegin(GL_QUADS);
    glColor3ub(0, 0, 0); // Hook Box
    glVertex2f(20.0,33.0);
    glVertex2f(20.0,21.0);
    glVertex2f(49.0,21.0);
    glVertex2f(49.0,33.0);
    glEnd();

glBegin(GL_LINES);

    glColor3ub(255, 255, 255); // Hook Box
    glVertex2f(20.0,30.0);
    glVertex2f(49.0,30.0);
    glVertex2f(20.0,27.0);
    glVertex2f(49.0,27.0);
    glVertex2f(20.0,24.0);
    glVertex2f(49.0,24.0);

    glVertex2f(24.7,33.0);
    glVertex2f(24.7,21.0);
    glVertex2f(29.4,33.0);
    glVertex2f(29.4,21.0);
    glVertex2f(34.1,33.0);
    glVertex2f(34.1,21.0);

    glVertex2f(38.8,33.0);
    glVertex2f(38.8,21.0);
    glVertex2f(43.5,33.0);
    glVertex2f(43.5,21.0);







glEnd();


glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0); // Hook Box
    glVertex2f(80.0,33.0);
    glVertex2f(80.0,21.0);
    glVertex2f(83.0,21.0);
     glVertex2f(83.0,35.0);
     glVertex2f(81.0,35.0);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(0, 0, 0); // Hook Box
    glVertex2f(20.0,0.0);
    glVertex2f(90.0,0.0);
    glVertex2f(92.0,20.0);
    glVertex2f(12.0,20.0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0); // Hook Box
    glVertex2f(10.2,25.0);
    glVertex2f(12.0,20.0);
    glVertex2f(33.0,20.0);
    glVertex2f(30.0,25.0);
    glEnd();




glBegin(GL_LINES);

    glColor3ub(255, 255, 255); // Hook Box
    glVertex2f(0.0,25.0);
    glVertex2f(29.4,25.0);

glVertex2f(0.0,25.5);
    glVertex2f(29.4,25.5);




    glVertex2f(33.0,21.0);
    glVertex2f(29.4,25.0);
glVertex2f(33.3,21.0);
    glVertex2f(29.8,25.0);






glEnd();

glBegin(GL_LINES);

    glColor3ub(255, 255, 255); // Hook Box
    glVertex2f(15.0,10.0);
    glVertex2f(91.0,10.0);

    glVertex2f(15.0,9.7);
    glVertex2f(91.0,9.7);

    glEnd();





    glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
