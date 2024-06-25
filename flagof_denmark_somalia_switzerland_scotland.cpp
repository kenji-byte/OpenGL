#include <windows.h>
#include <GL/glut.h>
#include <math.h>


void display() {
    glClearColor(1.0f, 1.0f, 0.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glLoadIdentity();


    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(10.0,0.0);
    glVertex2f(-10.0,0.0);
    glVertex2f(0.0,10.0);
    glVertex2f(0.0,-10.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f,0.52f,0.84f);
    glVertex2f(-2.0,1.0);
    glVertex2f(-9.0,1.0);
    glVertex2f(-9.0,8.0);
    glVertex2f(-2.0,8.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-5.0, 5.5);
    //glVertex2f(-6.5, 3.75);
    //glVertex2f(-4.75, 5.25);
    glVertex2f(-6.0, 5.5);
    glVertex2f(-6.5, 4.5);
    glVertex2f(-5.5, 3.75);
    glVertex2f(-4.5, 4.5);

    //glVertex2f(-6.5, 3.75);
    //glVertex2f(-5.5, 6.25);
    //glVertex2f(-5.0, 3.75);
    glEnd();

    glBegin(GL_TRIANGLES);//top
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-6.0,5.5);
    glVertex2f(-5.0,5.5);
    glVertex2f(-5.5,7.0);

    glEnd();

    glBegin(GL_TRIANGLES);//top left
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-6.0,5.5);
    glVertex2f(-7.5,5.5);
    glVertex2f(-5.75,3.75);
    glEnd();


    glBegin(GL_TRIANGLES);//bottom right
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-4.75,4.5);
    glVertex2f(-5.5,3.85);
    glVertex2f(-4.5,2.80);
    glEnd();

    glBegin(GL_TRIANGLES);//bottom left
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-6.25,4.5);
    glVertex2f(-6.5,2.80);
    glVertex2f(-5.5,3.85);
    glEnd();

    glBegin(GL_TRIANGLES);//top right
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-5.0,5.5);
    glVertex2f(-4.5,4.5);
    glVertex2f(-3.5,5.5);

    glEnd();

    glBegin(GL_QUADS);//2nd flag
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(2.0,1.0);
    glVertex2f(9.0,1.0);
    glVertex2f(9.0,8.0);
    glVertex2f(2.0,8.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.22f,0.84f);
    glVertex2f(3.0,1.0);
    glVertex2f(5.5,3.5);
    glVertex2f(8.0,1.0);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.22f,0.84f);
    glVertex2f(2.0,2.0);
    glVertex2f(4.5,4.5);
    glVertex2f(2.0,7.0);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.22f,0.84f);
    glVertex2f(9.0,2.0);
    glVertex2f(6.5,4.5);
    glVertex2f(9.0,7.0);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.22f,0.84f);
    glVertex2f(3.0,8.0);
    glVertex2f(5.5,5.5);
    glVertex2f(8.0,8.0);

    glEnd();


    glBegin(GL_QUADS);//3rd flag
    glColor3f(0.75f,0.0f,0.0f);
    glVertex2f(-2.0,-1.0);
    glVertex2f(-9.0,-1.0);
    glVertex2f(-9.0,-8.0);
    glVertex2f(-2.0,-8.0);
    glEnd();

     glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-6.5,-1.0);
    glVertex2f(-7.0,-1.0);
    glVertex2f(-6.5,-8.0);
    glVertex2f(-7.0,-8.0);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-9,-4.0);
    glVertex2f(-9,-4.75);
    glVertex2f(-2,-4.0);
    glVertex2f(-2,-4.75);
    glEnd();

    glBegin(GL_QUADS);//4th flag
    glColor3f(1.0f,0.0f,0.0f);
    glVertex2f(2.0,-1.0);
    glVertex2f(9.0,-1.0);
    glVertex2f(9.0,-8.0);
    glVertex2f(2.0,-8.0);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(7,-4.0);
    glVertex2f(7,-5.0);
    glVertex2f(4,-4.0);
    glVertex2f(4,-5.0);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(5.0,-3.0);
    glVertex2f(6.0,-3.0);
    glVertex2f(5.0,-6.0);
    glVertex2f(6.0,-6.0);
    glEnd();



     glFlush(); // Render now
}
void reshape(int w , int h)
{

    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10,10,-10,10);
    glMatrixMode(GL_MODELVIEW);

}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(640, 480); // Set the window's initial width & height
    glutInitWindowPosition(450, 250);  // Set the window's initial position according to the monitor
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutReshapeFunc(reshape); //Reshape  the specific position for drawing like graph
    glutMainLoop(); // Enter the event-processing loop

    return 0;
}
