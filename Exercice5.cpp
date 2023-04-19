#include<iostream>
using namespace std ;

class animal{
    private:
    int age;
    string nom ;
    public:
    animal(int age ,string nom){
        this->age=age;
        this->nom=nom;
    }
    void set_value();
};
class zebra{
    protected:
      int age ;
    private:
       string nom;
    public:
       zebra(int age , string nom){
         this->age=age;
        this->nom=nom;
       }
};
int main(){
    zebra z(15,"zebraaa");
    dolphin d(20,"dolphiin");
    z.animal();
    d.zebra();

    return 0 ;
}