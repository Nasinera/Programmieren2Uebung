


#include "BinaryVisuals.h"
#include <limits.h>
#include <climits>


void BinaryVisuals::prepareBit(ViewPortGL& vp, int xk, int yk, int width, int height, bool isOne) {
	int weite = width;
	int i = 0;

	vp.prepareLine(xk, yk, xk + width, yk, 255, 255, 255);
	vp.prepareLine(xk, yk, xk, yk + height, 255, 255, 255);
	vp.prepareLine(xk + width, yk, xk + width, yk + height, 255, 255, 255);
	vp.prepareLine(xk, yk + height, xk + width, yk + height, 255, 255, 255);


	if (isOne == true) {

		for (int i = 0; i <= weite; i++) {
			vp.prepareLine(xk + i, yk, xk + i, yk + height, 255, 255, 255);

		}


	}

	vp.sendLines();
	vp.swapBuffers();



}





void BinaryVisuals::prepareRepresentation(ViewPortGL& vp, unsigned char value, int xk, int yk, int width, int height) {
	int weite = width;
	int i = 0;

	for (i = 0; i <= CHAR_BIT * 2 - 1; i = i+2) {
		vp.prepareLine(xk + (i * width), yk, xk + width + (i * width), yk, 255, 255, 255);
		vp.prepareLine(xk + (i * width), yk, xk + (i * width), yk + height, 255, 255, 255);
		vp.prepareLine(xk + width + (i * width), yk, xk + width + (i * width), yk + height, 255, 255, 255);
		vp.prepareLine(xk + (i * width), yk + height, xk + width + (i * width), yk + height, 255, 255, 255);

	}

	int c = value;

	int bin;

	int n = 7;


	while (n >= 0) {

		bin = (c % 2);
		c = c / 2;

		if (bin == 1) {
			int o = 0;
			while (o <= weite) {
				vp.prepareLine(xk + o + (n * width * 2), yk, xk + o + (n * width * 2), yk + height, 255, 255, 255);
				o += 1;
			}


		}
		n -= 1;
	}
	vp.sendLines();
	vp.swapBuffers();
}



void BinaryVisuals::prepareRepresentationINT(ViewPortGL& vp, unsigned int value, int xk, int yk, int width, int height) {
	int weite = width;
	int i = 0;
	while (i <= 8 * 4 * 2 - 1) {
		vp.prepareLine(xk + (i * width), yk, xk + width + (i * width), yk, 255, 255, 255);
		vp.prepareLine(xk + (i * width), yk, xk + (i * width), yk + height, 255, 255, 255);
		vp.prepareLine(xk + width + (i * width), yk, xk + width + (i * width), yk + height, 255, 255, 255);
		vp.prepareLine(xk + (i * width), yk + height, xk + width + (i * width), yk + height, 255, 255, 255);
		i += 2;
	}


	int c = value;

	int bin;

	int n = 8 * 4 - 1;


	while (n >= 0) {

		bin = (c % 2);
		c = c / 2;
		
		if (bin == 1) {
			int o = 0;
			while (o <= weite) {
				vp.prepareLine(xk + o + (n * width * 2), yk, xk + o + (n * width * 2), yk + height, 255, 255, 255);
				o += 1;
			}


		}
		n -= 1;
	}
	vp.sendLines();
	vp.swapBuffers();
}



void BinaryVisuals::prepareRepresentationINTA(ViewPortGL& vp, int xk, int yk, int width, int height) {
	int u = 0;
	while (u <= INT_MAX) {
		int weite = width;
		int i = 0;
		while (i <= 8 * 4 * 2 - 1) {
			vp.prepareLine(xk + (i * width), yk, xk + width + (i * width), yk, 255, 255, 255);
			vp.prepareLine(xk + (i * width), yk, xk + (i * width), yk + height, 255, 255, 255);
			vp.prepareLine(xk + width + (i * width), yk, xk + width + (i * width), yk + height, 255, 255, 255);
			vp.prepareLine(xk + (i * width), yk + height, xk + width + (i * width), yk + height, 255, 255, 255);
			i += 2;
		}



		int bin;
		int c = u;
		int n = 8 * 4 - 1;


		while (n >= 0) {

			bin = (c % 2);
			c = c / 2;

			if (bin == 1) {
				int o = 0;
				while (o <= weite) {
					vp.prepareLine(xk + o + (n * width * 2), yk, xk + o + (n * width * 2), yk + height, 255, 255, 255);
					o += 1;
				}


			}
			n -= 1;
		}
		vp.sendLines();
		vp.swapBuffers();
		vp.clearViewPort();
		u++;
	}

}