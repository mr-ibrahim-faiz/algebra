#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<vector>
using std::vector;

/*
Solve an equation of the form axx+bx+c=0 and return the details in a vector as follow:
if the discriminant > 0, the vector contains the discriminant and the roots,
if the discriminant = 0, the vector contains the discriminant and the unique root,
if the discriminant < 0, the vector contains the discriminant, the real value and the imaginary value of the complex roots,
*/

vector<double> quadratic_equation_solver(double a, double b, double c){
	double discriminant{ pow(b,2) - 4 * a*c };

	if (discriminant > 0) {
		double x1 = (-b + sqrt(discriminant)) / (2.0 * a);
		double x2 = (-b - sqrt(discriminant)) / (2.0 * a);
		return { discriminant, x1, x2 };
	}
	else if (discriminant == 0) {
		double x = -b / (2.0*a);
		return { discriminant, x };
	}
	else {
		double re = -b / (2 * a);
		double im = sqrt(-discriminant) / (2 * a);
		return { discriminant, re, im };
	}
}