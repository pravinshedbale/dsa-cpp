class Student {
    private:
        string name;
        int rollNumber;
        int age;
    public:
        string getName() {
            return name;
        }

        int getRollNumber() {
            return rollNumber;
        }

        int getAge() {
            return age;
        }

        void setName(string studName) {
            name = studName;
        }
        void setRollNumber(int studRoll) {
            rollNumber = studRoll;
        }
        void setAge(int studAge) {
            age = studAge;
        }
        
};
