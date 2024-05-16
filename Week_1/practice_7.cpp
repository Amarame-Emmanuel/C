constexpr double square(double x) {
	return x*x;
}
int main()
{
const int var = 5;
constexpr double max1 = 1.4*square(17); // OK. 1.4*square(17) is a constant expression
constexpr double max2 = 1.4*square(var); // error : var is not a constant expression
const double max3 = 1.4*square(var); //OK, may be evaluated at run time
}