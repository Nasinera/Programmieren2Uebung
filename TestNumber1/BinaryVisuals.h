
#include "ViewPortGL.h"



class BinaryVisuals {
public:

	static void prepareBit(ViewPortGL& vp, int xk, int yk, int width, int height, bool isOne);

	static void prepareRepresentation(ViewPortGL& vp, unsigned char value, int xk, int yk, int width, int height);

	static void prepareRepresentationINT(ViewPortGL& vp, unsigned int value, int xk, int yk, int width, int height);

	static void prepareRepresentationINTA(ViewPortGL& vp, int xk, int yk, int width, int height);


};