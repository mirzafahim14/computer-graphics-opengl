#include <windows.h> // For Windows-specific functions
#include <GL/glut.h> // GLUT, includes glu.h and gl.h

void init() {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-40.0, 40.0, -40.0, 40.0); // 4 quadrant coordinate system
}

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    // ---------------- X and Y axis ----------------
    glLineWidth(2);
    glColor3ub(0, 0, 0);

    glBegin(GL_LINES);
    glVertex2i(-40, 0);
    glVertex2i(40, 0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(0, -40);
    glVertex2i(0, 40);
    glEnd();

    // ================= MOROCCO (Quadrant 1) =================
    glColor3ub(194, 39, 47);

    glBegin(GL_QUADS);
    glVertex2i(5, 10);
    glVertex2i(35, 10);
    glVertex2i(35, 40);
    glVertex2i(5, 40);
    glEnd();

    glLineWidth(3);
    glColor3ub(0, 98, 52);

    glBegin(GL_LINE_LOOP);
    glVertex2i(20, 28);
    glVertex2i(26, 14);
    glVertex2i(11, 22);
    glVertex2i(29, 22);
    glVertex2i(14, 14);
    glEnd();

    glLineWidth(1);
    glColor3ub(0, 0, 0);

    glBegin(GL_LINE_LOOP);
    glVertex2i(5, 10);
    glVertex2i(35, 10);
    glVertex2i(35, 40);
    glVertex2i(5, 40);
    glEnd();

    // ================= YUGOSLAVIA (Quadrant 2) =================
    // Blue stripe
    glColor3ub(1, 56, 147);

    glBegin(GL_QUADS);
    glVertex2i(-35, 30);
    glVertex2i(-5, 30);
    glVertex2i(-5, 40);
    glVertex2i(-35, 40);
    glEnd();

    // White stripe
    glColor3ub(255, 255, 255);

    glBegin(GL_QUADS);
    glVertex2i(-35, 20);
    glVertex2i(-5, 20);
    glVertex2i(-5, 30);
    glVertex2i(-35, 30);
    glEnd();

    // Red stripe
    glColor3ub(222, 0, 0);

    glBegin(GL_QUADS);
    glVertex2i(-35, 10);
    glVertex2i(-5, 10);
    glVertex2i(-5, 20);
    glVertex2i(-35, 20);
    glEnd();

    // Outer star (yellow)
    glColor3ub(255, 221, 53);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-20, 21);
    glVertex2f(-20, 32);
    glVertex2f(-16, 24);
    glVertex2f(-10, 24);
    glVertex2f(-14, 19);
    glVertex2f(-12, 12);
    glVertex2f(-20, 15);
    glVertex2f(-28, 12);
    glVertex2f(-26, 19);
    glVertex2f(-30, 24);
    glVertex2f(-24, 24);
    glVertex2f(-20, 32);
    glEnd();

    // Inner star (red, smaller) - leaves yellow border visible
    glColor3ub(222, 0, 0);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-20.0f, 21.0f);
    glVertex2f(-20.0f, 29.8f);
    glVertex2f(-16.8f, 23.4f);
    glVertex2f(-12.0f, 23.4f);
    glVertex2f(-15.2f, 19.4f);
    glVertex2f(-13.6f, 13.8f);
    glVertex2f(-20.0f, 16.2f);
    glVertex2f(-26.4f, 13.8f);
    glVertex2f(-24.8f, 19.4f);
    glVertex2f(-28.0f, 23.4f);
    glVertex2f(-23.2f, 23.4f);
    glVertex2f(-20.0f, 29.8f);
    glEnd();

    glLineWidth(1);
    glColor3ub(0, 0, 0);

    glBegin(GL_LINE_LOOP);
    glVertex2i(-35, 10);
    glVertex2i(-5, 10);
    glVertex2i(-5, 40);
    glVertex2i(-35, 40);
    glEnd();

    // ================= NORWAY (Quadrant 3) =================
    glColor3ub(186, 12, 47);

    glBegin(GL_QUADS);
    glVertex2i(-35, -30);
    glVertex2i(-5, -30);
    glVertex2i(-5, -10);
    glVertex2i(-35, -10);
    glEnd();

    glColor3ub(255, 255, 255);

    glBegin(GL_QUADS);
    glVertex2i(-25, -30);
    glVertex2i(-19, -30);
    glVertex2i(-19, -10);
    glVertex2i(-25, -10);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(-35, -23);
    glVertex2i(-5, -23);
    glVertex2i(-5, -17);
    glVertex2i(-35, -17);
    glEnd();

    glColor3ub(0, 32, 91);

    glBegin(GL_QUADS);
    glVertex2i(-23, -30);
    glVertex2i(-21, -30);
    glVertex2i(-21, -10);
    glVertex2i(-23, -10);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(-35, -21);
    glVertex2i(-5, -21);
    glVertex2i(-5, -19);
    glVertex2i(-35, -19);
    glEnd();

    glLineWidth(1);
    glColor3ub(0, 0, 0);

    glBegin(GL_LINE_LOOP);
    glVertex2i(-35, -30);
    glVertex2i(-5, -30);
    glVertex2i(-5, -10);
    glVertex2i(-35, -10);
    glEnd();

    // ================= GREECE (Quadrant 4) =================
    // White base
    glColor3ub(255, 255, 255);

    glBegin(GL_QUADS);
    glVertex2i(5, -30);
    glVertex2i(35, -30);
    glVertex2i(35, -10);
    glVertex2i(5, -10);
    glEnd();

    // Blue canton squares
    glColor3ub(13, 94, 175);

    glBegin(GL_QUADS);
    glVertex2i(5, -14);
    glVertex2i(10, -14);
    glVertex2i(10, -10);
    glVertex2i(5, -10);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(11, -14);
    glVertex2i(15, -14);
    glVertex2i(15, -10);
    glVertex2i(11, -10);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(5, -20);
    glVertex2i(10, -20);
    glVertex2i(10, -16);
    glVertex2i(5, -16);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(11, -20);
    glVertex2i(15, -20);
    glVertex2i(15, -16);
    glVertex2i(11, -16);
    glEnd();

    // Top blue stripes
    glBegin(GL_QUADS);
    glVertex2i(15, -12);
    glVertex2i(35, -12);
    glVertex2i(35, -10);
    glVertex2i(15, -10);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(15, -15);
    glVertex2i(35, -15);
    glVertex2i(35, -13);
    glVertex2i(15, -13);
    glEnd();

    // Bottom blue stripes
    glBegin(GL_QUADS);
    glVertex2i(5, -25);
    glVertex2i(35, -25);
    glVertex2i(35, -23);
    glVertex2i(5, -23);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(5, -30);
    glVertex2i(35, -30);
    glVertex2i(35, -28);
    glVertex2i(5, -28);
    glEnd();

    glLineWidth(1);
    glColor3ub(0, 0, 0);

    glBegin(GL_LINE_LOOP);
    glVertex2i(5, -30);
    glVertex2i(35, -30);
    glVertex2i(35, -10);
    glVertex2i(5, -10);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(80, 50);
    glutCreateWindow("4 Quadrant Flags");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
