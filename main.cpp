#include <iostream>
#include<cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>

using namespace std;
GLfloat speed = 0.1f;
GLfloat speedP1 = 0.0f;
float move_T = 0.0f; //train
float move_P1 = 0.0f; //planemove

void update(int value) {

    ///trainMove
     move_T -= speed;
    if(move_T < -400)
    {
        move_T = 200;
    }
    if(move_T >400)
    {
        move_T = - 400;
    }
    ///Plane1 move
      move_P1 += speedP1; ///plane
    if(move_P1 > 500)
    {
        move_P1 = -100;
    }
    if(move_P1 < -500)
    {
        move_P1 = 100;
    }
	glutPostRedisplay();
	glutTimerFunc(10, update, 0);
}


///railDesignStart
void border() ///122
{

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-4.0f, 13.0f);
	glVertex2f(0.0f, 9.0f);
	glVertex2f(45.0f, 9.0f);
	glVertex2f(45.0f, 13.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-8.0f, 20.0f);
	glVertex2f(0.0f, 15.0f);
	glVertex2f(45.0f, 15.0f);
	glVertex2f(45.0f, 20.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(47.0f, 9.0f);
	glVertex2f(80.0f, 9.0f);
	glVertex2f(80.0f, 13.0f);
	glVertex2f(47.0f, 13.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(47.0f, 9.0f);
	glVertex2f(80.0f, 9.0f);
	glVertex2f(80.0f, 13.0f);
	glVertex2f(47.0f, 13.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(47.0f, 15.0f);
	glVertex2f(80.0f, 15.0f);
	glVertex2f(80.0f, 20.0f);
	glVertex2f(47.0f, 20.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(82.0f, 15.0f);
	glVertex2f(130.0f, 15.0f);
	glVertex2f(135.0f, 20.0f);
	glVertex2f(82.0f, 20.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(82.0f, 9.0f);
	glVertex2f(125.0f, 9.0f);
	glVertex2f(129.0f, 13.0f);
	glVertex2f(82.0f, 13.0f);
	glEnd();
}

void wind() ///123
{
    ///first win
    glBegin(GL_POLYGON);
	glColor3d(0, 79, 255);
	glVertex2f(1.0f, 48.0f);
	glVertex2f(-8.0f, 24.0f);
	glVertex2f(15.0f, 24.0f);
	glVertex2f(15.0f, 48.0f);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3d(0, 255, 255);
	glVertex2f(19.0f, 48.0f);
	glVertex2f(35.0f, 48.0f);
	glVertex2f(35.0f, 24.0f);
	glVertex2f(19.0f, 24.0f);
	glEnd();
    ///1st win end

    ///2nd win
	glBegin(GL_POLYGON);
	glColor3d(0, 255, 255);
	glVertex2f(49.0f, 48.0f);
	glVertex2f(49.0f, 24.0f);
	glVertex2f(62.0f, 24.0f);
	glVertex2f(62.0f, 48.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3d(0, 255, 255);
	glVertex2f(64.0f, 48.0f);
	glVertex2f(64.0f, 24.0f);
	glVertex2f(78.0f, 24.0f);
	glVertex2f(78.0f, 48.0f);
	glEnd();
	///2nd win end

	///3rd win
	glBegin(GL_POLYGON);
	glColor3d(0, 255, 255);
	glVertex2f(84.0f, 48.0f);
	glVertex2f(84.0f, 24.0f);
	glVertex2f(100.0f, 24.0f);
	glVertex2f(100.0f, 48.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3d(0, 255, 255);
	glVertex2f(102.0f, 48.0f);
	glVertex2f(102.0f, 24.0f);
	glVertex2f(120.0f, 24.0f);
	glVertex2f(120.0f, 48.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3d(0, 255, 255);
	glVertex2f(122.0f, 48.0f);
	glVertex2f(122.0f, 24.0f);
	glVertex2f(138.0f, 30.0f);
	glVertex2f(130.0f, 48.0f);
	glEnd();
	///3rd win end
}
///railBody
void rail() ///121
{
    ///rail-1
    glBegin(GL_POLYGON);
	glColor3d(227, 227, 227);
	glVertex2f(0.0f, 7.0f);
	glVertex2f(45.0f, 7.0f);
	glVertex2f(45.0f, 50.0f);
	glVertex2f(0.0f, 50.0f);
	glVertex2f(-10.0f, 24.0f);
	glEnd();
	///rail-2
    glBegin(GL_POLYGON);
	glColor3d(227, 227, 227);
	glVertex2f(47.0f, 7.0f);
	glVertex2f(80.0f, 7.0f);
	glVertex2f(80.0f, 50.0f);
	glVertex2f(47.0f, 50.0f);
	glEnd();
	///rail-3
    glBegin(GL_POLYGON);
	glColor3d(227, 227, 227);
	glVertex2f(82.0f, 7.0f);
	glVertex2f(130.0f, 7.0f);
	glVertex2f(140.0f, 30.0f);
	glVertex2f(130.0f, 50.0f);
	glVertex2f(82.0f, 50.0f);
	glEnd();
}
///railPlatform
void base() ///124
{
    ///baseline
    glBegin(GL_POLYGON);
	glColor3f(0.99f, 0.79f, 0.30f);
	glVertex2f(-200.0f, 5.0f);
	glVertex2f(200.0f, 5.0f);
	glVertex2f(200.0f, 7.0f);
	glVertex2f(-200.0f, 7.0f);
	glEnd();
    ///base
    glBegin(GL_POLYGON);
	glColor3f(0.55f, 0.58f, 0.62f);
	glVertex2f(-200.0f, 5.0f);
	glVertex2f(200.0f, 5.0f);
	glVertex2f(200.0f, -10.0f);
	glVertex2f(-200.0f, -10.0f);
	glEnd();
	///poll-1
	glBegin(GL_POLYGON);
	glColor3f(0.62f, 0.69f, 0.75f);
	glVertex2f(-150.0f, -10.0f);
	glVertex2f(-135.0f, -10.0f);
	glVertex2f(-135.0f, -100.0f);
	glVertex2f(-150.0f, -100.0f);
	glEnd();

	///poll-2
	glBegin(GL_POLYGON);
	glColor3f(0.62f, 0.69f, 0.75f);
	glVertex2f(-5.0f, -10.0f);
	glVertex2f(10.0f, -10.0f);
	glVertex2f(10.0f, -100.0f);
	glVertex2f(-5.0f, -100.0f);
	glEnd();

	///poll-3
	glBegin(GL_POLYGON);
	glColor3f(0.62f, 0.69f, 0.75f);
	glVertex2f(150.0f, -10.0f);
	glVertex2f(135.0f, -10.0f);
	glVertex2f(135.0f, -100.0f);
	glVertex2f(150.0f, -100.0f);
	glEnd();
}
///railAnimation
void railann() ///210
{
     glPushMatrix();
    glTranslatef(move_T,0.0f, 0.0f);
    rail();
    wind();
    border();
    glPopMatrix();

}

///planeStructure

void planeSturc() ///111
{
    glBegin(GL_POLYGON); ///side back wing
	glColor3f(0.65f, 0.09f, 0.06f);
	glVertex2f(-175.0f, 195.0f); //X,Y
	glVertex2f(-165.0f, 195.0f);
	glVertex2f(-174.0f, 210.0f);
	glVertex2f(-178.0f, 210.0f);
    glEnd();

    glBegin(GL_POLYGON); ///body
	glColor3f(0.93f, 0.65f, 0.17f);
	glVertex2f(-190.0f, 200.0f); //X,Y
	glVertex2f(-160.0f, 200.0f);
	glVertex2f(-155.0f, 195.0f);
	glVertex2f(-153.0f, 195.0f);
	glVertex2f(-150.0f, 190.0f);
	glVertex2f(-190.0f, 190.0f);
	glEnd();

	 glBegin(GL_POLYGON); ///back wing
	glColor3f(0.95f, 0.10f, 0.0f);
	glVertex2f(-190.0f, 199.0f); //X,Y
	glVertex2f(-190.0f, 215.0f);
	glVertex2f(-185.0f, 199.0f);
    glEnd();

    glBegin(GL_POLYGON); ///side wing
	glColor3f(0.95f, 0.10f, 0.0f);
	glVertex2f(-175.0f, 195.0f); //X,Y
	glVertex2f(-165.0f, 195.0f);
	glVertex2f(-174.0f, 180.0f);
	glVertex2f(-178.0f, 180.0f);
    glEnd();

    glBegin(GL_POLYGON); ///glass
	glColor3f(0.0f, 0.0f, 0.31f);
	glVertex2f(-160.0f, 199.0f); //X,Y
	glVertex2f(-155.0f, 195.0f);
	glVertex2f(-165.0f, 195.0f);
	glVertex2f(-165.0f, 199.0f);
    glEnd();
}
///215
void plane1() ///plane
{
    glPushMatrix();
    glTranslatef(-60,10.0f,0.0f);
    glTranslatef(move_P1,10.0f,0.0f);
    planeSturc();
    glPopMatrix();
}
///mouse
void handleMouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON)
    {    speed += 1.0f;
    }
    if (button == GLUT_RIGHT_BUTTON)
    {
        speed -= 1.0f;
    }
    glutPostRedisplay();
}

void SpecialInput(int key, int x, int y)
{
    switch(key)
    {
    case GLUT_KEY_UP:
    //do something here
    speedP1 += 1.0f;
    break;
    case GLUT_KEY_DOWN:
      speedP1 -= 1.0f;
    break;
    }
    glutPostRedisplay();
}


    // draw_function
    void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    plane1();
	railann();
    base();
    glFlush();
    glutSwapBuffers();
    }
    void init()
    {
        glClearColor(0.0f, 0.0f, 0.0f,1.0f);
        glLoadIdentity();
        gluOrtho2D(-200,200,-300,260);
    }
    int main(int argc, char** argv)
    {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1500, 1000);
    glutCreateWindow("Train");
    glutDisplayFunc(drawScene);
    init();
    glutTimerFunc(100, update, 0);
    glutMouseFunc(handleMouse);

    glutSpecialFunc(SpecialInput);
    glutMainLoop();

    return 0;
    }
