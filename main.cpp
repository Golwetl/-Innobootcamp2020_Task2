//calculate the area of a triangle
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x[3],y[3],side[3];

	for (int i=0;i<3;i++)
		cin >> x[i] >> y[i]; 
	for (int i=0;i<3;i++){
		side[i] = sqrt(pow(x[i]-x[(i+1) % 3],2) + pow(y[i]-y[(i+1) % 3],2));
  }
	double p = (side[0] + side[1] + side[2])/2;
	double area = sqrt(p*(p-side[0])*(p-side[1])*(p-side[2]));
	if (side[0]*side[1]*side[2]*area != 0) 
		cout<< area;
	else
		cout<<"this triangle doesn't exist (area = 0)";
	return 0;
}