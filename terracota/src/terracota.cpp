#include "terracota.h"

#include "frontend.h"
#include "titlescreen.h"
#include "settings.h"
#include "stage.h"

Terracota::Terracota()
    : Game ("a")
{
}

Level*
Terracota::load_level(const string& id)
{
    if (id == "a")
       return new FrontEnd("b","res/images/logos/logo-terracota.jpg");
    if (id == "b")
        return new FrontEnd("c","res/images/logos/logo-sdl.png");
    if (id == "c")
        return new FrontEnd("title", "res/images/logos/faixa_etaria.jpg");
    if (id == "title")
        return new TitleScreen();
    if (id == "settings")
        return new Settings();

	if (id == "stage1")
		return new Stage("stage1");

    
    return nullptr; 
}
