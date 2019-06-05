#include <GL/glew.h>
#include <GL/glut.h>
#include <iostream>
using namespace std;

int main(int argc, char **argv)     //**This is the main function
{
    glutInit(&argc, argv);
    glutCreateWindow("GLUT");
    glewInit();
    cout<<"OpenGL version supported by this platform :"<<glGetString(GL_VERSION)<<endl;
}