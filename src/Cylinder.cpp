# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include <iomanip>
const double PI = 3.141592653589793;
double Cylinder :: SurfaceArea(){
    double ans;
    ans = 2 * PI * radius * radius + 2 * PI * radius * height;
    return ans;
}

double Cylinder :: Volume(){
    double ans;
    ans = PI * radius * radius * height;
    return ans;
}

double Cylinder :: Circumference(){
    double ans;
    ans = 2 * PI * radius;
    return ans;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << fixed << std::setprecision(3)
        << "Circumference: " << cldr.Circumference() << endl
        << "SurfaceArea: " << cldr.SurfaceArea() << endl
        << "Volume: " << cldr.Volume() << endl;
    return out;
}

# endif
