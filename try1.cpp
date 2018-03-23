 #include<stdio.h>
#include<stdlib.h>
#include<math.h>

#include<GL/glut.h>

double cameraAngle;
double move_X, move_Y, move_Z, rotateFan, speed;
int canDrawGrid, canDrawAxis, f, r, y, forward;

double cameraRadius, cameraHeight, cameraAngleDelta;



void boundary(){   // Wall Boundary
	
	

	
	glPushMatrix();{  // Floor Wall
		glTranslatef(0,0,0);
		glColor3f(.9,.7,.9);
		glScalef(250,500,0);
		glColor3f(.9,.9,.9);
		glutSolidCube(2);
	}glPopMatrix();

	glPushMatrix();{   // Forward Wall
		glTranslatef(0,500,500);
		glColor3f(1,.5,0.8);
		glScalef(250,1,500);
		glColor3f(1,.5,0.8);
		glutSolidCube(2);
	}glPopMatrix();

	glPushMatrix();{   // Right Wall
		glTranslatef(250,1,500);
		glScalef(1,500,500);
		glColor3f(1,.6,.6);
		glutSolidCube(2);
	}glPopMatrix();

	glPushMatrix();{   // Right Wall
		glTranslatef(-250,1,500);
		glScalef(1,500,500);
		glColor3f(1,.6,.6);
		glutSolidCube(2);
	}glPopMatrix();

	


	
	/*glTranslatef(-15,-20,5);
	glScalef(.8,.8,.8);
	drawFlower();*/
}

void teatable(){
	//table cloth
	glPushMatrix();
			{
		glTranslated(0,-300,10);
			glPushMatrix();
			{
				glTranslatef(0,0,17);
				//glColor3f(.6,.2,0);
				glColor3f(.7,.7,.7);
				glScalef(2,1,.01);
				glutSolidCube(40);
				glColor3f(0,0,0);
				glutWireCube(40.5);
			}glPopMatrix();
		//table up
			glPushMatrix();
			{
				glTranslatef(0,0,15);
				glColor3f(.6,.2,0);
				glScalef(2,1,.1);
				glutSolidCube(40);
				glColor3f(0,0,0);
				glutWireCube(40.5);
			}glPopMatrix();
		//table floor
			glPushMatrix();
			{
				glTranslatef(0,0,5);
				glColor3f(.6,.2,0);
				glScalef(1.9,.9,.05);
				glutSolidCube(40);
				glColor3f(0,0,0);
				glutWireCube(40.5);
			}glPopMatrix();
			
		//table leg
			glPushMatrix();
			{
				glColor3f(.5,0,0);
				glTranslatef(30,10,0);
				
				//glScalef(1.9,.9,.05);
				GLUquadricObj *obj1 = gluNewQuadric();
				gluCylinder(obj1, 4, 4, 17, 20, 20);
			}glPopMatrix();
			glPushMatrix();
			{
				glTranslatef(-30,-10,0);
				//glScalef(1.9,.9,.05);
				GLUquadricObj *obj1 = gluNewQuadric();
				gluCylinder(obj1, 4, 4, 17, 20, 20);
			}glPopMatrix();
			glPushMatrix();
			{
				glTranslatef(30,-10,0);
				
				//glScalef(1.9,.9,.05);
				GLUquadricObj *obj1 = gluNewQuadric();
				gluCylinder(obj1, 4, 4, 17, 20, 20);
			}glPopMatrix();
			glPushMatrix();
			{
				glTranslatef(-30,10,0);
				
				//glScalef(1.9,.9,.05);
				GLUquadricObj *obj1 = gluNewQuadric();
				gluCylinder(obj1, 4, 4, 17, 20, 20);
			}glPopMatrix();
				}glPopMatrix();

}


void drawSofa(){

	
	glPushMatrix();{
		glColor3f(.47,.47,.47);
		//bottom
		glRotatef(90,1,0,0);
		glTranslatef(0,6,45); 
		glScalef(5.8,2,.3);
		glutSolidCube(10);
		glColor3f(1,.6,1);
		glutWireCube(10);
		//glutSolidCube(10);	
	}glPopMatrix();

	glPushMatrix();{
		glTranslatef(-30,-24.5,16);  //left
		glRotatef(90,0,1,0);
		glScalef(3,4.5,.3);
		glColor3f(.37,.37,37);
		glutSolidCube(10);
		glColor3f(.2,.2,.2);
		glutWireCube(10);
	}glPopMatrix();

	glPushMatrix();{
		//base
			glColor3f(.47,.47,.47);
			glPushMatrix();{
				glTranslatef(0,-26.5,15); 
				glScalef(6,4,.3);
				glutSolidCube(10);
				glColor3f(1,.6,1);
				glutWireCube(10.2);
			}glPopMatrix();
				}glPopMatrix();

		glPushMatrix();{
		//base
			glColor3f(.75,.75,.75);
			glPushMatrix();{
				glTranslatef(0,-26.5,21); 
				glScalef(6,4,.3);
				glutSolidCube(10);
				glColor3f(1,.6,1);
				glutWireCube(10.2);
			}glPopMatrix();
				}glPopMatrix();

		//top
			glColor3f(.47,.47,.47);
			glPushMatrix();{
				glTranslatef(0,-5,32);
				glRotatef(90,1,0,0);
				glScalef(6,3.6,.3);
				glutSolidCube(10);
				glColor3f(1,.6,1);
				glutWireCube(10);
			}glPopMatrix();

		glPushMatrix();{
		//sides
		glTranslatef(30,-24.5,16);  //right
		glRotatef(90,0,1,0);
		glScalef(3,4.5,.3);
		glColor3f(.47,.47,47);
		glutSolidCube(10);
		glColor3f(.2,.2,.2);
		glutWireCube(10);
	}glPopMatrix();	
	
}

//..........................................
	void drawSofa1(){
		glTranslated(60,0,0);
	glPushMatrix();{
		glColor3f(.2,.2,.2);
		//bottom
		glRotatef(90,1,0,0);
		glTranslatef(0,6,45); 
		glScalef(5.8,2,.3);
		glutSolidCube(10);
		glColor3f(1,.6,1);
		glutWireCube(10);
		//glutSolidCube(10);	
	}glPopMatrix();

	glPushMatrix();{
		glTranslatef(-30,-24.5,16);  //left
		glRotatef(90,0,1,0);
		glScalef(3,4.5,.3);
		glColor3f(.47,.47,47);
		glutSolidCube(10);
		glColor3f(.2,.2,.2);
		glutWireCube(10);
	}glPopMatrix();

	glPushMatrix();{
		//base
			glColor3f(.47,.47,.47);
			glPushMatrix();{
				glTranslatef(0,-26.5,15); 
				glScalef(6,4,.3);
				glutSolidCube(10);
				glColor3f(1,.6,1);
				glutWireCube(10.2);
			}glPopMatrix();
				}glPopMatrix();

		glPushMatrix();{
		//base
			glColor3f(.75,.75,.75);
			glPushMatrix();{
				glTranslatef(0,-26.5,21); 
				glScalef(6,4,.3);
				glutSolidCube(10);
				glColor3f(1,.6,1);
				glutWireCube(10.2);
			}glPopMatrix();
				}glPopMatrix();

		//top
			glColor3f(.47,.47,.47);
			glPushMatrix();{
				glTranslatef(0,-5,32);
				glRotatef(90,1,0,0);
				glScalef(6,3.6,.3);
				glutSolidCube(10);
				glColor3f(1,.6,1);
				glutWireCube(10);
			}glPopMatrix();

		glPushMatrix();{
		//sides
		glTranslatef(30,-24.5,16);  //right
		glRotatef(90,0,1,0);
		glScalef(3,4.5,.3);
		glColor3f(.58,.58,.58);
		glutSolidCube(10);
		glColor3f(.2,.2,.2);
		glutWireCube(10);
	}glPopMatrix();	

		glPushMatrix(); {
			glTranslatef(29, 0, 35);

			glColor3f(.58, 0.58, 0.58);
			
			glRotatef(90, 1, 0, 0);

			GLUquadricObj *obj = gluNewQuadric();
			gluCylinder(obj, 5, 5, 48, 15, 15);


		} glPopMatrix();


		glPushMatrix(); {
			glTranslatef(-30, 0, 36);

			glColor3f(.58, 0.58, 0.58);
			
			glRotatef(90, 1, 0, 0);

			GLUquadricObj *obj = gluNewQuadric();
			gluCylinder(obj, 5, 5, 48, 15, 15);

		} glPopMatrix();


		glPushMatrix(); {
			glTranslatef(-90, 0, 36);

			glColor3f(.58, 0.58, 0.58);
			
			glRotatef(90, 1, 0, 0);

			GLUquadricObj *obj = gluNewQuadric();
			gluCylinder(obj, 5, 5, 48, 15, 15);

		} glPopMatrix();
	
}

	void drawCurtain(){
	//stand
		glTranslated(0,450,420);
	glPushMatrix();{
			glColor3f(.58,.58,.58);
			glTranslatef(-40,0,9);
			glScalef(4,1.2,.3);
			glRotatef(90,0,1,0);
			GLUquadricObj *obj= gluNewQuadric();
			gluCylinder(obj,4,4,20,10,10);	
	}glPopMatrix();
	glPushMatrix();{
			glColor3f(.58,.58,.58);	//left ball
			glTranslatef(-40,-2,9); 
			glScalef(.6,1.2,.6);
			glutSolidSphere(4,50,50);
	}glPopMatrix();
	glPushMatrix();{
			glColor3f(.58,.58,.58);	//right ball
			glTranslatef(40,-2,9); 
			glScalef(.6,1.2,.6);
			glutSolidSphere(4,50,50);
	}glPopMatrix();

	//curtain
	glPushMatrix();{
		glColor3f(1,.8,.8);		//light
		glTranslatef(-34,-7,-55);
		GLUquadricObj *obj= gluNewQuadric();
		gluCylinder(obj,4,4,65,10,10);	

		glColor3f(1,.75,.8);	//dark
		glTranslatef(6,0,0);
		gluCylinder(obj,4,4,65,10,10);		

		glColor3f(1,.8,.8);
		glTranslatef(6,0,0);
		gluCylinder(obj,4,4,65,10,10);		

		glColor3f(1,.8,.8);
		glTranslatef(55,0,0);
		gluCylinder(obj,4,4,65,10,10);	

		glColor3f(1,.75,.8);
		glTranslatef(-6,0,0);
		gluCylinder(obj,4,4,65,10,10);	

		glColor3f(1,.8,.8);	
		glTranslatef(-6,0,0);
		gluCylinder(obj,4,4,65,10,10);		

		//middle
		glPushMatrix();{
				glTranslatef(-5.9,0,56.5);
				glRotatef(90,1,0,0);
				glScalef(.7,1.7,.01);	
				glColor3f(1,.75,.8);
				glutSolidCube(10);
				glColor3f(1,0,0);
				glutWireCube(10);
		
				glTranslatef(-10,0,0);
				glColor3f(1,.8,.8);
				glutSolidCube(10);
				glColor3f(1,0,0);
				glutWireCube(10);

				glTranslatef(-10,0,0);
				glColor3f(1.1,.75,.8);
				glutSolidCube(10);
				glColor3f(1,0,0);
				glutWireCube(10);

				glTranslatef(-10,0,0);
				glColor3f(1.1,.8,.8);
				glutSolidCube(10);
				glColor3f(1,0,0);
				glutWireCube(10);

				glTranslatef(-10,0,0);
				glColor3f(1.1,.75,.8);
				glutSolidCube(10);
				glColor3f(1,0,0);
				glutWireCube(10);

				glTranslatef(-10,0,0);
				glColor3f(1.1,.8,.8);
				glutSolidCube(10);
				glColor3f(1,0,0);
				glutWireCube(10);
		}glPopMatrix();
	}glPopMatrix();

	}

	void sofa(){
	glPushMatrix();
	   
	{	glTranslated(100,-200,10);
	    glRotatef(-90,0,0,1);
		//glTranslatef(0,0,7);
		glPushMatrix();
		{ 
			glColor3f(.6,.2,0);
			//glColor3f(.8,.4,0);
			glScalef(2.25,.75,.35);
			glutSolidCube(40);
			glColor3f(0,0,0);
			glutWireCube(40.5);
		}glPopMatrix();
		glPushMatrix();
		{
			glColor3f(1,.8,.4);
			//glColor3f(.8,.4,0);
			glTranslatef(0,0,8);
			//glColor3f(.5,0,0);
			glScalef(2.25,.75,.01);
			glutSolidCube(40);
			glColor3f(0,0,0);
			glutWireCube(40.5);
		}glPopMatrix();
		glPushMatrix();
		{
			glColor3f(.6,.2,0);
			//glColor3f(.8,.4,0);
			//glColor3f(1,1,0);
			glTranslatef(0.5,20.5,5);
			glScalef(2.25,.25,.85);
			glTranslatef(0,0,5);
			glutSolidCube(40);
			glColor3f(0,0,0);
			glutWireCube(40.5);
		}glPopMatrix();
		glPushMatrix();
		{
			//glTranslatef(0.5,20.5,5);
			glColor3f(1,.8,.4);
			
			//glColor3f(1,1,0);
			glTranslatef(0.5,15.5,5);
			glScalef(2.25,.01,.85);
			glTranslatef(0,0,5);
			glutSolidCube(40);
			glColor3f(0,0,0);
			glutWireCube(40.5);
		}glPopMatrix();
		glPushMatrix();
		{
			glColor3f(.6,.2,0);
			//glColor3f(.8,.4,0);
			//glColor3f(1,1,0);
			glTranslatef(48.65,5,2);
			glScalef(.15,1.05,.6);
			glTranslatef(0,0,5);
			glutSolidCube(40);
			glColor3f(0,0,0);
			glutWireCube(40.5);
		}glPopMatrix();
		glPushMatrix();
		{
			glColor3f(.6,.2,0);
			//glColor3f(.8,.4,0);
			//glColor3f(1,1,0);
			glTranslatef(-48.65,5,2);
			glScalef(.15,1.05,.6);
			glTranslatef(0,0,5);
			glutSolidCube(40);
			glColor3f(0,0,0);
			glutWireCube(40.5);
		}glPopMatrix();
		}glPopMatrix();
	}


	void lamp(){

	glPushMatrix();
	{//bed floor
		//glTranslatef(150,80,10);
			glTranslated(-200,-500,-400);
		glPushMatrix();
		{   
			//glColor3f(.8,.4,0);
			glColor3f(.6,.2,0);
			glScalef(1,.75,.5);
			glutSolidCube(40);
			glColor3f(0,0,0);
			glutWireCube(40.5);
		}glPopMatrix();
		glPushMatrix();
		{  
			glColor3f(0,0,0);
			
			//glTranslatef(-130,158,110);
			//glRotatef(90,0,1,0);
			GLUquadricObj *obj1 = gluNewQuadric();
			gluCylinder(obj1, 5, 5, 25, 20, 20);
			
			
			}glPopMatrix();
		glPushMatrix();
		{  
			glColor3f(1,.8,.4);
			
			glTranslatef(0,0,30);
			//glRotatef(90,0,1,0);
			/*GLUquadricObj *obj = gluNewQuadric();
			gluCylinder(obj, 15, 15, 15, 20, 20);*/
			glutSolidSphere(10,20,20);
			
			}glPopMatrix();
			glPushMatrix();
			{
				glTranslatef(0,0,23);
				glRotatef(180,1,0,0);
				glColor3f(1,.6,0);
				glutSolidCone(25,10,50,50);
				glColor3f(0,0,0);
				glutWireCone(25.5,10,20,20);

			}glPopMatrix();
	}glPopMatrix();
	
}


	//...........................................................
void drawWindow(){
	glPushMatrix();{
		  glTranslated(0,450,380);
		glPushMatrix();{
				glTranslatef(0,-1,8);
				glRotatef(90,1,0,0);
				glScalef(6,4.3,.05);	//back
				glColor3f(1,1,.6);//glColor3f(.47,.47,.47);
				glutSolidCube(10);
		}glPopMatrix();
		glPushMatrix();{
				glTranslatef(0,-1.5,8);
				glRotatef(90,1,0,0);	//frontside
				glScalef(5.3,3.8,.05);
				glColor3f(0,0,.6);
				//glColor3f(.87,.87,.87);
				glutSolidCube(10);
		}glPopMatrix();

		glPushMatrix();{
				glColor3f(1,0,0);
				glTranslatef(0,-2,8); //middle red part
				glScalef(4.5,.1,3.2);
				glutWireCube(10);
		}glPopMatrix();
			
		glPushMatrix();{
				glColor3f(1,0,0);
				glTranslatef(-11,-2,8); //left red part
				glScalef(2.25,.1,3.1);
				glutWireCube(10);
		}glPopMatrix();

		glPushMatrix();{
				glColor3f(1,0,0);
				glTranslatef(11,-2,8); //right red part
				glScalef(2.25,.1,3.1);
				glutWireCube(10);
		}glPopMatrix();

	}glPopMatrix();
}	

void fireBox(){
	
	
	glPushMatrix();{ //base
		glTranslated(-260,-560,-450);
	glPushMatrix();{
		glTranslatef(0,0,110);
		glScalef(40,75,12);
		glColor3f(.6, .2, 0);
		glutSolidCube(1);
	}glPopMatrix();


	glPushMatrix();{    // Front Leg
		glTranslatef(12,-36,20);
		glScalef(12,6,180);
		glColor3f(.6, 0.2, 0); // Red
		glutSolidCube(1);
	}glPopMatrix();

	glPushMatrix();{    // Front Leg
		glTranslatef(12,-36,20);
	    glScalef(6,3,18);
		glColor3f(.7, .7, 0.6); // Red
		glutSolidCube(2.5);
	}glPopMatrix();

	

	glPushMatrix();{       // back Leg
		glTranslatef(12,35,20);
		glScalef(12,6,180);
		glColor3f(.6, 0.2, 0); // Green
		glutSolidCube(1);
	}glPopMatrix();

	glPushMatrix();{       // back Leg
		glTranslatef(12,35,20);
		glScalef(6,3,18);
		glColor3f(.7, .7, 0.6);
		glutSolidCube(2.5);
	}glPopMatrix();

}glPopMatrix();

}



	

	//}glPopMatrix();





	



void display(){
	//codes for Models, Camera

	//clear the display
	//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0,0,0,0);	//color black
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);		//clear buffers to preset values

	/***************************
	/ set-up camera (view) here
	****************************/ 
	//load the correct matrix -- MODEL-VIEW matrix
	glMatrixMode(GL_MODELVIEW);		//specify which matrix is the current matrix

	//initialize the matrix
	glLoadIdentity();				//replace the current matrix with the identity matrix [Diagonals have 1, others have 0]

	//now give three info
	//1. where is the camera (viewer)?
	//2. where is the camera looking?
	//3. Which direction is the camera's UP direction?

	//gluLookAt(0,-150,20,	0,0,0,	0,0,1);
	gluLookAt(cameraRadius*sin(cameraAngle), -cameraRadius*cos(cameraAngle), cameraHeight,		0,0,100,		0,0,1);

	//again select MODEL-VIEW
	glMatrixMode(GL_MODELVIEW);


	/**************************************************
	/ Grid and axes Lines(You can remove them if u want)
	***************************************************/
	// draw the three major AXES

	if(canDrawAxis==1){
		glBegin(GL_LINES);
		//X axis
		glColor3f(0, 1, 0);	//100% Green
		glVertex3f(-150, 0, 0);
		glVertex3f( 150, 0, 0);

		//Y axis
		glColor3f(0, 0, 1);	//100% Blue
		glVertex3f(0, -150, 0);	// intentionally extended to -150 to 150, no big deal
		glVertex3f(0,  150, 0);

		//Z axis
		glColor3f(1, 1, 1);	//100% White
		glVertex3f( 0, 0, -150);
		glVertex3f(0, 0, 150);
		glEnd();
	}



	//draw_Sofa_Set();

	//short_table();
	sofa();
	teatable();
	drawSofa();
	drawSofa1();
	boundary();
	drawWindow();
	drawCurtain();
	//drawLamp();

	fireBox();
	//roundChair ();
	
	lamp();
		
	//bigSofa();
	
	
	glutSwapBuffers();
}

void animate(){
	//codes for any changes in Models, Camera

	//cameraAngle += cameraAngleDelta;	// camera will rotate at 0.002 radians per frame.
	rotateFan += f;
	if (r){
		cameraAngle += speed;
	}

	if (forward){
		if (cameraRadius > 10)
			cameraRadius -= speed*100;
		else cameraRadius = 490;
	}
	//codes for any changes in Models

	//MISSING SOMETHING? -- YES: add the following
	glutPostRedisplay();	//this will call the display AGAIN

}

void init(){
	//codes for initialization

	cameraAngle = 0;	//angle in radian
	move_X = 0;
	move_Y = 0;
	move_Z = 0;
	speed = 0.001;

	cameraAngleDelta = .001;

	cameraRadius = 490;
	cameraHeight = 150;

	//clear the screen
	glClearColor(0,0,0, 0);

	/************************
	/ set-up projection here
	************************/
	//load the PROJECTION matrix
	glMatrixMode(GL_PROJECTION);

	//initialize the matrix
	glLoadIdentity();

	/*
	gluPerspective() — set up a perspective projection matrix

	fovy -         Specifies the field of view angle, in degrees, in the y direction.
	aspect ratio - Specifies the aspect ratio that determines the field of view in the x direction. The aspect ratio is the ratio of x (width) to y (height).
	zNear -        Specifies the distance from the viewer to the near clipping plane (always positive).
	zFar  -        Specifies the distance from the viewer to the far clipping plane (always positive).
	*/

	gluPerspective(70,	1,	0.1,	10000.0);

}

void keyboardListener(unsigned char key, int x,int y){
	switch(key){

	case '1':
		move_X += 1;
		if (!forward){
			r = 0;
			cameraRadius = 490;
			cameraAngle = 0;
			forward = 1;
		}
		else{
			cameraRadius = 490;
			cameraAngle = 0;
			forward = 0;

		}
		break;

	case '2':	
		move_X -= 1;
		if (!r){
			forward = 0;
			cameraRadius = 200;
			cameraAngle = 0;
			r = 1;

		}
		else{
			cameraRadius = 490;
			cameraAngle = 0;
			r = 0;

		}
		break;

	case '3':	
		move_Y += 1;
		break;
	case '4':	
		move_Y -= 1;
		break;

	case '5':	
		move_Z += 1;
		break;
	case '6':	
		move_Z -= 1;
		break;
	case '8':	

		break;

	case 'g':
		canDrawGrid = !canDrawGrid;
		break;

	case 'h':
		canDrawAxis = !canDrawAxis;
		break;

	case 'p':
		break;

	case 'r':
		break;

	case 'f':
		f = ++f % 5;
		break;
	case 'k':
		if (speed <= .01)
			speed += .001;
		break;
	case 'l':
		if (speed > .001)
			speed -= .001;
		break;

	default:
		break;
	}
}

void specialKeyListener(int key, int x,int y){
	switch(key){
	case GLUT_KEY_DOWN:		//down arrow key
		cameraRadius += 10;
		break;
	case GLUT_KEY_UP:		// up arrow key
		if(cameraRadius > 10)
			cameraRadius -= 10;
		break;

	case GLUT_KEY_RIGHT:
		cameraAngle += 0.01;
		break;
	case GLUT_KEY_LEFT:
		cameraAngle -= 0.01;
		break;

	case GLUT_KEY_PAGE_UP:
		cameraHeight += 10;
		break;
	case GLUT_KEY_PAGE_DOWN:
		cameraHeight -= 10;
		break;

	case GLUT_KEY_INSERT:
		break;

	case GLUT_KEY_HOME:
		//	cameraAngleDelta = 0.001; 
		break;
	case GLUT_KEY_END:
		//	cameraAngleDelta = 0;
		break;

	default:
		break;
	}
}

void mouseListener(int button, int state, int x, int y){	//x, y is the x-y of the screen (2D)
	switch(button){
	case GLUT_LEFT_BUTTON:
		if(state == GLUT_DOWN){		// 2 times?? in ONE click? -- solution is checking DOWN or UP
			cameraAngleDelta = -cameraAngleDelta;	
		}
		break;

	case GLUT_RIGHT_BUTTON:
		//........
		break;

	case GLUT_MIDDLE_BUTTON:
		//........
		break;

	default:
		break;
	}
}

int main(int argc, char **argv){

	glutInit(&argc,argv);							//initialize the GLUT library

	glutInitWindowSize(1000, 600);
	glutInitWindowPosition(100, 100);

	/*
	glutInitDisplayMode - inits display mode
	GLUT_DOUBLE - allows for display on the double buffer window
	GLUT_RGBA - shows color (Red, green, blue) and an alpha
	GLUT_DEPTH - allows for depth buffer
	*/
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGB);	

	glutCreateWindow("Classroom");

	init();						//codes for initialization

	glEnable(GL_DEPTH_TEST);	//enable Depth Testing

	glutDisplayFunc(display);	//display callback function
	glutIdleFunc(animate);		//what you want to do in the idle time (when no drawing is occuring)

	glutKeyboardFunc(keyboardListener);
	glutSpecialFunc(specialKeyListener);

	glutMouseFunc(mouseListener);

	glutMainLoop();		//The main loop of OpenGL

	return 0;
}
