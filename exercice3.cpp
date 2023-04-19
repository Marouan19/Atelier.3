#include <iostream>
#include <cmath>

using namespace std;

class complexe {
    double Re;
    double Img;

public:
    complexe(double a = 0, double b = 0)
    {
        Re = a;
        Img = b;
    }
    void afficher()
    {
    	cout << Re;
    	
        if (Img >= 0)
            cout << " + ";
            
        cout << Img << "i" << endl;
    }
    double module()
    {
        return sqrt(Re * Re + Img + Img);
    }
    complexe conjugue()
    {
        complexe c;
        c.Re = Re;
        c.Img = -Img;
        return c;
    }
    
    complexe operator+(complexe a)
    {
        complexe s;
        s.Re = Re + a.Re;
        s.Img = Img + a.Img;
        return s;
    }
  
    complexe operator+(double x)
    {
        complexe s;
        s.Re = Re + x;
        s.Img = Img;
        return s;
    }
  
    complexe operator-(complexe a)
    {
        complexe s;
        s.Re = Re - a.Re;
        s.Img = Img - a.Img;
        return s;
    }
  
    complexe operator*(complexe a)
    {
        complexe p;
        p.Re = Re * a.Re - Img * a.Img;
        p.Img = Re * a.Img + Img * a.Re;
        return p;
    }

    friend complexe operator+(double, complexe);

};
complexe operator+(double x, complexe a)
{
    complexe s;
    s.Re = a.Re + x;
    s.Img = a.Img;
    return s;
    

}
int main()
{
    complexe a(1, 3), b(2, 7), c;
    cout << "Complexe A = ";
    a.afficher();
    cout << "Le module de A est : " << a.module() << endl;
    cout << "Le conjugue de A est : ";
    a.conjugue().afficher();
    
    cout << "A = ";
    a.afficher();
    cout << "B = ";
    b.afficher();
    
    cout << "A + B = ";
    c = (a + b);
	c.afficher();
    
    cout << "A + 12 = ";
    c = (a + 12);
	c.afficher();
    
    cout << "8 + A = ";
    c = (8 + a);
	c.afficher();
    
    cout << "A * B = ";
    c = (a * b);
	c.afficher();
    
    cout << "B - A = ";
    c = (b - a);
	c.afficher();
}
//Source : www.exelib.net