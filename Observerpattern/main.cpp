 #include "Adapter.h"

int main()
{
    //��ģʽAdapter
    Target* pTarget = new Adapter();
    pTarget->Request();

    //����ģʽAdapter1
    Adaptee* ade = new Adaptee();
    Target* pTarget1= new Adapter1(ade);
    pTarget1->Request();

    //����ģʽAdapter2
    Target* pTarget2 = new Adapter1();
    pTarget2->Request();

    return 0;
}
