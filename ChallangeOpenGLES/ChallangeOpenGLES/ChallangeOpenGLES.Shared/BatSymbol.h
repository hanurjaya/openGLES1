#ifndef __HelloBatSymbolNative__main__
#define __HelloBatSymbolNative__main__

#include <stdio.h>
#ifdef __ANDROID__
#include <GLES/gl.h>
#elif __APPLE__
#include <OpenGLES/ES1/gl.h>
#endif

void BatSymbol_setupGL(double width, double height);
void BatSymbol_tearDownGL();
void BatSymbol_update();
void BatSymbol_prepare();
void BatSymbol_draw();
void BatSymbol2_draw();
void BatSymbol3_draw();
#endif /* defined(__HelloBatSymbolNative__main__) */
