//
// Created by matteo on 21/11/19.
//

#ifndef INC_3DOGRE_MAINAPP_H
#define INC_3DOGRE_MAINAPP_H

#include <memory>
#include <OgreApplicationContext.h>
#include <OgreWindowEventUtilities.h>
#include "InputManager.h"

using namespace Ogre;

class MainApp
{
public:
    MainApp(std::string appName);

    void start();

private:

    std::string appName;
    std::unique_ptr<Root> root;

    RenderWindow * window;
    SceneManager * sceneManager;

    InputManager inputManager;

    WindowEventListener windowEventListener;
};


#endif //INC_3DOGRE_MAINAPP_H
