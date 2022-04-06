class Fraction {
    private:
        int numerator;
        int denominator;
    public:
        Fraction(int numerator, int demoninator) {
            this->numerator = numerator;
            this->denominator = demoninator;
        }

        void print() {
            cout<<this->numerator<<" / "<<this->denominator<<endl;
        }

        void add(Fraction &f2) {
            int resDenominator = this->denominator * f2.denominator;
            int resNumerator = this->denominator * f2.numerator + this->numerator * f2.denominator;
            
            this->numerator = resNumerator;
            this->denominator = resDenominator;
        }
};