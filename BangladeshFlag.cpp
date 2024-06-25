#include <windows.h> 
#include <GL/glut.h> 
#include <math.h>

const float PI = 3.14159265358979323846;

void drawFilledCircle(float radius, int numSegments) {
    glBegin(GL_POLYGON); // Begin drawing the filled circle
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f); // Center of the circle
    for (int i = 0; i <= numSegments; i++) {
        float theta = 2.0f * PI * float(i) / float(numSegments); // Calculate the angle of the current segment
        float x = radius * cosf(theta); // Calculate the x-coordinate of the point on the circle
        float y = radius * sinf(theta); // Calculate the y-coordinate of the point on the circle
        glVertex2f(x, y); // Specify the vertex of the circle at this angle
    }
    glEnd(); // End drawing the filled circle
}

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glLoadIdentity();


    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(5.0,5.0);
    glVertex2f(-5.0,5.0);
    glVertex2f(-5.0,-5.0);
    glVertex2f(5.0,-5.0);
    glEnd();
    drawFilledCircle(2.5,100);




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
