	// FILENAME: EnglishWeight.cpp
	// PROGRAMMER: Maya Cobb
	// DATE: Aug 2 2022
	// COMPILER: VSCode
	// REQUIRED: EnglishWeight.cpp, EW_Driver
	// PURPOSE: eng weight class declaration file

class EnglishWeight {
    
    public:

        EnglishWeight(void);

        EnglishWeight(int _pounds1, int _ounces1, int _pounds2, int _ounces2, double _number);

        int add(void);

        int subtract(void);

        double divide(void);

        double multiplyByNumber(int whichEnglishWeight, double number);

        double divideByNumber(int whichEnglishWeight, double number);

        int pounds;
        int ounces;
        int initialized;

        int pounds1;
        int ounces1;
        int pounds2;
        int ounces2;
        double number;
        int totalOunces1;
        int totalOunces2;

        void verify_initialization(void);
};
