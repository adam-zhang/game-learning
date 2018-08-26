#include <GL/glut.h>

void initializeGL()
{
	glClearColor(0.0f, 0.0f, 0.0, 0.0);
}
void drawPoints()
{
	glBegin(GL_POINTS);
	{
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(0.1, -0.6);
		glVertex2f(0.7, -0.6);
		glVertex2f(0.4, -0.1);
	}
	glEnd();
}

void update()
{
	glClear(GL_COLOR_BUFFER_BIT);
	drawPoints();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Game");
	glutInitWindowSize(800,600);
	glutInitWindowPosition(100,100);
	glutDisplayFunc(update);
	initializeGL();
	glutMainLoop();
	return 0;
}
