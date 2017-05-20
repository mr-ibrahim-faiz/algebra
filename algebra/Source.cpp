#include "Header.h"

//Quadratic equation solver

int main() {
	//for (int i = -256; i < 255; ++i)
	//	cout << i << "\t" << char(i) << endl;

	double a {0.0}, b {0.0}, c {0.0};
	cout << "Please enter the values of a, b and c: " << endl;
	while (cin >> a >> b >> c) {
		cout << "\nSolving: " << a << "x" << char(253) << ((b>=0)? "+":"-") << abs(b) << "x" << ((c >= 0) ? "+" : "-") << abs(c)
			<< "=0" << endl;
		cout << "\nRoot(s):" << endl;

		vector<double> solution_details = quadratic_equation_solver(a, b, c);
		if (solution_details[0] > 0) {
			cout << "x1=" << solution_details[1] << endl;
			cout << "x2=" << solution_details[2] << endl;
		}
		else if (solution_details[0] == 0) {
			cout << "x=" << solution_details[1] << endl;
		}
		else {
			cout << "x1=" << solution_details[1] << "+" << char(173) << solution_details[2] << endl;;
			cout << "x2=" << solution_details[1] << "-" << char(173) << solution_details[2] << endl;;
		}

		cout << "\nPlease enter the values of a, b and c: " << endl;

	}
	return 0;
}