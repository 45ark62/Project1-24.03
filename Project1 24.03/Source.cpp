//#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
//#include "math_3d.h"

int main(void)
{
    GLFWwindow* window;

   

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "RenderSceneCB", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    
       


    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClearColor(1, 1, 1, 1);
        glClear(GL_COLOR_BUFFER_BIT);
       
        
        glPointSize(10);
        glBegin(GL_POINTS);
            glColor3f(0, 0, 0);
            glVertex3f(0.75,0,0.75);
        glEnd();
        



        glBegin(GL_TRIANGLES);
        glColor3f(0, 0, 0);
        glVertex2f(0.5, 0.5);
        glVertex2f(-0.5,0.5);
        glColor3f(1, 0, 0);
        glVertex2f(-0.5, -0.5);
        glVertex2f(0.5, -0.5);
        glEnd();




      
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }
  
    glfwTerminate();
    return 0;
}