#include <iostream>
#include <string>
class Concert
{    
    public:    
        Concert();
        Concert(std::string name);
        ~Concert();
        std::string getName();
        void print()
        {
            std::cout << name <<"\n";
        };
        
    private:
        std::string name;
};

Concert::Concert() {
    std::cout << name << " - constructor\n";
};

Concert::Concert(std::string name)
{
    this->name = name;
    std::cout << name << " - constructor\n";
};

Concert::~Concert()
{
    std::cout << name << " - destructor\n";
};

std::string Concert::getName() {
    return this->name;
}


int main()
{
    {
        Concert lebed = Concert("lebedinoe ozero");
        lebed.print();
        Concert concert1 = Concert("concert1"); 
    }
    Concert concert2 = Concert("concert2");
    Concert* q;
    q = &concert2;
    q->getName();
    

    
    std::string(Concert:: *get)(void) = NULL;
    get = &Concert::getName;
    std::cout  << get<< "\n";

    
}


