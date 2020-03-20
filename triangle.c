#include<GL/glut.h>
#include<GL/gl.h>

void display() {
   glColor3f(0.0, 1.0, 0.0);
   glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_TRIANGLES);              
      glColor3f(1.0, 1.0, 0.0); 
      glVertex2f(0.0, 0.0);   
      glVertex2f( 0.0, -0.5);
      glVertex2f( 0.5,  -0.5);
      glEnd();
      glFlush();
}

void myMouse(int button, int state, int x, int y)

{

if (button == GLUT_LEFT_BUTTON)
{
 glBegin(GL_TRIANGLES);              
      glColor3f(0.0, 1.0, 0.0); 
      glVertex2f(0.0, 0.0);   
      glVertex2f( 0.0, -0.5);
      glVertex2f( 0.5,  -0.5);
      glEnd();
      glutSwapBuffers();
      glFlush();
}

}
int main(int argc,char** argv)
{
 glutInit(&argc, argv);                 
   glutCreateWindow("Triangle"); 
   glutDisplayFunc(display);
   glutMouseFunc(myMouse);
   glutMainLoop();
return EXIT_SUCCESS;           
}