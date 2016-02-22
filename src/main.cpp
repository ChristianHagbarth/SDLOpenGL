#include <iostream>
#include "SDLOpenGL.h"
#include <ngl/NGLInit.h>

void initializeGL();
void renderGL();

int main(int argc, char *argv[])
{
  SDLOpenGL window("test",0,0,1024,720);
  window.makeCurrent();
  initializeGL();
  while(true)
  {
    renderGL();
    window.swapWindow();
    SDL_Delay(10);

  }

  std::cout<<"Working\n";
}

void initializeGL()
{
  ngl::NGLInit::instance();
  glClearColor(0.8f,0.8f,0.8f,1.0f);

}

void renderGL()
{
 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

}
