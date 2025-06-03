#pragma once
#include <stdexcept>
#include <numeric>
using namespace std;

namespace mathlib {
    template<typename T>
    class Fraction {
    public:
        Fraction(){}

        T numerator;
        T denominator;

        Fraction(T num, T denom) {
            if (denom == 0) {
                throw invalid_argument("Zero is not a valid denominator.");
            }
            numerator = num;
            denominator = denom;
        }

        friend Fraction operator+(const Fraction& a, const Fraction& b) {
            return Fraction(a.numerator * b.denominator + b.numerator * a.denominator,
                a.denominator * b.denominator);
        }

        friend Fraction operator-(const Fraction& a, const Fraction& b) {
            return Fraction(a.numerator * b.denominator - b.numerator * a.denominator,
                a.denominator * b.denominator);
        }

        friend Fraction operator*(const Fraction& a, const Fraction& b) {
            return Fraction(a.numerator * b.numerator,
                a.denominator * b.denominator);
        }

        friend Fraction operator/(const Fraction& a, const Fraction& b) {
            return Fraction(a.numerator * b.denominator,
                a.denominator * b.numerator);
        }


        friend bool operator>(const Fraction& a, const Fraction& b) {
            return (a.numerator / a.denominator) > (b.numerator / b.denominator);
        }
        friend bool operator<(const Fraction& a, const Fraction& b) {
            return (a.numerator / a.denominator) < (b.numerator / b.denominator);
        }
        friend bool operator==(const Fraction& a, const Fraction& b) {
            return (a.numerator / a.denominator) == (b.numerator / b.denominator);
        }
        friend bool operator!=(const Fraction& a, const Fraction& b) {
            return (a.numerator / a.denominator) != (b.numerator / b.denominator);
        }
        friend bool operator<=(const Fraction& a, const Fraction& b) {
            return (a.numerator / a.denominator) <= (b.numerator / b.denominator);
        }
        friend bool operator>=(const Fraction& a, const Fraction& b) {
            return (a.numerator / a.denominator) >= (b.numerator / b.denominator);
        }

        friend ostream& operator << (ostream& ostream, const Fraction& f) {
            return ostream << f.numerator << "/" << f.denominator;
        }

        friend istream& operator >> (istream& istream, Fraction& f) {
            T num;
            T denom;
            istream >> num;
            istream >> denom;
            f.numerator = num;
            f.denominator = denom;
            return istream;
        }

        void simplify() {
            T c = gcd(numerator, denominator);
            numerator /= c;
            denominator /= c;

            if (denominator < 0) {
                numerator = -numerator;
                denominator = -denominator;
            }
        }

        double toDouble() {
            return static_cast<double>(numerator) / denominator;
        }

    };
}

