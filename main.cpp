#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <iostream>
#include <windows.h>


void sky(){
    glClear (GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(0.529, 0.808, 0.922);
    glVertex2f(-1.0,1.0);
    glVertex2f(1.0,1.0);

    glColor3f(0.529, 0.808, 0.980);
    glVertex2f(1.0, -0.05);
    glVertex2f(-1.0, -0.05);
    glEnd();
}

void field_1(){
    //field 1
    glBegin(GL_QUADS);
    glColor3f(0.196, 0.804, 0.196);
    glVertex2f(1.0, -0.05);

    glColor3f(0.000, 1.000, 0.000);
    glVertex2f(-1.0, -0.05);

    glColor3f(0.486, 0.988, 0.000);
    glVertex2f(-1.0, 0.135);

    glColor3f(0.498, 1.000, 0.000);
    glVertex2f(1.0, 0.135);

    glEnd();
}


void road(){
    //Main road lane 1
    glBegin(GL_QUADS);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(-1.0, -0.05);
    glVertex2f(-1.0, -0.57);
    glVertex2f(1.0, -0.57);
    glVertex2f(1.0, -0.05);
    glEnd();
}

void field_2(){

    //field 2
    glBegin(GL_QUADS);
    glColor3f(0.196, 0.804, 0.196);
    glVertex2f(1.0, -0.57);

    glColor3f(0.000, 1.000, 0.000);
    glVertex2f(-1.0, -0.57);

    glColor3f(0.486, 0.988, 0.000);
    glVertex2f(-1.0, -0.73);

    glColor3f(0.498, 1.000, 0.000);
    glVertex2f(1.0, -0.73);
    glEnd();
}

void river(){
    glBegin(GL_QUADS);
    glColor3f(0.000, 1.000, 1.000);
    glVertex2f(1.0, -0.73);

    glColor3f(0.686, 0.933, 0.933);
    glVertex2f(-1.0, -0.73);

    glColor3f(0.498, 1.000, 0.831);
    glVertex2f(-1.0, -1.0);

    glColor3f(0.282, 0.820, 0.800);
    glVertex2f(1.0, -1.0);

    glEnd();
}

void house_1(){
    //House 1
    glBegin(GL_QUADS);
    glColor3f(0.400, 0.804, 0.667);
    glVertex2f(0.45, -0.03);
    glVertex2f(0.72, -0.03);
    glVertex2f(0.72, 0.17);
    glVertex2f(0.45, 0.17);

    //Door of House 1
    glBegin(GL_QUADS);
    glColor3f(1.000, 0.894, 0.882);
    glVertex2f(0.56, -0.03);
    glVertex2f(0.60, -0.03);
    glVertex2f(0.60, 0.12);
    glVertex2f(0.56, 0.12);

    //Window of House 1
    glBegin(GL_QUADS);
    glColor3f(1.000, 1.000, 1.000);
    glVertex2f(0.48, 0.03);
    glVertex2f(0.52, 0.03);
    glVertex2f(0.52, 0.10);
    glVertex2f(0.48, 0.10);

    glBegin(GL_QUADS);
    glColor3f(1.000, 1.000, 1.000);
    glVertex2f(0.64, 0.03);
    glVertex2f(0.68, 0.03);
    glVertex2f(0.68, 0.10);
    glVertex2f(0.64, 0.10);

    //Basement of house 1
    glBegin(GL_QUADS);
    glColor3f(0.647, 0.165, 0.165);
    glVertex2f(0.44, -0.05);
    glVertex2f(0.73, -0.05);
    glVertex2f(0.73, -0.03);
    glVertex2f(0.44, -0.03);

    //Roof of house 1
    glBegin(GL_QUADS);
    glColor3f(1.000, 0.855, 0.725);
    glVertex2f(0.44, 0.17);
    glVertex2f(0.73, 0.17);
    glVertex2f(0.73, 0.19);
    glVertex2f(0.44, 0.19);
    glEnd();

    //Roof of house 1
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.937, 0.835);
    glVertex2f(0.44, 0.19);
    glVertex2f(0.73, 0.19);
    glVertex2f(0.59, 0.27);
    glEnd();
}

void house_2(){
    //House 2
    glBegin(GL_QUADS);
    glColor3f(0.804, 0.361, 0.361);
    glVertex2f(0.78, -0.03);
    glVertex2f(0.95, -0.03);
    glVertex2f(0.95, 0.17);
    glVertex2f(0.78, 0.17);

    //Door of House 2
    glBegin(GL_QUADS);
    glColor3f(1.000, 1.000, 1.000);
    glVertex2f(0.87, -0.03);
    glVertex2f(0.92, -0.03);
    glVertex2f(0.92, 0.12);
    glVertex2f(0.87, 0.12);

    //Window of House 2
    glBegin(GL_QUADS);
    glColor3f(1.000, 1.000, 1.000);
    glVertex2f(0.80, 0.03);
    glVertex2f(0.84, 0.03);
    glVertex2f(0.84, 0.10);
    glVertex2f(0.80, 0.10);

    //Basement of house 2
    glBegin(GL_QUADS);
    glColor3f(0.647, 0.165, 0.165);
    glVertex2f(0.77, -0.05);
    glVertex2f(0.96, -0.05);
    glVertex2f(0.96, -0.03);
    glVertex2f(0.77, -0.03);

    //Roof of house 2
    glBegin(GL_QUADS);
    glColor3f(1.000, 0.855, 0.725);
    glVertex2f(0.77, 0.17);
    glVertex2f(0.96, 0.17);
    glVertex2f(0.96, 0.19);
    glVertex2f(0.77, 0.19);
    glEnd();

    //Roof of house 2
    glBegin(GL_POLYGON);
    glColor3f(1.000, 0.937, 0.835);
    glVertex2f(0.77, 0.19);
    glVertex2f(0.96, 0.19);
    glVertex2f(0.86, 0.25);
    glEnd();
}


void myInit (void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(1.0, 1.0, 1.0, 1.0);
}


void myDisplay(void){
    glClear(GL_COLOR_BUFFER_BIT);
    sky();
    field_1();
    road();
    field_2();
    river();
    house_1();
    house_2();

    glFlush();
}


void Idle()
{
    glutPostRedisplay();
}


int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (1366, 768);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Project");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutIdleFunc(Idle);
    glutMainLoop();

}
