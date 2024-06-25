//South Africa
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
    glColor3f(0.0f,0.467f,0.286f);
    glVertex2f(0,0);
    glVertex2f(450,0);
    glVertex2f(480,300);
    glVertex2f(0,300);








    glEnd();




     glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(54,0);
    glVertex2f(450,0);
    glVertex2f(450,120);
    glVertex2f(240,120);
    glEnd();


  glBegin(GL_QUADS);
  glColor3f(0.0f,0.078f,0.53f);
  glVertex2f(90,0);
  glVertex2f(450,0);
  glVertex2f(450,100);
  glVertex2f(240,100);
  glEnd();



  glBegin(GL_QUADS);
  glColor3f(1.0f,1.0f,1.0f);
  glVertex2f(54,300);
  glVertex2f(240,180);
  glVertex2f(450,180);
  glVertex2f(450,300);
  glEnd();

    glBegin(GL_QUADS);
  glColor3f(0.87f,0.23f,0.129f);
  glVertex2f(90,300);
  glVertex2f(240,200);
  glVertex2f(450,200);
  glVertex2f(450,300);
  glEnd();


    glBegin(GL_TRIANGLES);
  glColor3f(1.0f,0.72f,0.109f);
  glVertex2f(0,36);
  glVertex2f(171,150);
  glVertex2f(0,264);

  glEnd();

      glBegin(GL_TRIANGLES);
  glColor3f(0.0f,0.0f,0.0f);
  glVertex2f(0,60);
  glVertex2f(135,150);
  glVertex2f(0,240);

  glEnd();









    glFlush();

}
void myInit (void){
    glClearColor(0.5, 0.5, 0.5, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    //glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 450.0, 0.0, 300.0);
}
int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (450, 300);
    glutInitWindowPosition (80, 30);
    glutCreateWindow ("my first attempt");
    glutDisplayFunc(display);
    myInit ();
    glutMainLoop();
}
