
#include "libs.h"

int main() 
{
	glfwInit();

	glm::vec3(0.f);

	glewExperimental = GL_TRUE;

	if (glewInit() != GLEW_OK)
		std::cout << "FATAL ERROR";

	system("PAUSE");

	return 0;
}