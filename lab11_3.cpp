#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    ifstream score;
    score.open(score.txt);
    string x;
    double sum=0;
    double sumx2=0;
    int i=0;
    	while(getline(score.x)){
        sum+=atof(x.c_str());
        sumx2+=pow(atof(x.c_str()),2);
        i++;
        
        
        }
	    
    score.close();
    cout << "Number of data = "<<i;
    cout << setprecision(3);
    cout << "Mean = "<<sum/i;
    cout << "Standard deviation = "<<sqrt(((1.00/i)*sumx2)-pow(sum/i,2));
}