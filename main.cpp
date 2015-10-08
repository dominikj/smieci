#include <iostream>
#include <thread>
using namespace std;

class singletonMeyera {
public:
static singletonMeyera& getInst(){
    static singletonMeyera singleton;
    return singleton;
}
private:
singletonMeyera() {};
singletonMeyera(singletonMeyera&) = delete;
singletonMeyera& operator= (const singletonMeyera&) = delete;
};
int main()
{
singletonMeyera& sing = singletonMeyera::getInst();
    cout << "Hello world!" << endl;
    return 0;
}
