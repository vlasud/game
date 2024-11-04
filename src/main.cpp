#include <graviton/Graviton.h>

int graviton::GravitonEntry(graviton::ApplicationArguments arguments)
{
    graviton::Engine::GetInstance().init();
    graviton::Engine::GetInstance().run();
    return 0;
}
