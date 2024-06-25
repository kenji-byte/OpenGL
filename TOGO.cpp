//TOGO
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(1);

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.41f,0.29f);
    glVertex2f(0,0);
    glVertex2f(600,0);
    glVertex2f(600,80);
    glVertex2f(0,80);

    glEnd();


    glBegin(GL_QUADS);
    glColor3f(1.0f,0.80f,0.0f);
    glVertex2f(0,80);
    glVertex2f(600,80);
    glVertex2f(600,80+80);
    glVertex2f(0,80+80);

    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f,0.41f,0.29f);
    glVertex2f(0,160);
    glVertex2f(600,160);
    glVertex2f(600,240);
    glVertex2f(0,240);

    glEnd();


    glBegin(GL_QUADS);
    glColor3f(1.0f,0.80f,0.0f);
    glVertex2f(0,240);
    glVertex2f(600,240);
    glVertex2f(600,320);
    glVertex2f(0,320);

    glEnd();


        glBegin(GL_QUADS);
    glColor3f(0.0f,0.41f,0.29f);
    glVertex2f(0,320);
    glVertex2f(600,320);
    glVertex2f(600,400);
    glVertex2f(0,400);

    glEnd();

        glBegin(GL_QUADS);
    glColor3f(0.82f,0.062f,0.203f);
    glVertex2f(0,160);
    glVertex2f(240,160);
    glVertex2f(240,400);
    glVertex2f(0,400);

    glEnd();


//Star
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(80,200);
    glVertex2f(120,240);
    glVertex2f(160,200);
    glVertex2f(140,260);
    glVertex2f(200,320);
    glVertex2f(140,340);
    glVertex2f(120,360);
    glVertex2f(100,340);
    glVertex2f(40,320);
    glVertex2f(60,260);


    glEnd();
















    glFlush();

}
void myInit (void){
    glClearColor(0.5, 0.5, 0.5, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    //glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 560.0, 0.0, 400.0);
}
int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (560, 400);
    glutInitWindowPosition (80, 30);
    glutCreateWindow ("my first attempt");
    glutDisplayFunc(display);
    myInit ();
    glutMainLoop();
}

