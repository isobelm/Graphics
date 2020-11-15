#ifndef LEG_H
#define LEG_H

#include "model.h"

// OpenGL includes
#include <GL/glew.h>
#include <GL/freeglut.h>

class Leg {
public:

	Leg(Mesh upprLeg, Mesh lwrLeg);
	Leg();

	void generateObjectBufferMesh(GLuint shaderProgramID);

	void draw(mat4 parent, GLuint matrix_location);

	void update();

	void keypress(unsigned char key, int x, int y);

	GLfloat motion = 0.5f;

private:
	Mesh upperLeg;
	Mesh lowerLeg;
	GLfloat cyclePos = 0;
	GLfloat hip_transform_x = -0.1f;
	GLfloat hip_transform_z = 0.45f;
};

#endif // !LEG_H
