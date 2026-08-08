class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> result(2);
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        result[0] = kelvin;
        result[1] = fahrenheit;
        return result;
    }
};