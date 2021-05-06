/*
 * move.c
 *
 
 */

#include <math.h>
#include "model.h"
#include "callbacks.h"
#include "move.h"

int movinganimal = 0;

void move_animal(World* world) {
	if(movinganimal == 0)
	{
		if(abs((int)(camera.position.x - world->dog.position.x)) + abs((int)(camera.position.z - world->dog.position.z)) <
				abs((int)(camera.position.x - world->cat.position.x)) + abs((int)(camera.position.z - world->cat.position.z)))
		{
			movinganimal = 1;
		}
		else {
			movinganimal = 2;
		}
	}

	if(abs(camera.position.x) < 170 && abs(camera.position.z) < 170)

{

		switch (movinganimal) {
			case 1:
				if (abs((int)(camera.position.x - world->dog.position.x)) < 50 && abs((int)(camera.position.z - world->dog.position.z)) < 50 && camera.position.y < 150)
				{
					if((abs((int)(world->dog.position.x)) > 80))
						{
					world->dog.position.x = camera.position.x + 0.5;
					world->dog.position.z = camera.position.z + 0.5;
					
					
					

					}
					else {
					world->dog.position.x = 130;
					world->dog.position.z = 10;
					world->dog.material_ambient[0] = camera.position.x / 100;
					world->dog.material_ambient[1] = camera.position.y / 100;
					world->dog.material_ambient[2] = camera.position.z / 100;
					
					}
				}
				break;
			case 2:
				if (abs((int)(camera.position.x - world->cat.position.x)) < 50 && abs((int)(camera.position.z - world->cat.position.z)) < 50 && camera.position.y < 150)
				{
					if((abs((int)(world->cat.position.x)) > 80))
						{
					world->cat.position.x = camera.position.x + 0.5;
					world->cat.position.z = camera.position.z + 0.5;
					
					

					}
					else {
					world->cat.position.x = 130;
					world->cat.position.z = 10;
					world->cat.material_ambient[0] = camera.position.x / 100;
					world->cat.material_ambient[1] = camera.position.y / 100;
					world->cat.material_ambient[2] = camera.position.z / 100;
					}
					
				}

				break;
		}
	}
}
