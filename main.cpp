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

void tree1()
{
    glBegin(GL_POLYGON);
    glColor3f(0.824, 0.412, 0.118);
    glVertex2f(-0.84, -0.65);
    glVertex2f(-0.81, -0.65);
    glVertex2f(-0.82, -0.45);
    glVertex2f(-0.83, -0.45);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.5, 0.0);
    glVertex2f(-0.88, -0.50);
    glColor3f(0.0, 0.5, 0.0);
    glVertex2f(-0.77, -0.50);
    glColor3f(0.196, 0.804, 0.196);
    glVertex2f(-0.825, -0.30);
    glEnd();
}

void circle_tree()
{
    glBegin(GL_POLYGON);
    glColor3f(0.824, 0.412, 0.118);
    glVertex2f(-0.59, -0.65);
    glVertex2f(-0.56, -0.65);
    glVertex2f(-0.57, -0.45);
    glVertex2f(-0.58, -0.45);
    glEnd();

    glPushMatrix();
        glTranslatef(-0.595,-0.45,0);
        glScalef(0.6,1,1);
        glColor3f(0.000, 1.000, 0.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.065;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.555,-0.45,0);
        glScalef(0.6,1,1);
        glColor3f(0.000, 1.000, 0.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.065;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.575,-0.385,0);
        glScalef(0.6,1,1);
        glColor3f(0.000, 1.000, 0.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.065;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();
}

void flower_tree()
{
    glPushMatrix();
        glTranslatef(-0.20, -0.625,0);
        glScalef(0.6,1,1);
        glColor3f(0.824, 0.412, 0.118);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.030;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.22, -0.625,0);
        glScalef(0.6,1,1);
        glColor3f(0.824, 0.412, 0.118);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.030;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.24, -0.595,0);
        glScalef(0.6,1,1);
        glColor3f(0.133, 0.545, 0.133);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0425;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.18, -0.595,0);
        glScalef(0.6,1,1);
        glColor3f(0.133, 0.545, 0.133);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0425;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.210, -0.570,0);
        glScalef(0.6,1,1);
        glColor3f(0.133, 0.545, 0.133);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.0435;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();
}
void park_tree()
{
    //Tree1
    tree1();
    //tree2
    circle_tree();

    //Park Tree 3
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(0.45f, 0.0f, 0.0f);
    tree1();

    //Flower Tree 1
    glLoadIdentity();
    flower_tree();

    //Flower Tree 2

    glTranslatef(0.42f, 0.0f, 0.0f);
    flower_tree();

     //tree 4
     glLoadIdentity();
     glTranslatef(1.2f, 0.0f, 0.0f);
     tree1();

    //Tree 5
    glLoadIdentity();
    glTranslatef(1.16f, 0.0f, 0.0f);
    circle_tree();

    //Tree 6
    glLoadIdentity();
    glTranslatef(1.6f, 0.0f, 0.0f);
    tree1();
    glLoadIdentity();
    glPopMatrix();
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
    park_tree();

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

