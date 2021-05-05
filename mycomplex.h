#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>

using namespace std;

/**@brief Creating class Complex Value
 *@param a_Re - Real part of complex value
 *@param a_Im - Imagine part of complex value
 */
class Complex
{
/**@param Re - Real part of complex value
*/
    double Re;
/**@param Im - Imagine part of complex value
*/
	double Im;
	public:
	    /**@brief Complex Value class constructor
	    */
        Complex(double aRe = 0, double aIm = 0);
        Complex(const Complex &);
        /**@brief Complex Value class destructor
	    */
        ~Complex();
        void Set(double aRe, double aIm = 0);
        operator double();
        /**@return Return abs of complex value
        */
        double abs();
        /**@brief Friend Operator for inserting complex value in stream
	    */
        friend istream & operator >> (istream &, Complex &);
        /**@brief Friend Operator for getting complex value in stream
	    */
        friend ostream & operator << (ostream &, Complex &);
        Complex operator + (const Complex &);
        Complex operator - (const Complex &);
        Complex operator + (const double &);
        friend Complex operator + (const double &, const Complex &);
        Complex operator - (const double &);
        friend Complex operator - (const double &, const Complex &);
        Complex operator * (const Complex &);
        Complex operator * (const double&);
        friend Complex operator * (const double &, const Complex &);
        Complex operator / (const double &);
        Complex & operator += (const Complex &);
        Complex & operator -= (const Complex &)    ;
        Complex & operator *= (const Complex &);
        Complex & operator += (const double &);
        Complex & operator -= (const double &);
        Complex & operator *= (const double  &);
        Complex & operator /= (const double &);
        Complex & operator = (const Complex &);
        Complex & operator = (const double &);
};
#endif
