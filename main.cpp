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


void roadStrips()
{
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.95, -0.30);
    glVertex2f(-0.95, -0.32);
    glVertex2f(-0.65, -0.32);
    glVertex2f(-0.65, -0.30);
    glEnd();
}

void road(){
    //Main road lane 1
    glBegin(GL_QUADS);
    glColor3f(0.412, 0.412, 0.412);
    glVertex2f(-1.0, -0.12);
    glVertex2f(-1.0, -0.50);
    glVertex2f(1.0, -0.50);
    glVertex2f(1.0, -0.12);
    glEnd();
    //Main Road Strips 1
    roadStrips();

    //Main Road Strips 2
    glPushMatrix();
    glTranslatef(0.40,0,0);
    roadStrips();
    glTranslatef(0.40,0,0);
    roadStrips();
    glTranslatef(0.40,0,0);
    roadStrips();
    glTranslatef(0.40,0,0);
    roadStrips();
    glPopMatrix();
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


void mountain()
{
    glColorMaterial ( GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE ) ;
    glEnable ( GL_COLOR_MATERIAL ) ;
    glBegin(GL_TRIANGLES);
     glColor3f(0.0, 0.5, 0.0);
     glVertex2f(-1.0f, -1.0f);
     glColor3f(1.0, 1.0, 1.0);
     glVertex2f(0.0f, 1.0f);
     glColor3f(0.0, 0.5, 0.0);
     glVertex2f(1.0f, -1.0f);
    glEnd();
}
void mountains()
{
    glPushMatrix();
    glLoadIdentity();
    glScalef(0.3f, 0.3f, 0.0f);
    glTranslatef(-2.6f, 1.45f,0.0f);
    mountain();
    glTranslatef(0.8f, 0.0f,0.0f);
    mountain();
    glTranslatef(3.5f, 0.0f,0.0f);
    mountain();
    glPopMatrix();
}


void car_1(){
    glColor3d(0.000, 0.545, 0.545);
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.85, -0.20);
        glVertex2f(-0.55, -0.20);
        glVertex2f(-0.55, -0.13);
        glVertex2f(-0.60, -0.13);
        glVertex2f(-0.65, -0.03);
        glVertex2f(-0.75, -0.03);
        glVertex2f(-0.80, -0.03);
        glVertex2f(-0.85, -0.13);
        glVertex2f(-0.85, -0.20);
    glEnd();
    glPopMatrix();

    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.61, -0.13);
        glVertex2f(-0.66, -0.04);
        glVertex2f(-0.79, -0.04);
        glVertex2f(-0.84, -0.13);
    glEnd();
    glPopMatrix();

    glColor3f(0.000, 0.545, 0.545);
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.73, -0.13);
        glVertex2f(-0.72, -0.13);
        glVertex2f(-0.72, -0.04);
        glVertex2f(-0.73, -0.04);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
        glTranslatef(-0.80,-0.21,0);
        glScalef(0.6,1,1);
        glColor3f(0.000, 0.000, 0.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
        glTranslatef(-0.80,-0.21,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.01;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
        glTranslatef(-0.62,-0.21,0);
        glScalef(0.6,1,1);
        glColor3f(0.000, 0.000, 0.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
        glTranslatef(-0.62,-0.21,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.01;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();
}

void car_2(){
    glColor3d(0.118, 0.565, 1.000);
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(0.55, -0.25);
        glVertex2f(0.50, -0.25);
        glVertex2f(0.50, -0.40);
        glVertex2f(0.85, -0.40);
        glVertex2f(0.85, -0.10);
        glVertex2f(0.65, -0.10);
        glVertex2f(0.55, -0.25);
    glEnd();
    glPopMatrix();

    glColor3d(0.878, 1.000, 1.00);
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(0.57, -0.25);
        glVertex2f(0.84, -0.25);
        glVertex2f(0.84, -0.12);
        glVertex2f(0.65, -0.12);
    glEnd();
    glPopMatrix();

    glColor3d(0.118, 0.565, 1.000);
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(0.71, -0.25);
        glVertex2f(0.72, -0.25);
        glVertex2f(0.72, -0.12);
        glVertex2f(0.71, -0.12);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
        glTranslatef(0.57,-0.40,0);
        glScalef(0.6,1,1);
        glColor3f(0.000, 0.000, 0.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.05;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
        glTranslatef(0.57,-0.40,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.01;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
        glTranslatef(0.78,-0.40,0);
        glScalef(0.6,1,1);
        glColor3f(0.000, 0.000, 0.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.05;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
        glTranslatef(0.78,-0.40,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.01;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
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
    mountains();
    car_1();
    car_2();

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
