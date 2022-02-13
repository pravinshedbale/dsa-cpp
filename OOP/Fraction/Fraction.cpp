class Fraction {
    private:
        int numerator;
        int denominator;
    
    public:
        Fraction() {
        }
        Fraction(int numberator, int denominator) {
            this->numerator = numberator;
            this->denominator = denominator;
        }

        void setNumerator(int numerator) {
            this->numerator = numerator;
        }

        void setDenominator(int denominator) {
            this->denominator = denominator;
        }

        void printFraction() {
            if(numerator%denominator==0) {
                cout<<numerator/denominator<<endl;
                return;
            }
            cout<<numerator<<"/"<<denominator<<endl;
        }

        void simplify() {
            int gcd = 1;
            int j = min(this->numerator, this->denominator);
            for(int i=1;i<j;i++) {
                if(this->numerator%i==0 && this->denominator%i==0) {
                    gcd=i;
                }
            }
            this->numerator = this->numerator/gcd;
            this->denominator = this->denominator/gcd;
        }

        Fraction add(Fraction const &f2) {
            Fraction ans((this->denominator*f2.numerator)+(f2.denominator*this->numerator),this->denominator*f2.denominator);
            ans.simplify();
            return ans;
        }

        Fraction multiply(Fraction const &f2) {
            Fraction ans(this->numerator*f2.numerator,this->denominator*f2.denominator);
            ans.simplify();
            return ans;
        }
};