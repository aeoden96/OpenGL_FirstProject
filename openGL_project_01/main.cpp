//ORIGIN MASTER
#include "libs.h"

void framebuffer_resize_callback(GLFWwindow* window, int fbW, int fbH)
{
	glViewport(0, 0, fbW, fbH);

}



int main() 
{

	

	//INIT GLFW

	glfwInit();


	//CREATE WINDOW
	const int WINDOW_WIDTH = 640;
	const int WINDOW_HEIGHT = 480;

			//canvas INSIDE the window
	int framebufferWidth = 0;
	int framebufferHeight = 0;

			//using VERSION 4.4
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
	glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);


	GLFWwindow* window = glfwCreateWindow(
		WINDOW_WIDTH,
		WINDOW_HEIGHT,
		"FIRST OPENGL WINDOW",
		NULL,NULL);

	glfwSetFramebufferSizeCallback(window, framebuffer_resize_callback);


	//glfwGetFramebufferSize(window, &framebufferWidth, &framebufferHeight);
				//canvas size
	//glViewport(0, 0, framebufferWidth, framebufferHeight);

	glfwMakeContextCurrent(window); //important for init.

	//INIT GLEW(NEEDS WINDOW AND OPENGL CONTEXT)

	glewExperimental = GL_TRUE;

	if (glewInit() != GLEW_OK) {
		std::cout << "ERROR::MAIN.CPP::GLEW_INIT_FAILED" << "\n";
		glfwTerminate();
	}

	//MAIN LOOP
	while(!glfwWindowShouldClose(window))
	{
		//update input
		glfwPollEvents();

		//update

		//draw

		//clear
		glClearColor(0.f, 1.f, 1.f, 1.f);
		glClear(
			GL_COLOR_BUFFER_BIT | 
			GL_DEPTH_BUFFER_BIT | 
			GL_STENCIL_BUFFER_BIT);


		//end
		glfwSwapBuffers(window);
		glFlush();
	}


	//PROGRAM END
	
	glfwTerminate();
	return 0;
}