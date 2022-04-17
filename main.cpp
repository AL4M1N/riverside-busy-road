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

void tower(){
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.28, -0.03);
    glVertex2f(-0.20, -0.03);
    glVertex2f(-0.20, 0.05);
    glVertex2f(-0.28, 0.05);
    glEnd();

}

void twin_tower(){
    //Tower 1 of twin tower
    glBegin(GL_QUADS);
    glColor3f(0.647, 0.165, 0.165);
    glVertex2f(-0.30, -0.05);
    glVertex2f(-0.08, -0.05);
    glVertex2f(-0.08, 0.60);
    glVertex2f(-0.30, 0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.502, 0.000, 0.000);
    glVertex2f(-0.31, 0.60);
    glVertex2f(-0.07, 0.60);
    glVertex2f(-0.07, 0.62);
    glVertex2f(-0.31, 0.62);
    glEnd();
    //Roof top of tower 1


    //1st floor window of tower 1
    tower();

    glPushMatrix();
    glTranslatef(0.0,0.10,0);
    tower();
    glTranslatef(0.0,0.10,0);
    tower();
    glTranslatef(0.0,0.10,0);
    tower();
    glTranslatef(0.0,0.10,0);
    tower();
    glTranslatef(0.0,0.10,0);
    tower();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.10,0.0,0);
    tower();
    glTranslatef(0.0,0.1,0);
    tower();
    glTranslatef(0.0,0.10,0);
    tower();
    glTranslatef(0.0,0.10,0);
    tower();
    glTranslatef(0.0,0.10,0);
    tower();
    glTranslatef(0.0,0.10,0);
    tower();
    glPopMatrix();


    //Tower 2 of twin tower
    glBegin(GL_QUADS);
    glColor3f(0.647, 0.165, 0.165);
    glVertex2f(0.08, -0.05);
    glVertex2f(0.30, -0.05);
    glVertex2f(0.30, 0.60);
    glVertex2f(0.08, 0.60);
    glEnd();

    //Roof top of tower 2
    glBegin(GL_QUADS);
    glColor3f(0.502, 0.000, 0.000);
    glVertex2f(0.31, 0.60);
    glVertex2f(0.07, 0.60);
    glVertex2f(0.07, 0.62);
    glVertex2f(0.31, 0.62);
    glEnd();


    glPushMatrix();
    glTranslatef(0.38,0.0,0);
    tower();
    glTranslatef(0.0,0.1,0);
    tower();
    glTranslatef(0.0,0.1,0);
    tower();
    glTranslatef(0.0,0.1,0);
    tower();
    glTranslatef(0.0,0.1,0);
    tower();
    glTranslatef(0.0,0.1,0);
    tower();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.48,0.0,0);
    tower();
    glTranslatef(0.0,0.1,0);
    tower();
    glTranslatef(0.0,0.1,0);
    tower();
    glTranslatef(0.0,0.1,0);
    tower();
    glTranslatef(0.0,0.1,0);
    tower();
    glTranslatef(0.0,0.1,0);
    tower();
    glPopMatrix();

    //Joining of twin tower
    glBegin(GL_QUADS);
    glColor3f(0.647, 0.165, 0.165);
    glVertex2f(-0.08, 0.15);
    glVertex2f(0.08, 0.15);
    glVertex2f(0.08, 0.27);
    glVertex2f(-0.08, 0.27);

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-0.08, 0.17);
    glVertex2f(0.08, 0.17);
    glVertex2f(0.08, 0.25);
    glVertex2f(-0.08, 0.25);

    glEnd();
}

void road_light()
{
    //Road lights
    glBegin(GL_POLYGON);
     glColor3f(0.0f,0.0f,0.0f);
     glVertex2f(-0.8f, -1.0f);
     glVertex2f(-0.8f, 0.5f);
     glVertex2f(-0.87f, 0.5f);
     glVertex2f(-0.87f, -1.0f);
    glEnd();

    //Road lights
    glBegin(GL_POLYGON);
     glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(-0.8f, 0.5f);
     glVertex2f(-0.6f, 0.65f);
     glVertex2f(-0.6f, 0.7f);
     glVertex2f(-0.87f, 0.5f);
    glEnd();

    //Road Lights
    glBegin(GL_POLYGON);
     glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(-0.6f, 0.7f);
     glVertex2f(-0.3f, 0.7f);
     glVertex2f(-0.3f, 0.65);
     glVertex2f(-0.6f, 0.65f);
    glEnd();

    //Lights
    glBegin(GL_POLYGON);
    glColor3f(0.90f, 0.90f, 0.0f);

     glVertex2f(-0.5f, 0.65f);
     glVertex2f(-0.3f, 0.65f);
     glVertex2f(-0.3f, 0.55f);
     glVertex2f(-0.5f, 0.55f);
    glEnd();

    //base
    glBegin(GL_POLYGON);
     glColor3f(0.90f, 0.90f, 0.80f);
     glVertex2f(-0.9f, -1.0f);
     glVertex2f(-0.9f, -0.9f);
     glVertex2f(-0.7f, -0.9f);
     glVertex2f(-0.7f, -1.0f);
    glEnd();
}

void road_lamp_one_side()
{
    //Lamp 1
    glPushMatrix();
    glLoadIdentity();
    glScalef(0.2f, 0.2f, 0.0f);
    glTranslatef(-3.0f, 0.52f, 0.0f);
    road_light();

    //Lam Stand 2
    glTranslatef(3.1f, 0.f, 0.0f);
    road_light();

    //Lam Stand 3
    glTranslatef(3.1f, 0.f, 0.0f);
    road_light();

    glPopMatrix();
}

void road_lamp_another_side(){

    //Lam Stand - 1
    glPushMatrix();
    glLoadIdentity();
    glScalef(0.2f, 0.2f, 0.0f);
    glTranslatef(-1.45f, -1.5f, 0.0f);
    road_light();

    //Lam Stand - 2
    glTranslatef(3.1f, 0.f, 0.0f);
    road_light();

    //Lam Stand - 3
    glTranslatef(3.1f, 0.f, 0.0f);
    road_light();

    glPopMatrix();
}

void building_side_road(){
    //Building side road
    glBegin(GL_QUADS);
    glColor3f(0.753, 0.753, 0.753);
    glVertex2f(-1.0, -0.05);
    glVertex2f(-1.0, -0.12);
    glVertex2f(1.0, -0.12);
    glVertex2f(1.0, -0.05);

    glBegin(GL_QUADS);
    glColor3f(0.502, 0.502, 0.502);
    glVertex2f(-1.0, -0.10);
    glVertex2f(-1.0, -0.12);
    glVertex2f(1.0, -0.12);
    glVertex2f(1.0, -0.10);
    glEnd();
}

void park_side_road(){
    //River side road
    glBegin(GL_QUADS);
    glColor3f(0.753, 0.753, 0.753);
    glVertex2f(-1.0, -0.50);
    glVertex2f(-1.0, -0.57);
    glVertex2f(1.0, -0.57);
    glVertex2f(1.0, -0.50);

    glBegin(GL_QUADS);
    glColor3f(0.502, 0.502, 0.502);
    glVertex2f(-1.0, -0.55);
    glVertex2f(-1.0, -0.57);
    glVertex2f(1.0, -0.57);
    glVertex2f(1.0, -0.55);
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
    twin_tower();
    building_side_road();
    road_lamp_one_side();
    road_lamp_another_side();
    park_side_road();

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
