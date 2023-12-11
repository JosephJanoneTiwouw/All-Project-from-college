#include <gl/Gl.h>
#include <gl/glu.h>
#include <gl/glut.h>

void display() {
  glClearColor(1.0, 0.5, 0.0, 0.0); // Set the background color to orange
  glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer
  
  // Render code goes here
  
  glutSwapBuffers(); // Swap buffers to display the rendered scene
}

int main(int argc, char** argv) {
  glutInit(&argc, argv); // Initialize GLUT
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); // Set the display mode
  glutInitWindowSize(640, 480); // Set the window size
  glutCreateWindow("Orange Background"); // Create a window with a title
  
  glutDisplayFunc(display); // Set the display function
  
  glutMainLoop(); // Start the main loop
  return 0;
}


