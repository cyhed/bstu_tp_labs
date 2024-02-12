// lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "DieselEngine.h"
#include "TurbojetEngine.h"
int main()
{
    
    // lab3
    Engine* engine = new Engine();
    std::cout << engine->Show() << std::endl;
    std::cout << Engine::GetCount() << std::endl;

    try {
        Engine* engine1 = new DieselEngine("name1");
        std::cout << engine1->Show() << std::endl;
        std::cout << Engine::GetCount() << std::endl;

        Engine* engine2 = new InternalCombustionEngine("name2");
        std::cout << engine2->Show() << std::endl;
        std::cout << Engine::GetCount() << std::endl;


        Engine* engine3 = new TurbojetEngine("name3");
        std::cout << engine3->Show() << std::endl;
        std::cout << engine->GetCount() << std::endl;

        delete engine;
        delete engine1;
        delete engine2;
        delete engine3;

        std::cout << Engine::GetCount() << std::endl;

        Engine* engine4 = new TurbojetEngine("name4\n");
        std::cout << engine4->Show() << std::endl;
        std::cout << engine4->GetCount() << std::endl;
    }
    catch (std::string arg) {
        std::cout << "error name: " << arg << std::endl;
    }
    // lab4
    
}
