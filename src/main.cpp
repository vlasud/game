#include <graviton/Graviton.h>

int main()
{
    graviton::Engine::GetInstance().init();
    graviton::Engine::GetInstance().run();
    return 0;
}
